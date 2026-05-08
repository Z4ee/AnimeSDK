#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1640E590)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1640E5D0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__ONITEMSELECT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1640E5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex = 82403;

	class UIInterKnotNewsMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIInterKnotNewsMissionRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsMissionRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF00);
		}
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3EF08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnItemSelect_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__ONITEMSELECT_B__15_0_OFFSET))(this);
		}
	};
}
