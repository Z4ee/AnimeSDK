#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E464CD14A4FBB20A_Struct_2_04EA0A3341441B4F.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_TimeOfDay.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"

class Class_2_208CC9941471731A_1032;
class Class_2_DB627EC47B0F0B11;
namespace System { class String; }

#define CLASS_1_E464CD14A4FBB20A_METHOD_1_356C7028A9011DC3_OFFSET UNITYSDK_OFFSET(0x11942B40)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_35B707DAADDD0F6A_OFFSET UNITYSDK_OFFSET(0x11942530)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_3FCE03FFCFBD5337_OFFSET UNITYSDK_OFFSET(0x119435C0)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_8CF670000A9CE158_OFFSET UNITYSDK_OFFSET(0x119426D0)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_B60B6CA590F42474_OFFSET UNITYSDK_OFFSET(0x11942990)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_BAB3759FCB585BD5_OFFSET UNITYSDK_OFFSET(0x11943680)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_CC0E716506D762BC_OFFSET UNITYSDK_OFFSET(0x119429E0)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_D1628A4189AEF82B_OFFSET UNITYSDK_OFFSET(0x119430B0)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_E36CF399F30AA08F_OFFSET UNITYSDK_OFFSET(0x11942EA0)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_E54A90430359E9E5_OFFSET UNITYSDK_OFFSET(0x11943700)
#define CLASS_1_E464CD14A4FBB20A_METHOD_1_F8A1022B2EC23500_OFFSET UNITYSDK_OFFSET(0x11942650)

inline static constexpr unsigned int Class_1_E464CD14A4FBB20A_TypeDefinitionIndex = 46526;

class Class_1_E464CD14A4FBB20A : public ::System::Object
{
public:
	static ::System::Single Method_1_35B707DAADDD0F6A()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_35B707DAADDD0F6A_OFFSET))();
	}

	static ::MoleMole::Config::TimePeriodType Method_1_F8A1022B2EC23500(::System::Single a1)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_F8A1022B2EC23500_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay Method_1_B60B6CA590F42474(::MoleMole::Config::TimePeriodType a1)
	{
		return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay(*)(::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_B60B6CA590F42474_OFFSET))(a1);
	}

	static ::MoleMole::Config::TimePeriodType Method_1_CC0E716506D762BC(::Class_1_E464CD14A4FBB20A_Struct_2_04EA0A3341441B4F& a1)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::Class_1_E464CD14A4FBB20A_Struct_2_04EA0A3341441B4F&))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_CC0E716506D762BC_OFFSET))(a1);
	}

	static ::System::Void Method_1_356C7028A9011DC3(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::MoleMole::Config::TimePeriodType& a3, ::MoleMole::Config::WeatherType& a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_356C7028A9011DC3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::MoleMole::Config::TimePeriodType Method_1_8CF670000A9CE158(::System::Single a1)
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_8CF670000A9CE158_OFFSET))(a1);
	}

	static ::MoleMole::Config::WeatherType Method_1_E36CF399F30AA08F(::Class_1_E464CD14A4FBB20A_Struct_2_04EA0A3341441B4F& a1)
	{
		return ((::MoleMole::Config::WeatherType(*)(::Class_1_E464CD14A4FBB20A_Struct_2_04EA0A3341441B4F&))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_E36CF399F30AA08F_OFFSET))(a1);
	}

	static ::System::Void Method_1_D1628A4189AEF82B(::System::Single a1, ::Class_2_DB627EC47B0F0B11* a2, ::Class_2_208CC9941471731A_1032* a3, ::MoleMole::Config::TimePeriodType& a4, ::MoleMole::Config::WeatherType& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::System::Single, ::Class_2_DB627EC47B0F0B11*, ::Class_2_208CC9941471731A_1032*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_D1628A4189AEF82B_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType Method_1_3FCE03FFCFBD5337(::MoleMole::Config::WeatherType a1, ::MoleMole::Config::TimePeriodType a2)
	{
		return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType(*)(::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_3FCE03FFCFBD5337_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BAB3759FCB585BD5(::Class_2_DB627EC47B0F0B11* a1, ::MoleMole::Config::TimePeriodType& a2, ::MoleMole::Config::WeatherType& a3)
	{
		return ((::System::Void(*)(::Class_2_DB627EC47B0F0B11*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_BAB3759FCB585BD5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E54A90430359E9E5(::Class_2_208CC9941471731A_1032* a1, ::MoleMole::Config::TimePeriodType& a2, ::MoleMole::Config::WeatherType& a3)
	{
		return ((::System::Void(*)(::Class_2_208CC9941471731A_1032*, ::MoleMole::Config::TimePeriodType&, ::MoleMole::Config::WeatherType&))((::PBYTE)hIl2Cpp + CLASS_1_E464CD14A4FBB20A_METHOD_1_E54A90430359E9E5_OFFSET))(a1, a2, a3);
	}
};
