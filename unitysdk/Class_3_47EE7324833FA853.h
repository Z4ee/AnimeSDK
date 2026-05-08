#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_47EE7324833FA853_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x107C2F10)
#define CLASS_3_47EE7324833FA853_METHOD_3_DB421FE04521FF9F_OFFSET UNITYSDK_OFFSET(0x107C29F0)
#define CLASS_3_47EE7324833FA853_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x107C27F0)
#define CLASS_3_47EE7324833FA853__CTOR_OFFSET UNITYSDK_OFFSET(0x107C2D40)

inline static constexpr unsigned int Class_3_47EE7324833FA853_TypeDefinitionIndex = 51255;

class Class_3_47EE7324833FA853 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_2; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE7324833FA853__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE7324833FA853_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_DB421FE04521FF9F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_47EE7324833FA853_METHOD_3_DB421FE04521FF9F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EE7324833FA853_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
