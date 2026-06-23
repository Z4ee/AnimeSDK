#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::Animation { class CrowdBangbooSize01EmojiMontageUnitTest; }
namespace NPCCrowd::Animation { class CrowdUnitTestBase; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_CHECKINIT_OFFSET UNITYSDK_OFFSET(0xFFC5CF0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0xFFC7C30)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_GETALLCROWDUNITTESTCASES_OFFSET UNITYSDK_OFFSET(0xFFC4820)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFFC4D90)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_ONGUI_OFFSET UNITYSDK_OFFSET(0xFFC7560)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_RANDOMPLAYANIM_OFFSET UNITYSDK_OFFSET(0xFFC5F10)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_REPLAYBANGBOOSIZE01EMOJIMONTAGE_OFFSET UNITYSDK_OFFSET(0xFFC6B40)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_RESPAWNCROWDENTITIES_OFFSET UNITYSDK_OFFSET(0xFFC5F90)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_TRYPLAYBANGBOOSIZE01EMOJIMONTAGE_OFFSET UNITYSDK_OFFSET(0xFFC6E30)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xFFC4DD0)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_VALIDATEBANGBOOMONTAGERUNTIMERANGE_OFFSET UNITYSDK_OFFSET(0xFFC7410)
#define NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC7D40)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int CrowdBenchmarkBehavior_TypeDefinitionIndex = 55454;

	class CrowdBenchmarkBehavior : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single updateInterval; // 0x0
		::NPCCrowd::Animation::CrowdUnitTestBase* crowdUnitTest; // 0x18
		::Sirenix::OdinInspector::ValueDropdownList_1<::NPCCrowd::Animation::CrowdUnitTestBase*>* cacheCrowdUnitTestCases; // 0x20
		::System::Single spawnPosInternalMulti; // 0x28
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* crowdEntityComs; // 0x30
		::System::Single updateTime; // 0x38
		::System::String* npcCrowdSummary; // 0x40
		::System::Boolean enableRandomAnim; // 0x48
		::System::Single randomAnimInterval; // 0x4C
		::System::Int32 randomAnimCount; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* randomAnimationIds; // 0x58
		::System::Single randomAnimTime; // 0x60
		::System::Boolean _initialized; // 0x64
		::System::Boolean _bSetupScene; // 0x65

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR__CTOR_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::NPCCrowd::Animation::CrowdUnitTestBase*>* GetAllCrowdUnitTestCases()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::NPCCrowd::Animation::CrowdUnitTestBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_GETALLCROWDUNITTESTCASES_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_UPDATE_OFFSET))(this);
		}

		::System::Void CheckInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_CHECKINIT_OFFSET))(this);
		}

		::System::Void RespawnCrowdEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_RESPAWNCROWDENTITIES_OFFSET))(this);
		}

		::System::Void ReplayBangbooSize01EmojiMontage(::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest* testCase, ::System::Int32 expectedCount)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_REPLAYBANGBOOSIZE01EMOJIMONTAGE_OFFSET))(this, testCase, expectedCount);
		}

		::System::Boolean TryPlayBangbooSize01EmojiMontage(::Class_3_F2DAD7F45F518868* npcComponent, ::System::Int32 spawnIndex, ::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest* testCase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Int32, ::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_TRYPLAYBANGBOOSIZE01EMOJIMONTAGE_OFFSET))(this, npcComponent, spawnIndex, testCase);
		}

		static ::System::Boolean ValidateBangbooMontageRuntimeRange(::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest* testCase, ::System::Int32 count, ::ENPCAvatarSize resolvedSize)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Animation::CrowdBangbooSize01EmojiMontageUnitTest*, ::System::Int32, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_VALIDATEBANGBOOMONTAGERUNTIMERANGE_OFFSET))(testCase, count, resolvedSize);
		}

		::System::Void RandomPlayAnim(::Class_3_F2DAD7F45F518868* npcCom, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* randomAnimationIds)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_RANDOMPLAYANIM_OFFSET))(this, npcCom, randomAnimationIds);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_ONGUI_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CROWDBENCHMARKBEHAVIOR_CLOSESHADOW_OFFSET))(this);
		}
	};
}
