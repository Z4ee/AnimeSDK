#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleEmojiReason.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;

#define CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_A5ADA4706DA592FA_OFFSET UNITYSDK_OFFSET(0x16A17BD0)
#define CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_CDCC31436CFEA667_OFFSET UNITYSDK_OFFSET(0x16A194E0)
#define CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x16A18E50)
#define CLASS_1_3C7B8BA9D1C11CD1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A194D0)

inline static constexpr unsigned int Class_1_3C7B8BA9D1C11CD1_TypeDefinitionIndex = 32655;

class Class_1_3C7B8BA9D1C11CD1 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::System::Int32 Field_1_5; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_4; // 0x20
	::RPG::Client::LittleGame::MarbleEmojiReason Field_1_1; // 0x24
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_1_3C7B8BA9D1C11CD1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CDCC31436CFEA667(::RPG::Client::LittleGame::MarbleEmojiReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MarbleEmojiReason))((::PBYTE)hIl2Cpp + CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_CDCC31436CFEA667_OFFSET))(this, a1);
	}

	::System::Void Method_1_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_D7852DE078ACC1F1_OFFSET))(this);
	}

	::System::Void Method_1_A5ADA4706DA592FA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3C7B8BA9D1C11CD1_METHOD_1_A5ADA4706DA592FA_OFFSET))(this, a1);
	}
};
