#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1D7B69991D584C07__CTOR_OFFSET UNITYSDK_OFFSET(0x13736A60)

inline static constexpr unsigned int Class_1_1D7B69991D584C07_TypeDefinitionIndex = 44892;

class Class_1_1D7B69991D584C07 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::Int32 Field_1_4; // 0x24
	::RPG::Client::TextID Field_1_5; // 0x28
	::RPG::Client::TextID Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D7B69991D584C07__CTOR_OFFSET))(this);
	}
};
