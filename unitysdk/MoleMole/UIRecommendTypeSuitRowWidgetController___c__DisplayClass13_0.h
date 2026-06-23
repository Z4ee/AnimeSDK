#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRecommendTypeSuitRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15326B90)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15326BA0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x15326BD0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__GETSUITFILTERINDEX_3_OFFSET UNITYSDK_OFFSET(0x15326EE0)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__ISCANSELECT_4_OFFSET UNITYSDK_OFFSET(0x15326F40)
#define MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__ONSUITROWCLICK_2_OFFSET UNITYSDK_OFFSET(0x15326C30)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecommendTypeSuitRowWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 63871;

	class UIRecommendTypeSuitRowWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_6CC2897B74C41026_2>* showSuitList; // 0x10
		::MoleMole::UIRecommendTypeSuitRowWidgetController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* suitIdList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshView_g__OnSuitRowClick_2(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__ONSUITROWCLICK_2_OFFSET))(this, isSelect);
		}

		::System::Int32 _RefreshView_g__GetSuitFilterIndex_3(::System::Int32 suitId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__GETSUITFILTERINDEX_3_OFFSET))(this, suitId);
		}

		::System::Boolean _RefreshView_g__IsCanSelect_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECOMMENDTYPESUITROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHVIEW_G__ISCANSELECT_4_OFFSET))(this);
		}
	};
}
