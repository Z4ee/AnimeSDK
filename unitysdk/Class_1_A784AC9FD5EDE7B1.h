#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_A784AC9FD5EDE7B1_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CBF4260)
#define CLASS_1_A784AC9FD5EDE7B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4640)

inline static constexpr unsigned int Class_1_A784AC9FD5EDE7B1_TypeDefinitionIndex = 12407;

class Class_1_A784AC9FD5EDE7B1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* GFLGOBHOKHI; // 0x10
	::System::String* FBKAMIHGLFK; // 0x18
	::System::String* KKJHBCAHFAO; // 0x20
	::System::String* BDACPPLKLGL; // 0x28
	::Il2CppArray<::System::UInt32>* CBBDEODGNDG; // 0x30
	::RPG::Client::TextID NMAHGFAPENI; // 0x38
	::RPG::Client::TextID OENAMINOLLF; // 0x48
	::System::UInt32 DBIHGLJEGPO; // 0x58
	::System::UInt32 HAEDMJHMJHC; // 0x5C
	::System::UInt32 PHFMCACHFIJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A784AC9FD5EDE7B1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A784AC9FD5EDE7B1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A784AC9FD5EDE7B1*&))((::PBYTE)hIl2Cpp + CLASS_1_A784AC9FD5EDE7B1_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
