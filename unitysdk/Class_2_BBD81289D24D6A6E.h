#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_169.h"

namespace RPG::Client { class UIController; }

#define CLASS_2_BBD81289D24D6A6E_METHOD_2_0D2AEC5D7537AE9C_OFFSET UNITYSDK_OFFSET(0x163DB460)
#define CLASS_2_BBD81289D24D6A6E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x163DB0C0)
#define CLASS_2_BBD81289D24D6A6E_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x163DB140)
#define CLASS_2_BBD81289D24D6A6E_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x163DB260)
#define CLASS_2_BBD81289D24D6A6E__CTOR_OFFSET UNITYSDK_OFFSET(0x163DB0B0)

inline static constexpr unsigned int Class_2_BBD81289D24D6A6E_TypeDefinitionIndex = 73029;

class Class_2_BBD81289D24D6A6E : public ::Class_1_43BD383C98B4C0C5_169
{
public:
	::RPG::Client::UIController* ABDKNDNCAEA; // 0x10
	::System::UInt32 JNADKPFJLPM; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void OnEnterBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_ONENTERBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_0D2AEC5D7537AE9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_METHOD_2_0D2AEC5D7537AE9C_OFFSET))(this);
	}
};
