#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGRTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18571030)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugRTName_TypeDefinitionIndex = 37173;

	class DebugRTName : public ::System::Object
	{
	public:
		::System::String* DisplayName; // 0x10
		::System::String* RTName; // 0x18
		::System::Boolean DisableTAA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGRTNAME__CTOR_OFFSET))(this);
		}
	};
}
