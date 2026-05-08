#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_82;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x146776F0)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14677730)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x14677740)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex = 80094;

	class UIHandBookTacticsBottomWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_82*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_82*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37DF0);
		}
		static ::MoleMole::UIHandBookTacticsBottomWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookTacticsBottomWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x37DF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__10_0(::Class_2_208CC9941471731A_82* a, ::Class_2_208CC9941471731A_82* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_82*, ::Class_2_208CC9941471731A_82*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, a, b);
		}
	};
}
