#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDSpawnBuddyNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x149E2880)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149E2BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x149E2C10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x149E2BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149E2870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x149E2860)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSpawnBuddyNode___SynModelTransform_d__21_TypeDefinitionIndex = 57739;

	class LDSpawnBuddyNode___SynModelTransform_d__21 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::Battle::Entity* localAvatar; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDSpawnBuddyNode* __4__this; // 0x20
		::UnityEngine::Vector3 waitSetPos; // 0x28
		::System::Int32 __1__state; // 0x34

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
