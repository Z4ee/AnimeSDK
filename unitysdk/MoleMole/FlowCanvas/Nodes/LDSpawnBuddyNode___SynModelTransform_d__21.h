#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class LDSpawnBuddyNode; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12615E10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12616140)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x126161A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12616150)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12615E00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSPAWNBUDDYNODE___SYNMODELTRANSFORM_D__21__CTOR_OFFSET UNITYSDK_OFFSET(0x12615DF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSpawnBuddyNode___SynModelTransform_d__21_TypeDefinitionIndex = 40959;

	class LDSpawnBuddyNode___SynModelTransform_d__21 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::Battle::Entity* localAvatar; // 0x18
		::MoleMole::FlowCanvas::Nodes::LDSpawnBuddyNode* __4__this; // 0x20
		::System::Int32 __1__state; // 0x28
		::UnityEngine::Vector3 waitSetPos; // 0x2C

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
