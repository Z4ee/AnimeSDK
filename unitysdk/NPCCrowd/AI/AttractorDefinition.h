#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/ConditionActionItem.h"
#include "unitysdk/NPCCrowd/AI/PopulationTemplateRefItem.h"
#include "unitysdk/NPCCrowd/AI/TimeControl.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::Unreal { class SerializableGameplayTagQuery; }
namespace NPCCrowd::AI { class AIActionRefItem; }
namespace NPCCrowd::AI { class CrowdConditionBase; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_ATTRACTORDEFINITION_FROMJSON_OFFSET UNITYSDK_OFFSET(0xD87B390)
#define NPCCROWD_AI_ATTRACTORDEFINITION_GETACTIONREFITEM_OFFSET UNITYSDK_OFFSET(0x5A0670)
#define NPCCROWD_AI_ATTRACTORDEFINITION_TOJSON_OFFSET UNITYSDK_OFFSET(0x5A0680)
#define NPCCROWD_AI_ATTRACTORDEFINITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xD87B4C0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorDefinition_TypeDefinitionIndex = 84591;

	struct alignas(8) AttractorDefinition
	{
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_settings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(AttractorDefinition_TypeDefinitionIndex)->GetStaticField(0x51B70);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::AI::ConditionActionItem>* conditionActionItems; // 0x10
		::System::Boolean randomPickSingleAction; // 0x18
		::System::String* loopSoundEvent; // 0x20
		::System::Single randomThreshold; // 0x28
		::System::Single attractCD; // 0x2C
		::System::Single attractInitCD; // 0x30
		::UnityEngine::Vector2 queryBox; // 0x34
		::UnityEngine::Vector3 queryBoxOffset; // 0x3C
		::System::Single conflictRadius; // 0x48
		::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* conditions; // 0x50
		::NPCCrowd::AI::TimeControl timeControl; // 0x58
		::System::Int32 priority; // 0x60
		::System::Single enterAngleLimitation; // 0x64
		::System::Single turnAngleLimitation; // 0x68
		::System::Boolean tagFilter; // 0x6C
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x70
		::System::Boolean spawnDefaultNPC; // 0x78
		::System::Boolean useNpcSub; // 0x79
		::NPCCrowd::AI::PopulationTemplateRefItem populationRef; // 0x7C
		::System::Int32 npcCommonTagID; // 0x80
		::System::Int32 npcSubID; // 0x84
		::System::Boolean keepAttractorOnSpawn; // 0x88
		::System::Boolean keepActionTickOnSpawn; // 0x89
		::System::Boolean defaultDisable; // 0x8A

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORDEFINITION__CCTOR_OFFSET))();
		}

		/*
		::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>* GetActionRefItem(::NPCCrowd::AI::ConditionContext context)
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::AI::AIActionRefItem*>*(*)(::PVOID, ::NPCCrowd::AI::ConditionContext))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORDEFINITION_GETACTIONREFITEM_OFFSET))(this, context);
		}
		*/

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORDEFINITION_TOJSON_OFFSET))(this);
		}

		static ::NPCCrowd::AI::AttractorDefinition FromJson(::System::String* json)
		{
			return ((::NPCCrowd::AI::AttractorDefinition(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORDEFINITION_FROMJSON_OFFSET))(json);
		}
	};
}
