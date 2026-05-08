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

#define NPCCROWD_AI_ATTRACTORDEFINITION_FROMJSON_OFFSET UNITYSDK_OFFSET(0xBDCCD40)
#define NPCCROWD_AI_ATTRACTORDEFINITION_GETACTIONREFITEM_OFFSET UNITYSDK_OFFSET(0x50AA10)
#define NPCCROWD_AI_ATTRACTORDEFINITION_TOJSON_OFFSET UNITYSDK_OFFSET(0x50AA20)
#define NPCCROWD_AI_ATTRACTORDEFINITION__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDCCE70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorDefinition_TypeDefinitionIndex = 42404;

	struct alignas(8) AttractorDefinition
	{
		static ::Newtonsoft::Json::JsonSerializerSettings** StaticGet_settings()
		{
			return (::Newtonsoft::Json::JsonSerializerSettings**)Il2CppClass::FromTypeDefinitionIndex(AttractorDefinition_TypeDefinitionIndex)->GetStaticField(0x44B90);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::AI::ConditionActionItem>* conditionActionItems; // 0x10
		::System::String* loopSoundEvent; // 0x18
		::System::Single randomThreshold; // 0x20
		::System::Single attractCD; // 0x24
		::System::Single attractInitCD; // 0x28
		::UnityEngine::Vector2 queryBox; // 0x2C
		::UnityEngine::Vector3 queryBoxOffset; // 0x34
		::System::Single conflictRadius; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::AI::CrowdConditionBase*>* conditions; // 0x48
		::NPCCrowd::AI::TimeControl timeControl; // 0x50
		::System::Int32 priority; // 0x58
		::System::Single enterAngleLimitation; // 0x5C
		::System::Single turnAngleLimitation; // 0x60
		::System::Boolean tagFilter; // 0x64
		::Foundation::Unreal::SerializableGameplayTagQuery* tagMatchExpression; // 0x68
		::System::Boolean spawnDefaultNPC; // 0x70
		::System::Boolean useNpcSub; // 0x71
		::NPCCrowd::AI::PopulationTemplateRefItem populationRef; // 0x74
		::System::Int32 npcCommonTagID; // 0x78
		::System::Int32 npcSubID; // 0x7C
		::System::Boolean keepAttractorOnSpawn; // 0x80
		::System::Boolean keepActionTickOnSpawn; // 0x81
		::System::Boolean defaultDisable; // 0x82

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
