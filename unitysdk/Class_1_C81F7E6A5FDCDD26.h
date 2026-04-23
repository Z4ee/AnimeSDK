#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C81F7E6A5FDCDD26_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x183501D0)
#define CLASS_1_C81F7E6A5FDCDD26__CTOR_OFFSET UNITYSDK_OFFSET(0x18350570)

inline static constexpr unsigned int Class_1_C81F7E6A5FDCDD26_TypeDefinitionIndex = 11966;

class Class_1_C81F7E6A5FDCDD26 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_8; // 0x10
	::Il2CppArray<::System::String*>* Field_1_6; // 0x18
	::Il2CppArray<::System::String*>* Field_1_7; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::String* Field_1_9; // 0x30
	::System::Single Field_1_4; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::Single Field_1_2; // 0x40
	::System::Single Field_1_5; // 0x44
	::System::Single Field_1_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C81F7E6A5FDCDD26__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C81F7E6A5FDCDD26*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C81F7E6A5FDCDD26*&))((::PBYTE)hIl2Cpp + CLASS_1_C81F7E6A5FDCDD26_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
