#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_36AD1382D4E96BCE_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x159E4720)
#define CLASS_3_36AD1382D4E96BCE_METHOD_3_B372A284ED4FF3DB_OFFSET UNITYSDK_OFFSET(0x159E4860)
#define CLASS_3_36AD1382D4E96BCE_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x159E4C40)
#define CLASS_3_36AD1382D4E96BCE__CTOR_OFFSET UNITYSDK_OFFSET(0x159E4B40)

inline static constexpr unsigned int Class_3_36AD1382D4E96BCE_TypeDefinitionIndex = 73197;

class Class_3_36AD1382D4E96BCE : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36AD1382D4E96BCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36AD1382D4E96BCE_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_B372A284ED4FF3DB(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_36AD1382D4E96BCE_METHOD_3_B372A284ED4FF3DB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36AD1382D4E96BCE_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
