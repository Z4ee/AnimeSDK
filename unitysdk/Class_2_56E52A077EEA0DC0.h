#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"

#define CLASS_2_56E52A077EEA0DC0_METHOD_2_1DED6B9A27246F26_OFFSET UNITYSDK_OFFSET(0x1022D120)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1022CE50)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1022CF60)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1022D080)
#define CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1022CFF0)
#define CLASS_2_56E52A077EEA0DC0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1022CEE0)
#define CLASS_2_56E52A077EEA0DC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1022CF50)

inline static constexpr unsigned int Class_2_56E52A077EEA0DC0_TypeDefinitionIndex = 57646;

class Class_2_56E52A077EEA0DC0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x107; // 0x0
	::System::Int32 Field_2_0; // 0x20
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_2_1; // 0x24

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

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_1DED6B9A27246F26(::System::Int32 a1, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + CLASS_2_56E52A077EEA0DC0_METHOD_2_1DED6B9A27246F26_OFFSET))(this, a1, a2);
	}
};
