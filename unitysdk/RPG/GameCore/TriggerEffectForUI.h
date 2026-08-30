#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_341885745B097CA7_OFFSET UNITYSDK_OFFSET(0x1D551250)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_47BA0C7E37299F55_OFFSET UNITYSDK_OFFSET(0x1D54C0B0)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_6DDE9F5584309422_OFFSET UNITYSDK_OFFSET(0x1D5511D0)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_FAFE4DECB3323162_OFFSET UNITYSDK_OFFSET(0x1D551150)
#define RPG_GAMECORE_TRIGGEREFFECTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D54C060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectForUI_TypeDefinitionIndex = 19918;

	class TriggerEffectForUI : public ::RPG::GameCore::TriggerEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6DDE9F5584309422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_6DDE9F5584309422_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_47BA0C7E37299F55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_47BA0C7E37299F55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FAFE4DECB3323162(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_FAFE4DECB3323162_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_341885745B097CA7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTFORUI_METHOD_4_341885745B097CA7_OFFSET))(a1, a2);
		}
	};
}
