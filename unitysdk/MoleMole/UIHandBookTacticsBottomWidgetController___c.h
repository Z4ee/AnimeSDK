#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_547;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3285B0)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3285F0)
#define MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A328600)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex = 40326;

	class UIHandBookTacticsBottomWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookTacticsBottomWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookTacticsBottomWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D090);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_547*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_547*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookTacticsBottomWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3D098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__9_0(::Class_2_208CC9941471731A_547* a, ::Class_2_208CC9941471731A_547* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_547*, ::Class_2_208CC9941471731A_547*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKTACTICSBOTTOMWIDGETCONTROLLER___C__REFRESHVIEW_B__9_0_OFFSET))(this, a, b);
		}
	};
}
