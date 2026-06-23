#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE_10;
namespace MoleMole { class UIRecommendTypePropertyRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0E780)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__3_OFFSET UNITYSDK_OFFSET(0x15C0E790)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__ISCANSELECT_2_OFFSET UNITYSDK_OFFSET(0x15C0EA90)
#define MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__ONPROPERTYROWCLICK_0_OFFSET UNITYSDK_OFFSET(0x15C0E7C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypePropertyRowWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 83808;

	class UIRecommendTypePropertyRowWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* propertyIdList; // 0x10
		::MoleMole::UIRecommendTypePropertyRowWidgetController* __4__this; // 0x18
		::Class_3_C3F0E3B5AB5977AE_10* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_B__3_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnPropertyRowClick_0(::System::UInt32 propertyId, ::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__ONPROPERTYROWCLICK_0_OFFSET))(this, propertyId, isSelect);
		}

		::System::Boolean _RefreshView_g__IsCanSelect_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPEPROPERTYROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHVIEW_G__ISCANSELECT_2_OFFSET))(this);
		}
	};
}
