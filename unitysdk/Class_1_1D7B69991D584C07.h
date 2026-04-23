#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1D7B69991D584C07__CTOR_OFFSET UNITYSDK_OFFSET(0x9329AE0)

inline static constexpr unsigned int Class_1_1D7B69991D584C07_TypeDefinitionIndex = 44346;

class Class_1_1D7B69991D584C07 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x28
	::System::Int32 Field_1_2; // 0x2C
	::RPG::Client::TextID Field_1_1; // 0x30
	::System::UInt32 Field_1_6; // 0x40
	::System::UInt32 Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D7B69991D584C07__CTOR_OFFSET))(this);
	}
};
