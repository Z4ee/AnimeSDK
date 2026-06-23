#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A741C0)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A74200)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__174_0_OFFSET UNITYSDK_OFFSET(0x15A74210)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex = 86485;

	class UIGeneralNewsBubbleRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__174_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30C30);
		}
		static ::MoleMole::UIGeneralNewsBubbleRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralNewsBubbleRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralNewsBubbleRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x30C38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __PlayGrayFadeInOrOutAnimation_b__174_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER___C___PLAYGRAYFADEINOROUTANIMATION_B__174_0_OFFSET))(this);
		}
	};
}
