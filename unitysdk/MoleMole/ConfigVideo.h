#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGVIDEO__CTOR_OFFSET UNITYSDK_OFFSET(0x17D39130)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVideo_TypeDefinitionIndex = 44607;

	class ConfigVideo : public ::System::Object
	{
	public:
		::System::String* url; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVIDEO__CTOR_OFFSET))(this);
		}
	};
}
