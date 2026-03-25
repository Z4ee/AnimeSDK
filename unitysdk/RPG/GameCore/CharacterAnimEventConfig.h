#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_METHOD_2_FEB82CF4EAE37C9A_OFFSET UNITYSDK_OFFSET(0x170650C0)
#define RPG_GAMECORE_CHARACTERANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17065300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimEventConfig_TypeDefinitionIndex = 14915;

	class CharacterAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* AnimatorStateEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* AnimatorBehaviourEvents; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* AnimatorStateGroupEvents; // 0x20
		::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>* LogicAnimEvents; // 0x28
		::System::String* ReferenceJsonConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FEB82CF4EAE37C9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_METHOD_2_FEB82CF4EAE37C9A_OFFSET))(a1, a2);
		}
	};
}
