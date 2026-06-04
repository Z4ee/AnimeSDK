#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TriggerEffectList.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_2361F01888B2CB87_OFFSET UNITYSDK_OFFSET(0x19E13AA0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_48FA53C77A63BD51_OFFSET UNITYSDK_OFFSET(0x19E13A50)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET UNITYSDK_OFFSET(0x19E13430)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_F87975CFF75EC062_OFFSET UNITYSDK_OFFSET(0x19E13A00)
#define RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET UNITYSDK_OFFSET(0x19E13400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListForUI_TypeDefinitionIndex = 21644;

	class TriggerEffectListForUI : public ::RPG::GameCore::TriggerEffectList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_48FA53C77A63BD51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_48FA53C77A63BD51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C96983DA1F5F1F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_C96983DA1F5F1F8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F87975CFF75EC062(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_F87975CFF75EC062_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2361F01888B2CB87(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectListForUI* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectListForUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTFORUI_METHOD_4_2361F01888B2CB87_OFFSET))(a1, a2);
		}
	};
}
