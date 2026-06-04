#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_72AD36D88EE41A35_METHOD_1_5A9446C22EB45706_OFFSET UNITYSDK_OFFSET(0x18F882A0)
#define CLASS_1_72AD36D88EE41A35__CTOR_OFFSET UNITYSDK_OFFSET(0x18F884C0)

inline static constexpr unsigned int Class_1_72AD36D88EE41A35_TypeDefinitionIndex = 10874;

class Class_1_72AD36D88EE41A35 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72AD36D88EE41A35__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5A9446C22EB45706(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_72AD36D88EE41A35*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_72AD36D88EE41A35*&))((::PBYTE)hIl2Cpp + CLASS_1_72AD36D88EE41A35_METHOD_1_5A9446C22EB45706_OFFSET))(a1, a2);
	}
};
