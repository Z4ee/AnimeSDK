#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10184190)
#define CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_7EB92509DFEBBD19_OFFSET UNITYSDK_OFFSET(0x10184340)
#define CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10184880)
#define CLASS_3_D3AC2DBC5AA2ECA6__CTOR_OFFSET UNITYSDK_OFFSET(0x10184740)

inline static constexpr unsigned int Class_3_D3AC2DBC5AA2ECA6_TypeDefinitionIndex = 58434;

class Class_3_D3AC2DBC5AA2ECA6 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_6; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_7; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3AC2DBC5AA2ECA6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_7EB92509DFEBBD19(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_7EB92509DFEBBD19_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D3AC2DBC5AA2ECA6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
