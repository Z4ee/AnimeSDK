#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffectList.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_6B180752972582D3_OFFSET UNITYSDK_OFFSET(0x1B054B20)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_985BBD5F1E4E2064_OFFSET UNITYSDK_OFFSET(0x1B054B80)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_BCA314B6F485615A_OFFSET UNITYSDK_OFFSET(0x1B054B50)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET UNITYSDK_OFFSET(0x1B054340)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B054330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListForUI_TypeDefinitionIndex = 22067;

	class TriggerEffectListForUI : public ::RPG::GameCore::TriggerEffectList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BCA314B6F485615A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_BCA314B6F485615A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C96983DA1F5F1F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6B180752972582D3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_6B180752972582D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_985BBD5F1E4E2064(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_985BBD5F1E4E2064_OFFSET))(a1, a2);
		}
	};
}
