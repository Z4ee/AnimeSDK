#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationZone; }
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_METHOD_2_A6A3E902FFDEB851_OFFSET UNITYSDK_OFFSET(0x1CE1E970)
#define RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1EAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateGroupZoneDescConfig_TypeDefinitionIndex = 16155;

	class AnimatorStateGroupZoneDescConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorStateNames; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6A3E902FFDEB851(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateGroupZoneDescConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateGroupZoneDescConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEGROUPZONEDESCCONFIG_METHOD_2_A6A3E902FFDEB851_OFFSET))(a1, a2);
		}
	};
}
