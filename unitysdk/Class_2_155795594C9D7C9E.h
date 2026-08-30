#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define CLASS_2_155795594C9D7C9E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A18040)
#define CLASS_2_155795594C9D7C9E_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15A18650)
#define CLASS_2_155795594C9D7C9E_METHOD_2_A1C2E7FE323742A0_OFFSET UNITYSDK_OFFSET(0x15A18330)
#define CLASS_2_155795594C9D7C9E_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x15A18160)
#define CLASS_2_155795594C9D7C9E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15A185D0)
#define CLASS_2_155795594C9D7C9E_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x15A186E0)
#define CLASS_2_155795594C9D7C9E_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x15A17E90)
#define CLASS_2_155795594C9D7C9E__CTOR_OFFSET UNITYSDK_OFFSET(0x15A187A0)
#define CLASS_2_155795594C9D7C9E___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0x15A187C0)

inline static constexpr unsigned int Class_2_155795594C9D7C9E_TypeDefinitionIndex = 64414;

class Class_2_155795594C9D7C9E : public ::RPG::Client::BaseModule
{
public:
	::System::Boolean HJKMFAIKAHN; // 0x10
	::System::Nullable_1<::System::Boolean> NKONKFGEOPJ; // 0x11
	::System::Boolean JNKPCLNBEEC; // 0x13
	::System::Nullable_1<::RPG::Client::DateTimePro> PAKFNDDHAHD; // 0x18
	::System::TimeSpan DENAAJEEDFI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E__CTOR_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Boolean Method_2_A1C2E7FE323742A0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_A1C2E7FE323742A0_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void __DoShowExitConfirm_b__10_0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_155795594C9D7C9E___DOSHOWEXITCONFIRM_B__10_0_OFFSET))(this, a1);
	}
};
