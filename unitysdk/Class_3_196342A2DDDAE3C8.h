#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_196342A2DDDAE3C8_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0xFE49580)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xFE492C0)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0xFE495F0)
#define CLASS_3_196342A2DDDAE3C8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFE49B40)
#define CLASS_3_196342A2DDDAE3C8__CTOR_OFFSET UNITYSDK_OFFSET(0xFE49940)

inline static constexpr unsigned int Class_3_196342A2DDDAE3C8_TypeDefinitionIndex = 55852;

class Class_3_196342A2DDDAE3C8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_5; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_4; // 0x38
	::Class_3_B537A0AA78803363* Field_3_6; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_196342A2DDDAE3C8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
