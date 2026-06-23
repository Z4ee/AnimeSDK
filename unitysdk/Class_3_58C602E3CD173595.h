#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_58C602E3CD173595_METHOD_3_8AB38D899BE6F6BF_OFFSET UNITYSDK_OFFSET(0x168A4E40)
#define CLASS_3_58C602E3CD173595_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x168A4DB0)
#define CLASS_3_58C602E3CD173595_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168A51D0)
#define CLASS_3_58C602E3CD173595__CTOR_OFFSET UNITYSDK_OFFSET(0x168A5130)

inline static constexpr unsigned int Class_3_58C602E3CD173595_TypeDefinitionIndex = 69819;

class Class_3_58C602E3CD173595 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_8AB38D899BE6F6BF(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_8AB38D899BE6F6BF_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58C602E3CD173595_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
