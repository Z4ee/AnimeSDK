#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_86B6BEAC2DE130F5_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1660EDA0)
#define CLASS_3_86B6BEAC2DE130F5_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x1660F000)
#define CLASS_3_86B6BEAC2DE130F5_METHOD_3_A3BBE4D24F1C2B1F_OFFSET UNITYSDK_OFFSET(0x1660F070)
#define CLASS_3_86B6BEAC2DE130F5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1660F590)
#define CLASS_3_86B6BEAC2DE130F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1660F350)

inline static constexpr unsigned int Class_3_86B6BEAC2DE130F5_TypeDefinitionIndex = 79863;

class Class_3_86B6BEAC2DE130F5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_5; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_3_B537A0AA78803363* Field_3_3; // 0x28
	::Class_3_B537A0AA78803363* Field_3_4; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B6BEAC2DE130F5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B6BEAC2DE130F5_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_86B6BEAC2DE130F5_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_A3BBE4D24F1C2B1F(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_86B6BEAC2DE130F5_METHOD_3_A3BBE4D24F1C2B1F_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_86B6BEAC2DE130F5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
