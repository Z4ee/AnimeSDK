#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ListView; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD3FE8C0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xD3FE1B0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xD3FE3F0)
#define RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xD3FE950)
#define RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FE1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_Class_1_6749E540A86D641F_TypeDefinitionIndex = 72558;

	class ListView_Class_1_6749E540A86D641F : public ::System::Object
	{
	public:
		::RPG::Client::ListView* CFKHNPGEAJA; // 0x10

		::System::Void _ctor(::RPG::Client::ListView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ListView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLASS_1_6749E540A86D641F_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
