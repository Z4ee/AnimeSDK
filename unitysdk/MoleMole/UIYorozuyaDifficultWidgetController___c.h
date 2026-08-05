#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0C740)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0C780)
#define MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x15B0C790)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex = 49963;

	class UIYorozuyaDifficultWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DAF0);
		}
		static ::MoleMole::UIYorozuyaDifficultWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIYorozuyaDifficultWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIYorozuyaDifficultWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DAF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GoToMainCity_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYADIFFICULTWIDGETCONTROLLER___C__GOTOMAINCITY_B__26_0_OFFSET))(this);
		}
	};
}
