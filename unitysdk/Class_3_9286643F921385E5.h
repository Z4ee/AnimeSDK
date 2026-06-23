#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_9286643F921385E5_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x162EF320)
#define CLASS_3_9286643F921385E5_METHOD_3_30221C7D70729F3C_OFFSET UNITYSDK_OFFSET(0x162EF6B0)
#define CLASS_3_9286643F921385E5_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x162EF640)
#define CLASS_3_9286643F921385E5_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x162EFE80)
#define CLASS_3_9286643F921385E5__CTOR_OFFSET UNITYSDK_OFFSET(0x162EFC50)

inline static constexpr unsigned int Class_3_9286643F921385E5_TypeDefinitionIndex = 73233;

class Class_3_9286643F921385E5 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_4; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_5; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_1; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_3; // 0x40
	::Class_3_B537A0AA78803363* Field_3_7; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9286643F921385E5__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9286643F921385E5_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9286643F921385E5_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_30221C7D70729F3C(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_9286643F921385E5_METHOD_3_30221C7D70729F3C_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9286643F921385E5_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
