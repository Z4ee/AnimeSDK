#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x196F5A00)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x196F5A40)
#define MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__ONGETREWARDBUTTON_B__8_0_OFFSET UNITYSDK_OFFSET(0x196F5A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAntiqueRewardRowWidgetController___c_TypeDefinitionIndex = 42383;

	class UIAntiqueRewardRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAntiqueRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36AD0);
		}
		static ::MoleMole::UIAntiqueRewardRowWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAntiqueRewardRowWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAntiqueRewardRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x36AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetRewardButton_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIANTIQUEREWARDROWWIDGETCONTROLLER___C__ONGETREWARDBUTTON_B__8_0_OFFSET))(this);
		}
	};
}
