#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_155.h"

namespace RPG::Client { class UIController; }

#define CLASS_2_BBD81289D24D6A6E_METHOD_2_0D2AEC5D7537AE9C_OFFSET UNITYSDK_OFFSET(0x19232BC0)
#define CLASS_2_BBD81289D24D6A6E_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x19232820)
#define CLASS_2_BBD81289D24D6A6E_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x192328A0)
#define CLASS_2_BBD81289D24D6A6E_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x192329C0)
#define CLASS_2_BBD81289D24D6A6E__CTOR_OFFSET UNITYSDK_OFFSET(0x19232810)

inline static constexpr unsigned int Class_2_BBD81289D24D6A6E_TypeDefinitionIndex = 69770;

class Class_2_BBD81289D24D6A6E : public ::Class_1_43BD383C98B4C0C5_155
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

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
