#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_F1109066952EAFF0_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xBDDC5D0)
#define CLASS_2_F1109066952EAFF0__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDC680)
#define CLASS_2_F1109066952EAFF0__ONBIND_OFFSET UNITYSDK_OFFSET(0xBDDC570)

inline static constexpr unsigned int Class_2_F1109066952EAFF0_TypeDefinitionIndex = 71553;

class Class_2_F1109066952EAFF0 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animator* CFNGLMDMENE; // 0x60
	::System::Int32 LANBHBALFOA; // 0x68
	::System::Int32 LGCHPLAJBKL; // 0x6C
	::System::Nullable_1<::System::Boolean> OGAGNOPLEIH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1109066952EAFF0__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1109066952EAFF0__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F1109066952EAFF0_METHOD_2_32B2368221A04800_OFFSET))(this, a1);
	}
};
