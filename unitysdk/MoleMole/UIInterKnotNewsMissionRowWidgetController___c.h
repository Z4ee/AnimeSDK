#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188C43D0)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188C4410)
#define MOLEMOLE_UIINTERKNOTNEWSMISSIONROWWIDGETCONTROLLER___C__ONITEMSELECT_B__15_0_OFFSET UNITYSDK_OFFSET(0x188C4420)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex = 83439;

	class UIInterKnotNewsMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x414E0);
		}
		static ::MoleMole::UIInterKnotNewsMissionRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotNewsMissionRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x414E8);
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
