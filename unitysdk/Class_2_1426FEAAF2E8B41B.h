#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_59.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

#define CLASS_2_1426FEAAF2E8B41B_METHOD_2_0356C28B02D972AE_OFFSET UNITYSDK_OFFSET(0x1576D210)
#define CLASS_2_1426FEAAF2E8B41B__CTOR_OFFSET UNITYSDK_OFFSET(0x1576D2F0)

inline static constexpr unsigned int Class_2_1426FEAAF2E8B41B_TypeDefinitionIndex = 52188;

class Class_2_1426FEAAF2E8B41B : public ::Class_1_43BD383C98B4C0C5_59
{
public:
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1426FEAAF2E8B41B__CTOR_OFFSET))(this);
	}

	::MoleMole::NAPInput::IMUData Method_2_0356C28B02D972AE(::MoleMole::NAPInput::IMUData a1)
	{
		return ((::MoleMole::NAPInput::IMUData(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + CLASS_2_1426FEAAF2E8B41B_METHOD_2_0356C28B02D972AE_OFFSET))(this, a1);
	}
};
