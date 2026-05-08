#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_10;
class Class_2_208CC9941471731A_757;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15872770)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158727B0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET UNITYSDK_OFFSET(0x158727C0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x15872810)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex = 51794;

	class UIAbyssS2MissionWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_757*, ::System::Int32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_757*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45C50);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_10*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_10*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45C58);
		}
		static ::MoleMole::UIAbyssS2MissionWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIAbyssS2MissionWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2MissionWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMissionConfig_b__6_0(::Class_2_208CC9941471731A_10* a, ::Class_2_208CC9941471731A_10* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_10*, ::Class_2_208CC9941471731A_10*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__INITMISSIONCONFIG_B__6_0_OFFSET))(this, a, b);
		}

		::System::Int32 _SetTabType_b__10_0(::Class_2_208CC9941471731A_757* x)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_757*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___C__SETTABTYPE_B__10_0_OFFSET))(this, x);
		}
	};
}
