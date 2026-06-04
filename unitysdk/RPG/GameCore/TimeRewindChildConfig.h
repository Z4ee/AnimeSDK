#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDCHILDCONFIG_METHOD_2_8DC8CC6A509F8BB3_OFFSET UNITYSDK_OFFSET(0x19DE5980)
#define RPG_GAMECORE_TIMEREWINDCHILDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE5B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindChildConfig_TypeDefinitionIndex = 19518;

	class TimeRewindChildConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState PropState; // 0x10
		::System::Single StateNormalize; // 0x14
		::System::String* ChildStableStateName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCHILDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8DC8CC6A509F8BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindChildConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindChildConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDCHILDCONFIG_METHOD_2_8DC8CC6A509F8BB3_OFFSET))(a1, a2);
		}
	};
}
