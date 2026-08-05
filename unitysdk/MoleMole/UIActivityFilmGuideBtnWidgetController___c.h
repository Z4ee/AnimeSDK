#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DA2AF0)
#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11DA2B30)
#define MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__ONBTNCLICK_B__7_0_OFFSET UNITYSDK_OFFSET(0x11DA2B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex = 66165;

	class UIActivityFilmGuideBtnWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIActivityFilmGuideBtnWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIActivityFilmGuideBtnWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FE90);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIActivityFilmGuideBtnWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4FE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClick_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFILMGUIDEBTNWIDGETCONTROLLER___C__ONBTNCLICK_B__7_0_OFFSET))(this);
		}
	};
}
