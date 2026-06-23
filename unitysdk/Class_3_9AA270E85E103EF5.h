#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_9AA270E85E103EF5_METHOD_3_7A00E552FBB51A60_OFFSET UNITYSDK_OFFSET(0x12671700)
#define CLASS_3_9AA270E85E103EF5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12671D40)
#define CLASS_3_9AA270E85E103EF5_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12671500)
#define CLASS_3_9AA270E85E103EF5__CTOR_OFFSET UNITYSDK_OFFSET(0x12671BC0)

inline static constexpr unsigned int Class_3_9AA270E85E103EF5_TypeDefinitionIndex = 41080;

class Class_3_9AA270E85E103EF5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_1; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AA270E85E103EF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AA270E85E103EF5_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_7A00E552FBB51A60(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9AA270E85E103EF5_METHOD_3_7A00E552FBB51A60_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9AA270E85E103EF5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
