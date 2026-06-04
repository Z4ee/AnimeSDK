#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_1F5179B55B236E33_OFFSET UNITYSDK_OFFSET(0x19E130C0)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_407CBA72B7F248D7_OFFSET UNITYSDK_OFFSET(0x19E135A0)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_7904B15F86564DD3_OFFSET UNITYSDK_OFFSET(0x19E13780)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_ABDC0589660D8BCB_OFFSET UNITYSDK_OFFSET(0x19E13290)
#define RPG_GAMECORE_TRIGGEREFFECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19E13260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectList_TypeDefinitionIndex = 19139;

	class TriggerEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F5179B55B236E33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_1F5179B55B236E33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABDC0589660D8BCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_ABDC0589660D8BCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_407CBA72B7F248D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_407CBA72B7F248D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7904B15F86564DD3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_7904B15F86564DD3_OFFSET))(a1, a2);
		}
	};
}
