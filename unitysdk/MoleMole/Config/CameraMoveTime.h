#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CAMERAMOVETIME__CTOR_OFFSET UNITYSDK_OFFSET(0xF132330)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraMoveTime_TypeDefinitionIndex = 51609;

	class CameraMoveTime : public ::System::Object
	{
	public:
		::System::String* formKey; // 0x10
		::System::String* toKey; // 0x18
		::System::Single time; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERAMOVETIME__CTOR_OFFSET))(this);
		}
	};
}
