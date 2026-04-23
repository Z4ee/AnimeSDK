#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_METHOD_3_3E7D1A0EE49DE803_OFFSET UNITYSDK_OFFSET(0x18E58260)
#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_METHOD_3_A6B690297DC1E930_OFFSET UNITYSDK_OFFSET(0x18E581E0)
#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E58230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAvatarHUDSpecialEffect_TypeDefinitionIndex = 21848;

	class ShowAvatarHUDSpecialEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6B690297DC1E930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_METHOD_3_A6B690297DC1E930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E7D1A0EE49DE803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_METHOD_3_3E7D1A0EE49DE803_OFFSET))(a1, a2);
		}
	};
}
