#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_59.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x145ACDD0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x145AC780)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_1_OFFSET UNITYSDK_OFFSET(0x145AD070)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_2_OFFSET UNITYSDK_OFFSET(0x145AD0B0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_3_OFFSET UNITYSDK_OFFSET(0x145AD0D0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_OFFSET UNITYSDK_OFFSET(0x145AD030)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_1_OFFSET UNITYSDK_OFFSET(0x145ACA20)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x145AC5F0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x145AC590)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_1_OFFSET UNITYSDK_OFFSET(0x145AD050)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_2_OFFSET UNITYSDK_OFFSET(0x145AD090)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_3_OFFSET UNITYSDK_OFFSET(0x145AD0F0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_OFFSET UNITYSDK_OFFSET(0x145ACDB0)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x145AC850)
#define CLASS_2_B2FA64D7D220D1E0_METHOD_2_F4845B8082B14617_OFFSET UNITYSDK_OFFSET(0x145AC2B0)
#define CLASS_2_B2FA64D7D220D1E0__CTOR_OFFSET UNITYSDK_OFFSET(0x145ABEE0)

inline static constexpr unsigned int Class_2_B2FA64D7D220D1E0_TypeDefinitionIndex = 45129;

class Class_2_B2FA64D7D220D1E0 : public ::Class_1_43BD383C98B4C0C5_59
{
public:
	::MoleMole::NAPInput::Attitude Field_2_1; // 0x10
	::System::Single Field_2_10; // 0x2C
	::MoleMole::NAPInput::Attitude Field_2_0; // 0x30
	::System::Single Field_2_11; // 0x4C
	::MoleMole::NAPInput::Attitude Field_2_7; // 0x50
	::MoleMole::NAPInput::Attitude Field_2_6; // 0x6C
	::UnityEngine::Vector3 Field_2_5; // 0x88
	::UnityEngine::Quaternion Field_2_4; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_F4845B8082B14617(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_F4845B8082B14617_OFFSET))(this, a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_1(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_1_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_1()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_637A193FF182EA13_1_OFFSET))(this);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B1A4E60C84FE514_2(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_81ADF539CEB58030_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
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

	::System::Void Method_2_8B1A4E60C84FE514_3(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_METHOD_2_8B1A4E60C84FE514_3_OFFSET))(this, a1);
	}
};
