#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_2BE45E4CA1100E05_OFFSET UNITYSDK_OFFSET(0x1B0544B0)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_ABDC0589660D8BCB_OFFSET UNITYSDK_OFFSET(0x1B0541C0)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_C034ADA0E1ED7580_OFFSET UNITYSDK_OFFSET(0x1B054790)
#define RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_C2336D024CB6C763_OFFSET UNITYSDK_OFFSET(0x1B054060)
#define RPG_GAMECORE_TRIGGEREFFECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0541B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectList_TypeDefinitionIndex = 19495;

	class TriggerEffectList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2336D024CB6C763(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_C2336D024CB6C763_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ABDC0589660D8BCB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_ABDC0589660D8BCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BE45E4CA1100E05(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_2BE45E4CA1100E05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C034ADA0E1ED7580(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TriggerEffectList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TriggerEffectList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLIST_METHOD_3_C034ADA0E1ED7580_OFFSET))(a1, a2);
		}
	};
}
