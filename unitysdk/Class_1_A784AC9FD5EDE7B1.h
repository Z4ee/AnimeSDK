#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A784AC9FD5EDE7B1_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x19422E40)
#define CLASS_1_A784AC9FD5EDE7B1__CTOR_OFFSET UNITYSDK_OFFSET(0x19423220)

inline static constexpr unsigned int Class_1_A784AC9FD5EDE7B1_TypeDefinitionIndex = 12018;

class Class_1_A784AC9FD5EDE7B1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_5; // 0x38
	::System::UInt32 Field_1_6; // 0x48
	::System::UInt32 Field_1_7; // 0x4C
	::System::UInt32 Field_1_8; // 0x50
	::RPG::Client::TextID Field_1_9; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A784AC9FD5EDE7B1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A784AC9FD5EDE7B1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A784AC9FD5EDE7B1*&))((::PBYTE)hIl2Cpp + CLASS_1_A784AC9FD5EDE7B1_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
