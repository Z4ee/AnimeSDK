#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1089;
class Class_2_208CC9941471731A_311;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16440C80)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16440CC0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET UNITYSDK_OFFSET(0x16440CD0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x16440D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex = 46418;

	class UIAbyssS2MissionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1089*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1089*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46A00);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_311*, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_311*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46A08);
		}
		static ::MoleMole::UIAbyssS2MissionWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2MissionWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x46A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMissionConfig_b__6_0(::Class_2_208CC9941471731A_1089* a, ::Class_2_208CC9941471731A_1089* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1089*, ::Class_2_208CC9941471731A_1089*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET))(this, a, b);
		}

		::System::Int32 _SetTabType_b__10_0(::Class_2_208CC9941471731A_311* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_311*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET))(this, x);
		}
	};
}
