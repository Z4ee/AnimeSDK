#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x148B83E0)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x148B8420)
#define MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_1_OFFSET UNITYSDK_OFFSET(0x148B8430)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostTypeRowWidgetController___c_TypeDefinitionIndex = 58639;

	class UIInterKnotPostTypeRowWidgetController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__6_1()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostTypeRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CC70);
		}
		static ::MoleMole::UIInterKnotPostTypeRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIInterKnotPostTypeRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotPostTypeRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3CC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTTYPEROWWIDGETCONTROLLER___C__ONSCROLLITEMUPDATE_B__6_1_OFFSET))(this);
		}
	};
}
