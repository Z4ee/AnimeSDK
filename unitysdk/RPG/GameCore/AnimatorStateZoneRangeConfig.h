#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimZoneBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_METHOD_2_DADA70613716CE1B_OFFSET UNITYSDK_OFFSET(0x1947B7A0)
#define RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1947B9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateZoneRangeConfig_TypeDefinitionIndex = 15510;

	class AnimatorStateZoneRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorStateName; // 0x10
		::System::Single NormalizedTimeStart; // 0x18
		::System::Single NormalizedTimeEnd; // 0x1C
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x20
		::Il2CppArray<::RPG::GameCore::AnimZoneBaseConfig*>* ZoneConfigList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DADA70613716CE1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateZoneRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateZoneRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONERANGECONFIG_METHOD_2_DADA70613716CE1B_OFFSET))(a1, a2);
		}
	};
}
