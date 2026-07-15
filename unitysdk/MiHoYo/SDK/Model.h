#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1991BB80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Model_TypeDefinitionIndex = 7535;

	class Model : public ::System::Object
	{
	public:
		// static const ::System::String* LOGIN; // 0x0
		// static const ::System::String* BIND; // 0x0
		// static const ::System::String* PAY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL__CTOR_OFFSET))(this);
		}
	};
}
