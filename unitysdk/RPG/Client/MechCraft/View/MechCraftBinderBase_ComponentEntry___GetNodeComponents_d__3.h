#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MechCraft::View { class MechCraftBinderBase_ComponentEntry; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD5E5930)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_COMPONENT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD5E5B30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_COMPONENT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD5E5A80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD5E5BB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD5E5AE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD5E5A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5E5920)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E5840)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftBinderBase_ComponentEntry___GetNodeComponents_d__3_TypeDefinitionIndex = 79978;

	class MechCraftBinderBase_ComponentEntry___GetNodeComponents_d__3 : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Component*>* _components_5__2; // 0x10
		::RPG::Client::MechCraft::View::MechCraftBinderBase_ComponentEntry* __4__this; // 0x18
		::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*> __2__current; // 0x20
		::System::Int32 __1__state; // 0x30
		::System::Int32 _i_5__3; // 0x34
		::System::Int32 __l__initialThreadId; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_MOVENEXT_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_UnityEngine_Component___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_COMPONENT___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_UnityEngine_Component___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::UnityEngine::Component*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_COMPONENT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE_COMPONENTENTRY___GETNODECOMPONENTS_D__3_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
