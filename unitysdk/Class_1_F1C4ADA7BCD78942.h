#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x16D7AFB0)
#define CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7B7D0)

inline static constexpr unsigned int Class_1_F1C4ADA7BCD78942_TypeDefinitionIndex = 10766;

class Class_1_F1C4ADA7BCD78942 : public ::System::Object
{
public:
	::System::String* Field_1_12; // 0x10
	::System::String* Field_1_10; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_8; // 0x20
	::System::String* Field_1_16; // 0x28
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_4; // 0x30
	::Il2CppArray<::System::String*>* Field_1_9; // 0x38
	::Il2CppArray<::System::UInt32>* Field_1_6; // 0x40
	::RPG::Client::TextID Field_1_1; // 0x48
	::System::UInt32 Field_1_7; // 0x58
	::System::UInt32 Field_1_0; // 0x5C
	::RPG::Client::TextID Field_1_13; // 0x60
	::System::UInt32 Field_1_15; // 0x70
	::RPG::GameCore::FateTraitType Field_1_11; // 0x74
	::RPG::Client::TextID Field_1_3; // 0x78
	::RPG::Client::TextID Field_1_17; // 0x88
	::RPG::Client::TextID Field_1_14; // 0x98
	::RPG::Client::TextID Field_1_5; // 0xA8
	::RPG::Client::TextID Field_1_2; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_F1C4ADA7BCD78942*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_F1C4ADA7BCD78942*&))((::PBYTE)hIl2Cpp + CLASS_1_F1C4ADA7BCD78942_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
