#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_753C719A92872506_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16FDA7F0)
#define CLASS_3_753C719A92872506_METHOD_3_58F9981DDE1DC0EF_OFFSET UNITYSDK_OFFSET(0x16FDA930)
#define CLASS_3_753C719A92872506_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16FDAC60)
#define CLASS_3_753C719A92872506__CTOR_OFFSET UNITYSDK_OFFSET(0x16FDAB60)

inline static constexpr unsigned int Class_3_753C719A92872506_TypeDefinitionIndex = 73870;

class Class_3_753C719A92872506 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_6; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_753C719A92872506__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_753C719A92872506_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_58F9981DDE1DC0EF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_753C719A92872506_METHOD_3_58F9981DDE1DC0EF_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_753C719A92872506_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
