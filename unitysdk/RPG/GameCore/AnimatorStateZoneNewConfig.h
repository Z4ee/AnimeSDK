#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }

#define RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_METHOD_2_BE32964B682C3139_OFFSET UNITYSDK_OFFSET(0x1CE1ED60)
#define RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1EE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateZoneNewConfig_TypeDefinitionIndex = 16157;

	class AnimatorStateZoneNewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AnimatorStateZoneDescConfig*>* AnimatorStateZoneDescList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BE32964B682C3139(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateZoneNewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateZoneNewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATEZONENEWCONFIG_METHOD_2_BE32964B682C3139_OFFSET))(a1, a2);
		}
	};
}
