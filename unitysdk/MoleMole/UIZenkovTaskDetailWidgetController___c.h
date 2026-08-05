#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C2AEA0)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2AEE0)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__29_1_OFFSET UNITYSDK_OFFSET(0x11C2AEF0)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__29_3_OFFSET UNITYSDK_OFFSET(0x11C2AF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex = 87644;

	class UIZenkovTaskDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__29_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D580);
		}
		static ::MoleMole::UIZenkovTaskDetailWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIZenkovTaskDetailWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D588);
		}
		static ::System::Action** StaticGet___9__29_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__29_1_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__29_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__29_3_OFFSET))(this);
		}
	};
}
