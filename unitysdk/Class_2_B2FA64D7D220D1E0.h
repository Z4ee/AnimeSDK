#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_89.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x19ED4D10)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x19ED4690)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_1_OFFSET UNITYSDK_OFFSET(0x19ED4F90)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_2_OFFSET UNITYSDK_OFFSET(0x19ED4FF0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_3_OFFSET UNITYSDK_OFFSET(0x19ED5010)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_OFFSET UNITYSDK_OFFSET(0x19ED4CF0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_1_OFFSET UNITYSDK_OFFSET(0x19ED4930)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x19ED4500)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x19ED44A0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_1_OFFSET UNITYSDK_OFFSET(0x19ED4F70)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_2_OFFSET UNITYSDK_OFFSET(0x19ED4FB0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_3_OFFSET UNITYSDK_OFFSET(0x19ED4FD0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_OFFSET UNITYSDK_OFFSET(0x19ED4CD0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x19ED4750)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_F4845B8082B14617_OFFSET UNITYSDK_OFFSET(0x19ED41C0)
#define CLASS_2_B2FA64D7D220D1E0__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED3DF0)

inline static constexpr unsigned int Class_2_B2FA64D7D220D1E0_TypeDefinitionIndex = 55302;

class Class_2_B2FA64D7D220D1E0 : public ::Class_1_43BD383C98B4C0C5_89
{
public:
	::MoleMole::NAPInput::Attitude Field_2_2; // 0x10
	::MoleMole::NAPInput::Attitude Field_2_1; // 0x2C
	::MoleMole::NAPInput::Attitude Field_2_0; // 0x48
	::System::Single Field_2_7; // 0x64
	::UnityEngine::Vector3 Field_2_4; // 0x68
	::UnityEngine::Quaternion Field_2_5; // 0x74
	::MoleMole::NAPInput::Attitude Field_2_3; // 0x84
	::System::Single Field_2_6; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_F4845B8082B14617(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_F4845B8082B14617_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B1A4E60C84FE514_1(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_1()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_1_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_2(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514_3(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_3_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_2()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_2_OFFSET))(this);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_3()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_3_OFFSET))(this);
	}

	::System::Void Method_2_81ADF539CEB58030_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_1_OFFSET))(this, a1, a2);
	}
};
