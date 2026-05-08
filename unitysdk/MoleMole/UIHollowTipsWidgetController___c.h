#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class TweenCallback; }

#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15CECBD0)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15CECC10)
#define MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DOANIMATION_B__8_2_OFFSET UNITYSDK_OFFSET(0x15CECC20)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController___c_TypeDefinitionIndex = 74456;

	class UIHollowTipsWidgetController___c : public ::System::Object
	{
	public:
		static ::DG::Tweening::TweenCallback** StaticGet___9__8_2()
		{
			return (::DG::Tweening::TweenCallback**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x328E0);
		}
		static ::MoleMole::UIHollowTipsWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowTipsWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowTipsWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x328E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoAnimation_b__8_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTIPSWIDGETCONTROLLER___C__DOANIMATION_B__8_2_OFFSET))(this);
		}
	};
}
