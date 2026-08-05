#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"

#define CLASS_2_56E52A077EEA0DC0_METHOD_2_1DED6B9A27246F26_OFFSET UNITYSDK_OFFSET(0xECCEBD0)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xECCE9A0)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xECCEAA0)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xECCEC30)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xECCEB30)
#define CLASS_2_56E52A077EEA0DC0__CCTOR_OFFSET UNITYSDK_OFFSET(0xECCEA20)
#define CLASS_2_56E52A077EEA0DC0__CTOR_OFFSET UNITYSDK_OFFSET(0xECCEA90)

inline static constexpr unsigned int Class_2_56E52A077EEA0DC0_TypeDefinitionIndex = 72063;

class Class_2_56E52A077EEA0DC0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_7 = 0x11B; // 0x0
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_2_0; // 0x20
	::System::Int32 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1DED6B9A27246F26(::System::Int32 a1, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_1DED6B9A27246F26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
