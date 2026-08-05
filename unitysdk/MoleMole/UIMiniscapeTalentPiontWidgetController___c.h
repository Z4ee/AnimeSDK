#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A35570)
#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18A355B0)
#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__PLAYRESETSTATEANIMATION_B__24_0_OFFSET UNITYSDK_OFFSET(0x18A355C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex = 45505;

	class UIMiniscapeTalentPiontWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FF80);
		}
		static ::MoleMole::UIMiniscapeTalentPiontWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIMiniscapeTalentPiontWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayResetStateAnimation_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__PLAYRESETSTATEANIMATION_B__24_0_OFFSET))(this);
		}
	};
}
