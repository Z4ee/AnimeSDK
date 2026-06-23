#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175B6910)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175B6950)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_1_OFFSET UNITYSDK_OFFSET(0x175B6960)
#define MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_3_OFFSET UNITYSDK_OFFSET(0x175B6970)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex = 86152;

	class UIBangkovTaskDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIBangkovTaskDetailWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovTaskDetailWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450A0);
		}
		static ::System::Action** StaticGet___9__20_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450A8);
		}
		static ::System::Action** StaticGet___9__20_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTaskDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x450B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__20_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_1_OFFSET))(this);
		}

		::System::Void _OnClickWishListBtn_b__20_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTASKDETAILWIDGETCONTROLLER___C__ONCLICKWISHLISTBTN_B__20_3_OFFSET))(this);
		}
	};
}
