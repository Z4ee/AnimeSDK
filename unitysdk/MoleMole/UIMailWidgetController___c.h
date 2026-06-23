#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D22E0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174D2320)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___C__REFRESHVIEW_B__7_1_OFFSET UNITYSDK_OFFSET(0x174D2330)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailWidgetController___c_TypeDefinitionIndex = 56687;

	class UIMailWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMailWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMailWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43350);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x43358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___C__REFRESHVIEW_B__7_1_OFFSET))(this);
		}
	};
}
