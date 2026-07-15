#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_155.h"

namespace RPG::Client { class UIController; }

#define CLASS_2_BBD81289D24D6A6E_1_METHOD_2_0D2AEC5D7537AE9C_OFFSET UNITYSDK_OFFSET(0x183C1E30)
#define CLASS_2_BBD81289D24D6A6E_1_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x183C1CC0)
#define CLASS_2_BBD81289D24D6A6E_1_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x183C1BF0)
#define CLASS_2_BBD81289D24D6A6E_1_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x183C1DE0)
#define CLASS_2_BBD81289D24D6A6E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x183C1BE0)

inline static constexpr unsigned int Class_2_BBD81289D24D6A6E_1_TypeDefinitionIndex = 69771;

class Class_2_BBD81289D24D6A6E_1 : public ::Class_1_43BD383C98B4C0C5_155
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::UIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnExitBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_1_ONEXITBEGIN_OFFSET))(this);
	}

	::System::Void OnTransitionEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_1_ONTRANSITIONEND_OFFSET))(this);
	}

	::System::Void Method_2_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_1_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_2_0D2AEC5D7537AE9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBD81289D24D6A6E_1_METHOD_2_0D2AEC5D7537AE9C_OFFSET))(this);
	}
};
