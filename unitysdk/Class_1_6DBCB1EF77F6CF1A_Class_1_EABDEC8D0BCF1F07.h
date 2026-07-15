#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1261;
namespace RPG::Client { class ChatMessageData; }

#define CLASS_1_6DBCB1EF77F6CF1A_CLASS_1_EABDEC8D0BCF1F07__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1ABD0)

inline static constexpr unsigned int Class_1_6DBCB1EF77F6CF1A_Class_1_EABDEC8D0BCF1F07_TypeDefinitionIndex = 75389;

class Class_1_6DBCB1EF77F6CF1A_Class_1_EABDEC8D0BCF1F07 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1261* Field_1_0; // 0x10
	::RPG::Client::ChatMessageData* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DBCB1EF77F6CF1A_CLASS_1_EABDEC8D0BCF1F07__CTOR_OFFSET))(this);
	}
};
