#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::FlowCanvas::Nodes { class LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16B7CEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1___TRANSFERAVATARTOLOOPSCENE_G___DELAYSET_1_OFFSET UNITYSDK_OFFSET(0x16B7D130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1___TRANSFERAVATARTOLOOPSCENE_G___SETPOS_0_OFFSET UNITYSDK_OFFSET(0x16B7CED0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_1_TypeDefinitionIndex = 71466;

	class LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDLevelZeroEnterLoopSceneNode___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::MoleMole::MonoSpawnPoint* waitSpawn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void __TransferAvatarToLoopScene_g___SetPos_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1___TRANSFERAVATARTOLOOPSCENE_G___SETPOS_0_OFFSET))(this);
		}

		::System::Collections::IEnumerator* __TransferAvatarToLoopScene_g___DelaySet_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELZEROENTERLOOPSCENENODE___C__DISPLAYCLASS8_1___TRANSFERAVATARTOLOOPSCENE_G___DELAYSET_1_OFFSET))(this);
		}
	};
}
