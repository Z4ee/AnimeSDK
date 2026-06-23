#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/System/Object.h"

namespace Share { class CPropertyContainer; }
template <typename T> class Class_0_16E4307DCC41950C;

#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER_GETPROPERTYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x1AFED4C0)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ISPERSISTENCEPORPERTY_OFFSET UNITYSDK_OFFSET(0x1AFED540)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ONAFTERPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x1AFED910)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ONBEFOREPROPERTYSET_OFFSET UNITYSDK_OFFSET(0x1AFED5B0)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER_TEMPLATEIDTOPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1AFED5A0)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFED4B0)
#define SHARE_CPROPERTYCONTAINER_COPERATORHELPER__FIXHP_OFFSET UNITYSDK_OFFSET(0x1AFED5D0)

namespace Share
{
	inline static constexpr unsigned int CPropertyContainer_COperatorHelper_TypeDefinitionIndex = 17789;

	class CPropertyContainer_COperatorHelper : public ::System::Object
	{
	public:
		::Share::CPropertyContainer* m_oPropertyContainer; // 0x10

		::System::Void _ctor(::Share::CPropertyContainer* oPropertyContainer)
		{
			return ((::System::Void(*)(::PVOID, ::Share::CPropertyContainer*))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER__CTOR_OFFSET))(this, oPropertyContainer);
		}

		::Class_0_16E4307DCC41950C<::Share::EPropertyType>* GetPropertyTemplate(::Share::EPropertyType ePropertyType)
		{
			return ((::Class_0_16E4307DCC41950C<::Share::EPropertyType>*(*)(::PVOID, ::Share::EPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER_GETPROPERTYTEMPLATE_OFFSET))(this, ePropertyType);
		}

		::System::Boolean IsPersistencePorperty(::System::UInt16 wPropertyType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ISPERSISTENCEPORPERTY_OFFSET))(this, wPropertyType);
		}

		::Share::EPropertyType TemplateIDToPropertyType(::System::UInt16 wPropertyType)
		{
			return ((::Share::EPropertyType(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER_TEMPLATEIDTOPROPERTYTYPE_OFFSET))(this, wPropertyType);
		}

		::System::Int32 OnBeforePropertySet(::System::UInt16 wPropertyType, ::System::Int32 dwCurValue, ::System::Int32 dwNextValue, ::System::Boolean bRefreshRelatedProperty, ::System::Boolean bExecCallback)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ONBEFOREPROPERTYSET_OFFSET))(this, wPropertyType, dwCurValue, dwNextValue, bRefreshRelatedProperty, bExecCallback);
		}

		::System::Void OnAfterPropertySet(::System::UInt16 wPropertyType, ::System::Int32 dwPrevValue, ::System::Int32 dwCurValue, ::System::Boolean bRefreshRelatedProperty, ::System::Boolean bExecCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER_ONAFTERPROPERTYSET_OFFSET))(this, wPropertyType, dwPrevValue, dwCurValue, bRefreshRelatedProperty, bExecCallback);
		}

		::System::Int32 _FixHp(::System::Int32 dwHpValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYCONTAINER_COPERATORHELPER__FIXHP_OFFSET))(this, dwHpValue);
		}
	};
}
