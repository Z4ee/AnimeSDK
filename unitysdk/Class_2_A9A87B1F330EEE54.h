#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_59.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A9A87B1F330EEE54_Class_1_C8F0EA9E3CEFE9D7;

#define CLASS_2_A9A87B1F330EEE54_METHOD_2_0356C28B02D972AE_OFFSET UNITYSDK_OFFSET(0x14B67B90)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14B680A0)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_637A193FF182EA13_1_OFFSET UNITYSDK_OFFSET(0x14B68040)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_637A193FF182EA13_OFFSET UNITYSDK_OFFSET(0x14B68020)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x14B67D60)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_8B1A4E60C84FE514_1_OFFSET UNITYSDK_OFFSET(0x14B68080)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_8B1A4E60C84FE514_OFFSET UNITYSDK_OFFSET(0x14B68000)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x14B67B20)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_D3BDE5E15DE6058C_OFFSET UNITYSDK_OFFSET(0x14B67EF0)
#define CLASS_2_A9A87B1F330EEE54_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x14B68060)
#define CLASS_2_A9A87B1F330EEE54__CTOR_OFFSET UNITYSDK_OFFSET(0x14B67970)

inline static constexpr unsigned int Class_2_A9A87B1F330EEE54_TypeDefinitionIndex = 53211;

class Class_2_A9A87B1F330EEE54 : public ::Class_1_43BD383C98B4C0C5_59
{
public:
	::Class_2_A9A87B1F330EEE54_Class_1_C8F0EA9E3CEFE9D7* Field_2_7; // 0x10
	::MoleMole::NAPInput::Attitude Field_2_0; // 0x18
	::MoleMole::NAPInput::Attitude Field_2_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_0356C28B02D972AE(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_0356C28B02D972AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B1A4E60C84FE514(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_8B1A4E60C84FE514_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_637A193FF182EA13_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_1()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_637A193FF182EA13_1_OFFSET))(this);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_1(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_8B1A4E60C84FE514_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3BDE5E15DE6058C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_D3BDE5E15DE6058C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9A87B1F330EEE54_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
