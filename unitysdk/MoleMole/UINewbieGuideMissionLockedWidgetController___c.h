#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1037;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F4A0F0)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4A130)
#define MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__SETLOCKREWARDPREVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x15F4A140)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideMissionLockedWidgetController___c_TypeDefinitionIndex = 69945;

	class UINewbieGuideMissionLockedWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UINewbieGuideMissionLockedWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UINewbieGuideMissionLockedWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionLockedWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x491E0);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1037*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1037*>**)Il2CppClass::FromTypeDefinitionIndex(UINewbieGuideMissionLockedWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x491E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetLockRewardPreview_b__8_0(::Class_2_208CC9941471731A_1037* a, ::Class_2_208CC9941471731A_1037* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1037*, ::Class_2_208CC9941471731A_1037*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEMISSIONLOCKEDWIDGETCONTROLLER___C__SETLOCKREWARDPREVIEW_B__8_0_OFFSET))(this, a, b);
		}
	};
}
