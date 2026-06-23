#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPosition; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_ADD_1_OFFSET UNITYSDK_OFFSET(0x115A0AE0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_ADD_OFFSET UNITYSDK_OFFSET(0x115A0350)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CLEAR_OFFSET UNITYSDK_OFFSET(0x115A0480)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x115A0C10)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CONTAINS_OFFSET UNITYSDK_OFFSET(0x115A0590)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_COPYTO_OFFSET UNITYSDK_OFFSET(0x115A06C0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x115A0150)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x115A0920)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x115A0A00)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x115A1100)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x115A1590)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x115A1670)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x115A0D30)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_REMOVE_OFFSET UNITYSDK_OFFSET(0x115A07F0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x115A1460)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x115A0250)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x115A0E50)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x115A0140)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A_TypeDefinitionIndex = 70687;

	class UserLocalDataItem_Class_1_F68D4DB0B1BEFC7A : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* Field_1_0; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add_1(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_ADD_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsKey(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_CONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Boolean Remove_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValue(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* get_Item(::System::Int32 a1)
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::Int32>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_F68D4DB0B1BEFC7A_GET_VALUES_OFFSET))(this);
		}
	};
}
