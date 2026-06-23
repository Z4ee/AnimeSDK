#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_ADD_1_OFFSET UNITYSDK_OFFSET(0x10428C20)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_ADD_OFFSET UNITYSDK_OFFSET(0x10428490)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CLEAR_OFFSET UNITYSDK_OFFSET(0x104285C0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x10428D50)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CONTAINS_OFFSET UNITYSDK_OFFSET(0x104286D0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_COPYTO_OFFSET UNITYSDK_OFFSET(0x10428800)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10428290)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x10428A60)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x10428B40)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x10429780)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1042A120)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1042A200)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x10428E70)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_REMOVE_OFFSET UNITYSDK_OFFSET(0x10428930)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x10429FF0)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x10428390)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x10428F90)
#define MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB__CTOR_OFFSET UNITYSDK_OFFSET(0x10428280)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_Class_1_AA89291CA9B11FFB_TypeDefinitionIndex = 70692;

	class UserLocalDataItem_Class_1_AA89291CA9B11FFB : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* Field_1_0; // 0x10

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Add(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void Add_1(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_ADD_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsKey(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_CONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Boolean Remove_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValue(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*&))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* get_Item(::System::Int32 a1)
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::Int32>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_CLASS_1_AA89291CA9B11FFB_GET_VALUES_OFFSET))(this);
		}
	};
}
