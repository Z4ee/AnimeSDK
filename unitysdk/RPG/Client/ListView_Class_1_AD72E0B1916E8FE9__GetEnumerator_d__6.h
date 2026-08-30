#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ListView_Class_1_AD72E0B1916E8FE9; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C4C4920)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_GAMEOBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4C49B0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C4C4A10)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C4C49C0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4C4910)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C4860)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_Class_1_AD72E0B1916E8FE9__GetEnumerator_d__6_TypeDefinitionIndex = 72485;

	class ListView_Class_1_AD72E0B1916E8FE9__GetEnumerator_d__6 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* __2__current; // 0x10
		::RPG::Client::ListView_Class_1_AD72E0B1916E8FE9* __4__this; // 0x18
		::System::Int32 _i_5__3; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 _n_5__2; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_MOVENEXT_OFFSET))(this);
		}

		::UnityEngine::GameObject* System_Collections_Generic_IEnumerator_UnityEngine_GameObject__get_Current()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_UNITYENGINE_GAMEOBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__GETENUMERATOR_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
