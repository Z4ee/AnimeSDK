#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ListView; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C47E0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C4C4540)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C4C4610)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4C4870)
#define RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C1F70)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_Class_1_AD72E0B1916E8FE9_TypeDefinitionIndex = 72484;

	class ListView_Class_1_AD72E0B1916E8FE9 : public ::System::Object
	{
	public:
		::RPG::Client::ListView* CFKHNPGEAJA; // 0x10

		::System::Void _ctor(::RPG::Client::ListView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ListView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_AD72E0B1916E8FE9_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
