#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16944F70)
#define MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16944FB0)
#define MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET UNITYSDK_OFFSET(0x16944FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeCollectPageController___c_TypeDefinitionIndex = 46484;

	class UIMiniscapeCollectPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMiniscapeCollectPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIMiniscapeCollectPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A570);
		}
		static ::System::Action** StaticGet___9__4_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x3A578);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPECOLLECTPAGECONTROLLER___C__ONUIINIT_B__4_1_OFFSET))(this);
		}
	};
}
