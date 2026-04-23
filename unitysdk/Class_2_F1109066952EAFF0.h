#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/System/Nullable_1.h"

namespace UnityEngine { class Animator; }

#define CLASS_2_F1109066952EAFF0_METHOD_2_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x936E8A0)
#define CLASS_2_F1109066952EAFF0__CTOR_OFFSET UNITYSDK_OFFSET(0x936E950)
#define CLASS_2_F1109066952EAFF0__ONBIND_OFFSET UNITYSDK_OFFSET(0x936E840)
#define CLASS_2_F1109066952EAFF0___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x936E9C0)

inline static constexpr unsigned int Class_2_F1109066952EAFF0_TypeDefinitionIndex = 65994;

class Class_2_F1109066952EAFF0 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Animator* Field_2_1; // 0x60
	::System::Nullable_1<::System::Boolean> Field_2_0; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::System::Int32 Field_2_2; // 0x70

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1109066952EAFF0___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
