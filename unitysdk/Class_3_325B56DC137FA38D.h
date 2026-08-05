#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_325B56DC137FA38D_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x18255760)
#define CLASS_3_325B56DC137FA38D_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x182559C0)
#define CLASS_3_325B56DC137FA38D_METHOD_3_8483E8C5D58A000D_OFFSET UNITYSDK_OFFSET(0x18255A30)
#define CLASS_3_325B56DC137FA38D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18255DF0)
#define CLASS_3_325B56DC137FA38D__CTOR_OFFSET UNITYSDK_OFFSET(0x18255C30)

inline static constexpr unsigned int Class_3_325B56DC137FA38D_TypeDefinitionIndex = 42508;

class Class_3_325B56DC137FA38D : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_2; // 0x28
	::Class_3_B537A0AA78803363* Field_3_5; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_7; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_325B56DC137FA38D__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_325B56DC137FA38D_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_325B56DC137FA38D_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_325B56DC137FA38D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_8483E8C5D58A000D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_325B56DC137FA38D_METHOD_3_8483E8C5D58A000D_OFFSET))(this, a1);
	}
};
