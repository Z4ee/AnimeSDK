#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoSpawnPoint; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191240D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___C__DISPLAYCLASS11_0___STARTLOAD_B__3_OFFSET UNITYSDK_OFFSET(0x191240E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchStageObject___c__DisplayClass11_0_TypeDefinitionIndex = 42311;

	class LDSwitchStageObject___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::MonoSpawnPoint* spawnPoint; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 __StartLoad_b__3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSTAGEOBJECT___C__DISPLAYCLASS11_0___STARTLOAD_B__3_OFFSET))(this);
		}
	};
}
