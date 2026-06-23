#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_89.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_EB807EEA960DD06A_METHOD_2_0356C28B02D972AE_OFFSET UNITYSDK_OFFSET(0x13AAC4A0)
#define CLASS_2_EB807EEA960DD06A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13AAC560)
#define CLASS_2_EB807EEA960DD06A__CTOR_OFFSET UNITYSDK_OFFSET(0x13AAC440)

inline static constexpr unsigned int Class_2_EB807EEA960DD06A_TypeDefinitionIndex = 76324;

class Class_2_EB807EEA960DD06A : public ::Class_1_43BD383C98B4C0C5_89
{
public:
	::UnityEngine::Vector3 Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB807EEA960DD06A__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_0356C28B02D972AE(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_EB807EEA960DD06A_METHOD_2_0356C28B02D972AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB807EEA960DD06A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
