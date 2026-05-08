#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162CA1C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162CA200)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__172_0_OFFSET UNITYSDK_OFFSET(0x162CA210)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex = 73382;

	class UIGeneralNewsBubbleRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__172_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ECF0);
		}
		static ::MoleMole::UIGeneralNewsBubbleRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewsBubbleRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2ECF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __PlayGrayFadeInOrOutAnimation_b__172_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__172_0_OFFSET))(this);
		}
	};
}
