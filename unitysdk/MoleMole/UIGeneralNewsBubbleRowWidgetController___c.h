#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E84E00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19E84E40)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__176_0_OFFSET UNITYSDK_OFFSET(0x19E84E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex = 43627;

	class UIGeneralNewsBubbleRowWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralNewsBubbleRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewsBubbleRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32CD0);
		}
		static ::System::Action** StaticGet___9__176_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __PlayGrayFadeInOrOutAnimation_b__176_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__176_0_OFFSET))(this);
		}
	};
}
