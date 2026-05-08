#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Share { class CChangedPropertyInfo; }
namespace Share { class CPropertyContainer_COperatorHelper; }
namespace Share { class CToChangeInfoOfProperty; }
namespace Share { class DOnAfterPropertySet; }
namespace Share { class DOnBeforePropertyModify; }
namespace Share { class DOnPropertyChanged; }
namespace Share { template <typename T> class CPropertyOperator_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SHARE_CPROPERTYCONTAINER_ADDPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B27520)
#define SHARE_CPROPERTYCONTAINER_ADDRAWPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B27480)
#define SHARE_CPROPERTYCONTAINER_ADD_ONAFTERPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x18B26D00)
#define SHARE_CPROPERTYCONTAINER_ADD_ONBEFOREPROPERTYMODIFY_OFFSET UNITYSDK_OFFSET(0x18B26C00)
#define SHARE_CPROPERTYCONTAINER_ADD_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x18B26E00)
#define SHARE_CPROPERTYCONTAINER_FIREALLEVENT_OFFSET UNITYSDK_OFFSET(0x18B27760)
#define SHARE_CPROPERTYCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B276C0)
#define SHARE_CPROPERTYCONTAINER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B27300)
#define SHARE_CPROPERTYCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18B26F00)
#define SHARE_CPROPERTYCONTAINER_ISPROPERTYSETTED_OFFSET UNITYSDK_OFFSET(0x18B272A0)
#define SHARE_CPROPERTYCONTAINER_REFRESHRELATEDPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x18B27640)
#define SHARE_CPROPERTYCONTAINER_REFRESHRELATEDPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B275C0)
#define SHARE_CPROPERTYCONTAINER_REMOVE_ONAFTERPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x18B26D80)
#define SHARE_CPROPERTYCONTAINER_REMOVE_ONBEFOREPROPERTYMODIFY_OFFSET UNITYSDK_OFFSET(0x18B26C80)
#define SHARE_CPROPERTYCONTAINER_REMOVE_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x18B26E80)
#define SHARE_CPROPERTYCONTAINER_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B273F0)
#define SHARE_CPROPERTYCONTAINER_SETRAWPROPERTY_OFFSET UNITYSDK_OFFSET(0x18B27360)
#define SHARE_CPROPERTYCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B27710)
#define SHARE_CPROPERTYCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B26F20)
#define SHARE_CPROPERTYCONTAINER__ONAFTERPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x18B27280)
#define SHARE_CPROPERTYCONTAINER__ONBEFOREPROPERTYMODIFY_OFFSET UNITYSDK_OFFSET(0x18B27270)
#define SHARE_CPROPERTYCONTAINER__ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x18B27290)

namespace Share
{
	inline static constexpr unsigned int CPropertyContainer_TypeDefinitionIndex = 14786;

	class CPropertyContainer : public ::System::Object
	{
	public:
		::Share::DOnAfterPropertySet* OnAfterPropertySet; // 0x10
		::Share::CPropertyOperator_1<::Share::EPropertyType>* m_oPropertyOperator; // 0x18
		::Share::CPropertyContainer_COperatorHelper* m_oOperatorHelper; // 0x20
		::Share::DOnBeforePropertyModify* OnBeforePropertyModify; // 0x28
		::Share::DOnPropertyChanged* OnPropertyChanged; // 0x30

		::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::UInt16, ::System::Int32>* oPersistenceProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt16, ::System::Int32>*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER__CTOR_OFFSET))(this, oPersistenceProperties);
		}

		::System::Void add_OnBeforePropertyModify(::Share::DOnBeforePropertyModify* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnBeforePropertyModify*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ADD_ONBEFOREPROPERTYMODIFY_OFFSET))(this, value);
		}

		::System::Void remove_OnBeforePropertyModify(::Share::DOnBeforePropertyModify* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnBeforePropertyModify*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_REMOVE_ONBEFOREPROPERTYMODIFY_OFFSET))(this, value);
		}

		::System::Void add_OnAfterPropertySet(::Share::DOnAfterPropertySet* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnAfterPropertySet*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ADD_ONAFTERPROPERTYSET_OFFSET))(this, value);
		}

		::System::Void remove_OnAfterPropertySet(::Share::DOnAfterPropertySet* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnAfterPropertySet*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_REMOVE_ONAFTERPROPERTYSET_OFFSET))(this, value);
		}

		::System::Void add_OnPropertyChanged(::Share::DOnPropertyChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnPropertyChanged*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ADD_ONPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnPropertyChanged(::Share::DOnPropertyChanged* value)
		{
			return ((::System::Void(*)(::PVOID, ::Share::DOnPropertyChanged*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_REMOVE_ONPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Void _OnBeforePropertyModify(::Share::CToChangeInfoOfProperty* oToChangeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Share::CToChangeInfoOfProperty*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER__ONBEFOREPROPERTYMODIFY_OFFSET))(this, oToChangeInfo);
		}

		::System::Void _OnAfterPropertySet(::System::UInt16 arg1, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER__ONAFTERPROPERTYSET_OFFSET))(this, arg1, arg2, arg3);
		}

		::System::Void _OnPropertyChanged(::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>* oChanged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Share::EPropertyType, ::Share::CChangedPropertyInfo*>*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER__ONPROPERTYCHANGED_OFFSET))(this, oChanged);
		}

		::System::Boolean IsPropertySetted(::Share::EPropertyType ePropertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ISPROPERTYSETTED_OFFSET))(this, ePropertyType);
		}

		::System::Int32 GetProperty(::Share::EPropertyType ePropertyType)
		{
			return ((::System::Int32(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_GETPROPERTY_OFFSET))(this, ePropertyType);
		}

		::System::Int32 SetRawProperty(::Share::EPropertyType ePropertyType, ::System::Int32 dwValue, ::System::Boolean bExecCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_SETRAWPROPERTY_OFFSET))(this, ePropertyType, dwValue, bExecCallback);
		}

		::System::Int32 SetProperty(::Share::EPropertyType ePropertyType, ::System::Int32 dwValue, ::System::Boolean bExecCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_SETPROPERTY_OFFSET))(this, ePropertyType, dwValue, bExecCallback);
		}

		::System::Int32 AddRawProperty(::Share::EPropertyType ePropertyType, ::System::Int32 dwValue, ::System::Boolean bExecCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ADDRAWPROPERTY_OFFSET))(this, ePropertyType, dwValue, bExecCallback);
		}

		::System::Int32 AddProperty(::Share::EPropertyType ePropertyType, ::System::Int32 dwValue, ::System::Boolean bExecCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::Share::EPropertyType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_ADDPROPERTY_OFFSET))(this, ePropertyType, dwValue, bExecCallback);
		}

		::System::Void RefreshRelatedProperty(::System::Boolean bExecCallback, ::Il2CppArray<::Share::EPropertyType>* aPropertyIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::Share::EPropertyType>*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_REFRESHRELATEDPROPERTY_OFFSET))(this, bExecCallback, aPropertyIDs);
		}

		::System::Void RefreshRelatedProperty_1(::System::Boolean bExecCallback, ::System::Collections::Generic::IEnumerable_1<::Share::EPropertyType>* oPropertyIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::Share::EPropertyType>*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_REFRESHRELATEDPROPERTY_1_OFFSET))(this, bExecCallback, oPropertyIDs);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::Share::EPropertyType, ::System::Int32>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::Share::EPropertyType, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void FireAllEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_FIREALLEVENT_OFFSET))(this);
		}
	};
}
