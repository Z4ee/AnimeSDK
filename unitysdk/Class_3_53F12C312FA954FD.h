#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_53F12C312FA954FD_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x12C1D360)
#define CLASS_3_53F12C312FA954FD_METHOD_3_3C092CF69374C63B_OFFSET UNITYSDK_OFFSET(0x12C1D5C0)
#define CLASS_3_53F12C312FA954FD_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C1DA00)
#define CLASS_3_53F12C312FA954FD__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1D800)

inline static constexpr unsigned int Class_3_53F12C312FA954FD_TypeDefinitionIndex = 64054;

class Class_3_53F12C312FA954FD : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_4; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F12C312FA954FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F12C312FA954FD_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3C092CF69374C63B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_53F12C312FA954FD_METHOD_3_3C092CF69374C63B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53F12C312FA954FD_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
