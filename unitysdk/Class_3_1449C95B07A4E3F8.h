#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_3_1449C95B07A4E3F8_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11B01630)
#define CLASS_3_1449C95B07A4E3F8_METHOD_3_670DEA919D5B8A73_OFFSET UNITYSDK_OFFSET(0x11B01770)
#define CLASS_3_1449C95B07A4E3F8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11B01940)
#define CLASS_3_1449C95B07A4E3F8__CTOR_OFFSET UNITYSDK_OFFSET(0x11B01840)

inline static constexpr unsigned int Class_3_1449C95B07A4E3F8_TypeDefinitionIndex = 65191;

class Class_3_1449C95B07A4E3F8 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_2; // 0x20
	::Class_4_B51FB35349ACD175<::System::String*>* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1449C95B07A4E3F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1449C95B07A4E3F8_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_670DEA919D5B8A73(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_1449C95B07A4E3F8_METHOD_3_670DEA919D5B8A73_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1449C95B07A4E3F8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
