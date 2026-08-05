#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCAVATARTEST_CHECKINIT_OFFSET UNITYSDK_OFFSET(0x13DF2BB0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_CREATETESTNPC_OFFSET UNITYSDK_OFFSET(0x13DF2FB0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_ICREATETESTNPC_OFFSET UNITYSDK_OFFSET(0x13DF3080)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_OPENDEBUGINSPECTOR_OFFSET UNITYSDK_OFFSET(0x13DF2DC0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x13DF3280)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_PLAYGRAPH_OFFSET UNITYSDK_OFFSET(0x13DF34C0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_REBUILDGRAPH_OFFSET UNITYSDK_OFFSET(0x13DF3480)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SETCLIPSPEED_OFFSET UNITYSDK_OFFSET(0x13DF3400)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SETPATHSTATE_OFFSET UNITYSDK_OFFSET(0x13DF2F00)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_SPAWNCOLLECTION_OFFSET UNITYSDK_OFFSET(0x13DF2C50)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STARTSPAWNNPC_OFFSET UNITYSDK_OFFSET(0x13DF3110)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STOPANIM_OFFSET UNITYSDK_OFFSET(0x13DF3360)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_STOPSPAWN_OFFSET UNITYSDK_OFFSET(0x13DF3240)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_TEST500ABILITY_OFFSET UNITYSDK_OFFSET(0x13DF3500)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x13DF2B60)
#define NPCCROWD_ANIMATION_NPCAVATARTEST_WHILESPAWN_OFFSET UNITYSDK_OFFSET(0x13DF31C0)
#define NPCCROWD_ANIMATION_NPCAVATARTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF35A0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCAvatarTest_TypeDefinitionIndex = 42632;

	class NPCAvatarTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _initialized; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* preSpawnNPCTags; // 0x20
		::Class_3_F2DAD7F45F518868* npc; // 0x28
		::System::Single SpawnWaitTime; // 0x30
		::System::Boolean StartSpawn; // 0x34

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
