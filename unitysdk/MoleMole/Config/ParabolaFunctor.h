#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ParabolaFunctor_Struct_2_35F396C03964A94A_1.h"
#include "unitysdk/MoleMole/Config/ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x1A944190)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MINSPEED_OFFSET UNITYSDK_OFFSET(0x1A944180)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_0C67EA73BDAA242B_OFFSET UNITYSDK_OFFSET(0x1A944360)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_410411F5350F30F9_OFFSET UNITYSDK_OFFSET(0x1A944E20)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_65826E9FF35F7900_OFFSET UNITYSDK_OFFSET(0x1A944B90)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_ABAC497FE8FC6E22_OFFSET UNITYSDK_OFFSET(0x1A944C70)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_B474DEED52ADAB27_OFFSET UNITYSDK_OFFSET(0x1A9441B0)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_C31FE32D79BFFEB7_OFFSET UNITYSDK_OFFSET(0x1A944A00)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_D24D3797E398F290_OFFSET UNITYSDK_OFFSET(0x1A9446F0)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_E550A4AE810A09E8_OFFSET UNITYSDK_OFFSET(0x1A944440)
#define MOLEMOLE_CONFIG_PARABOLAFUNCTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9441A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ParabolaFunctor_TypeDefinitionIndex = 46200;

	class ParabolaFunctor : public ::System::Object
	{
	public:
		// static const ::System::Single ConstanstG; // 0x0
		::UnityEngine::Vector2 SpeedZone; // 0x10
		::UnityEngine::Vector2 AngleZone; // 0x18
		::System::Single Gravity; // 0x20
		::System::Int32 AngleCalStep; // 0x24
		::System::Single expectSpeed; // 0x28
		::System::Single expectAngle; // 0x2C
		::System::Single expectTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_MinSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MINSPEED_OFFSET))(this);
		}

		::System::Single get_MaxSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_GET_MAXSPEED_OFFSET))(this);
		}

		::System::Single Method_1_B474DEED52ADAB27(::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Single& a5)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_B474DEED52ADAB27_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2 Method_1_E550A4AE810A09E8(::System::Single a1, ::System::Single a2)
		{
			return ((::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_E550A4AE810A09E8_OFFSET))(this, a1, a2);
		}

		::System::Single Method_1_65826E9FF35F7900(::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_65826E9FF35F7900_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_C31FE32D79BFFEB7(::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2& a1, ::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2&, ::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_C31FE32D79BFFEB7_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2 Method_1_D24D3797E398F290(::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::MoleMole::Config::ParabolaFunctor_Struct_2_FD8E1D4014EE315F_2(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_D24D3797E398F290_OFFSET))(this, a1, a2, a3);
		}

		::System::Single Method_1_0C67EA73BDAA242B(::System::Single a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_0C67EA73BDAA242B_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Method_1_410411F5350F30F9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_410411F5350F30F9_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Single Method_1_ABAC497FE8FC6E22(::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ParabolaFunctor_Struct_2_35F396C03964A94A_1, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PARABOLAFUNCTOR_METHOD_1_ABAC497FE8FC6E22_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
