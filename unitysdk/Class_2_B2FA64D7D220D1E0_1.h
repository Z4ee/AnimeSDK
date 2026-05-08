#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_27.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xE13DCD0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xE13D670)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_1_OFFSET UNITYSDK_OFFSET(0xE13DF90)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_2_OFFSET UNITYSDK_OFFSET(0xE13DFD0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_3_OFFSET UNITYSDK_OFFSET(0xE13DFF0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_OFFSET UNITYSDK_OFFSET(0xE13DF70)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_1_OFFSET UNITYSDK_OFFSET(0xE13D4E0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0xE13D900)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0xE13D480)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_1_OFFSET UNITYSDK_OFFSET(0xE13DF30)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_2_OFFSET UNITYSDK_OFFSET(0xE13DF50)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_3_OFFSET UNITYSDK_OFFSET(0xE13DFB0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_OFFSET UNITYSDK_OFFSET(0xE13DCB0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0xE13D730)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_F4845B8082B14617_OFFSET UNITYSDK_OFFSET(0xE13D1A0)
#define CLASS_2_B2FA64D7D220D1E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE13CDE0)

inline static constexpr unsigned int Class_2_B2FA64D7D220D1E0_1_TypeDefinitionIndex = 81300;

class Class_2_B2FA64D7D220D1E0_1 : public ::Class_1_43BD383C98B4C0C5_27
{
public:
	::MoleMole::NAPInput::Attitude Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_4; // 0x2C
	::UnityEngine::Quaternion Field_2_5; // 0x38
	::MoleMole::NAPInput::Attitude Field_2_3; // 0x48
	::System::Single Field_2_7; // 0x64
	::System::Single Field_2_6; // 0x68
	::MoleMole::NAPInput::Attitude Field_2_2; // 0x6C
	::MoleMole::NAPInput::Attitude Field_2_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_F4845B8082B14617(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_F4845B8082B14617_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_OFFSET))(this, a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_1(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_2(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_2_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_1()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_1_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_3(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_1_OFFSET))(this, a1, a2);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_2()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_2_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_3()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_3_OFFSET))(this);
	}
};
