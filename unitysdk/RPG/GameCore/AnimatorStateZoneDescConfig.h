#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationZone; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_METHOD_2_F98115BD32FC648F_OFFSET UNITYSDK_OFFSET(0x16F83E30)
#define RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F83FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateZoneDescConfig_TypeDefinitionIndex = 14944;

	class AnimatorStateZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F98115BD32FC648F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateZoneDescConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateZoneDescConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONEDESCCONFIG_METHOD_2_F98115BD32FC648F_OFFSET))(a1, a2);
		}
	};
}
