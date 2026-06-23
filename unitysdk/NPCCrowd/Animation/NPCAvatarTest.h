#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class WPGraphDataAssetSO; }
namespace NPCCrowd::AI { class WPGraphDataStateAssetSO; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCAVATARTEST_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x1136F280)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_CREATETESTNPC_OFFSET UNITYSDK_OFFSET(0x1136F750)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_ICREATETESTNPC_OFFSET UNITYSDK_OFFSET(0x1136F810)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_OPENDEBUGINSPECTOR_OFFSET UNITYSDK_OFFSET(0x1136F610)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1136FA10)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYGRAPH_OFFSET UNITYSDK_OFFSET(0x1136FC10)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0x1136FBD0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SETCLIPSPEED_OFFSET UNITYSDK_OFFSET(0x1136FB50)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SETPATHSTATE_OFFSET UNITYSDK_OFFSET(0x1136F3E0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SPAWNCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1136F4A0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STARTSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x1136F8A0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STOPANIM_OFFSET UNITYSDK_OFFSET(0x1136FA90)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STOPSPAWN_OFFSET UNITYSDK_OFFSET(0x1136F9D0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_TEST500ABILITY_OFFSET UNITYSDK_OFFSET(0x1136FC50)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1136F230)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_WHILESPAWN_OFFSET UNITYSDK_OFFSET(0x1136F950)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1136FCF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAvatarTest_TypeDefinitionIndex = 71674;

	class NPCAvatarTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::NPCCrowd::AI::WPGraphDataAssetSO* path; // 0x18
		::NPCCrowd::AI::WPGraphDataStateAssetSO* state; // 0x20
		::System::Boolean _initialized; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* preSpawnNPCTags; // 0x30
		::Class_3_F2DAD7F45F518868* npc; // 0x38
		::System::Single SpawnWaitTime; // 0x40
		::System::Boolean StartSpawn; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_UPDATE_OFFSET))(this);
		}

		::System::Void CheckInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_CHECKINIT_OFFSET))(this);
		}

		::System::Void SpawnCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_SPAWNCOLLECTION_OFFSET))(this);
		}

		::System::Void OpenDebugInspector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_OPENDEBUGINSPECTOR_OFFSET))(this);
		}

		::System::Void SetPathState(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_SETPATHSTATE_OFFSET))(this, idx);
		}

		::System::Void CreateTestNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_CREATETESTNPC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ICreateTestNPC(::System::UInt32 tagID, ::System::Int32 sectionID)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_ICREATETESTNPC_OFFSET))(this, tagID, sectionID);
		}

		::System::Void StartSpawnNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_STARTSPAWNNPC_OFFSET))(this);
		}

		::System::Void StopSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_STOPSPAWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WhileSpawn()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_WHILESPAWN_OFFSET))(this);
		}

		::System::Void PlayAnim(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYANIM_OFFSET))(this, id);
		}

		::System::Void StopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_STOPANIM_OFFSET))(this);
		}

		::System::Void SetClipSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_SETCLIPSPEED_OFFSET))(this, speed);
		}

		::System::Void RebuildGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_REBUILDGRAPH_OFFSET))(this);
		}

		::System::Void PlayGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYGRAPH_OFFSET))(this);
		}

		::System::Void Test500Ability()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCAVATARTEST_TEST500ABILITY_OFFSET))(this);
		}
	};
}
