#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeEventPriorityType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C203092A4A0DCFDE_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x187A53D0)
#define CLASS_1_C203092A4A0DCFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x187A5810)

inline static constexpr unsigned int Class_1_C203092A4A0DCFDE_TypeDefinitionIndex = 13216;

class Class_1_C203092A4A0DCFDE : public ::System::Object
{
public:
	::System::String* Field_1_9; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::UInt32 Field_1_11; // 0x20
	::System::UInt32 Field_1_8; // 0x24
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_0; // 0x2C
	::RPG::Client::TextID Field_1_4; // 0x30
	::RPG::Client::TextID Field_1_5; // 0x40
	::System::UInt32 Field_1_3; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::System::UInt32 Field_1_10; // 0x58
	::RPG::GameCore::LimaoNewsOfficeEventPriorityType Field_1_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C203092A4A0DCFDE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C203092A4A0DCFDE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C203092A4A0DCFDE*&))((::PBYTE)hIl2Cpp + CLASS_1_C203092A4A0DCFDE_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
