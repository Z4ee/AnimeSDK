#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_89.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x15631CB0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_1_OFFSET UNITYSDK_OFFSET(0x15632830)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_2_OFFSET UNITYSDK_OFFSET(0x15632900)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_3_OFFSET UNITYSDK_OFFSET(0x15632940)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_4_OFFSET UNITYSDK_OFFSET(0x15632960)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_5_OFFSET UNITYSDK_OFFSET(0x15632980)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_OFFSET UNITYSDK_OFFSET(0x15632810)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_1_OFFSET UNITYSDK_OFFSET(0x15631F60)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_2_OFFSET UNITYSDK_OFFSET(0x15631B20)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_3_OFFSET UNITYSDK_OFFSET(0x15632290)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_OFFSET UNITYSDK_OFFSET(0x15632570)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x15631AB0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_1_OFFSET UNITYSDK_OFFSET(0x156327F0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_2_OFFSET UNITYSDK_OFFSET(0x15632850)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_3_OFFSET UNITYSDK_OFFSET(0x15632870)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_4_OFFSET UNITYSDK_OFFSET(0x15632920)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_5_OFFSET UNITYSDK_OFFSET(0x156329A0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_OFFSET UNITYSDK_OFFSET(0x156327D0)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_9DB2C80C0CD4760B_OFFSET UNITYSDK_OFFSET(0x15631D80)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15632890)
#define CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_F4845B8082B14617_OFFSET UNITYSDK_OFFSET(0x156316F0)
#define CLASS_2_B2FA64D7D220D1E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15631320)

inline static constexpr unsigned int Class_2_B2FA64D7D220D1E0_1_TypeDefinitionIndex = 75399;

class Class_2_B2FA64D7D220D1E0_1 : public ::Class_1_43BD383C98B4C0C5_89
{
public:
	::MoleMole::NAPInput::Attitude Field_2_4; // 0x10
	::MoleMole::NAPInput::Attitude Field_2_5; // 0x2C
	::MoleMole::NAPInput::Attitude Field_2_1; // 0x48
	::MoleMole::NAPInput::Attitude Field_2_3; // 0x64
	::UnityEngine::Vector3 Field_2_6; // 0x80
	::MoleMole::NAPInput::Attitude Field_2_0; // 0x8C
	::UnityEngine::Quaternion Field_2_7; // 0xA8
	::MoleMole::NAPInput::Attitude Field_2_2; // 0xB8
	::System::Single Field_2_8; // 0xD4
	::System::Single Field_2_9; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_F4845B8082B14617(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_F4845B8082B14617_OFFSET))(this, a1);
	}

	::System::Void Method_2_9DB2C80C0CD4760B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_9DB2C80C0CD4760B_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514_1(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_OFFSET))(this);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030_1(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_1_OFFSET))(this, a1, a2);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_1()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_1_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_2(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B1A4E60C84FE514_3(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_81ADF539CEB58030_2(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_81ADF539CEB58030_3(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_81ADF539CEB58030_3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_2()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_2_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_4(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_4_OFFSET))(this, a1);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_3()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_3_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_4()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_4_OFFSET))(this);
	}

	::MoleMole::NAPInput::Attitude Method_2_637A193FF182EA13_5()
	{
		return ((::MoleMole::NAPInput::Attitude(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_637A193FF182EA13_5_OFFSET))(this);
	}

	::System::Void Method_2_8B1A4E60C84FE514_5(::MoleMole::NAPInput::Attitude a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::Attitude))((::PBYTE)hIl2Cpp + CLASS_2_B2FA64D7D220D1E0_1_METHOD_2_8B1A4E60C84FE514_5_OFFSET))(this, a1);
	}
};
