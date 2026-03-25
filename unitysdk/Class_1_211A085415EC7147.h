#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateHouguType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_211A085415EC7147_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x16C06460)
#define CLASS_1_211A085415EC7147__CTOR_OFFSET UNITYSDK_OFFSET(0x16C069E0)

inline static constexpr unsigned int Class_1_211A085415EC7147_TypeDefinitionIndex = 10773;

class Class_1_211A085415EC7147 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_5; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_7; // 0x18
	::System::String* Field_1_8; // 0x20
	::System::UInt32 Field_1_12; // 0x28
	::System::UInt32 Field_1_9; // 0x2C
	::RPG::Client::TextID Field_1_6; // 0x30
	::RPG::Client::TextID Field_1_3; // 0x40
	::RPG::Client::TextID Field_1_2; // 0x50
	::RPG::Client::TextID Field_1_4; // 0x60
	::System::UInt32 Field_1_10; // 0x70
	::System::UInt32 Field_1_0; // 0x74
	::System::UInt32 Field_1_11; // 0x78
	::RPG::GameCore::FateHouguType Field_1_1; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_211A085415EC7147__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_211A085415EC7147*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_211A085415EC7147*&))((::PBYTE)hIl2Cpp + CLASS_1_211A085415EC7147_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
