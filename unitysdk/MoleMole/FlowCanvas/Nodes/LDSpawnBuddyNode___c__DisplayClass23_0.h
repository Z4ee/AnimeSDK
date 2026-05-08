#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDSpawnBuddyNode; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15419170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___C__DISPLAYCLASS23_0___SETBUDDYPOS_DEPRECATED_G___DELAYSET_0_OFFSET UNITYSDK_OFFSET(0x15419180)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSpawnBuddyNode___c__DisplayClass23_0_TypeDefinitionIndex = 47551;

	class LDSpawnBuddyNode___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::Entity* localAvatar; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDSpawnBuddyNode* __4__this; // 0x18
		::UnityEngine::Vector3 waitSetPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* __SetBuddyPos_Deprecated_g___DelaySet_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___C__DISPLAYCLASS23_0___SETBUDDYPOS_DEPRECATED_G___DELAYSET_0_OFFSET))(this);
		}
	};
}
