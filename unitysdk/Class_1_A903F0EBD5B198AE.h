#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A903F0EBD5B198AE_METHOD_1_95FA3048B3F79507_OFFSET UNITYSDK_OFFSET(0x1B5B5300)
#define CLASS_1_A903F0EBD5B198AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5B5690)

inline static constexpr unsigned int Class_1_A903F0EBD5B198AE_TypeDefinitionIndex = 12191;

class Class_1_A903F0EBD5B198AE : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_0; // 0x10
	::Il2CppArray<::System::String*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::Il2CppArray<::System::String*>* Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_9; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A903F0EBD5B198AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_95FA3048B3F79507(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A903F0EBD5B198AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A903F0EBD5B198AE*&))((::PBYTE)hIl2Cpp + CLASS_1_A903F0EBD5B198AE_METHOD_1_95FA3048B3F79507_OFFSET))(a1, a2);
	}
};
