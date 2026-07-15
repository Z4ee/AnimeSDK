#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_METHOD_2_11DA05A8B70E24A8_OFFSET UNITYSDK_OFFSET(0x1C152F70)
#define RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C153190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityEventConfig_TypeDefinitionIndex = 15950;

	class TimeRewindEntityEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::Boolean TriggerInRewind; // 0x18
		::System::Boolean TriggerInForward; // 0x19
		::System::Boolean MinimumTrigger; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11DA05A8B70E24A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindEntityEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindEntityEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYEVENTCONFIG_METHOD_2_11DA05A8B70E24A8_OFFSET))(a1, a2);
		}
	};
}
