#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2FA40FF0BD34B01D__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAB2D0)

inline static constexpr unsigned int Class_1_2FA40FF0BD34B01D_TypeDefinitionIndex = 44890;

class Class_1_2FA40FF0BD34B01D : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::RPG::Client::TextID Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FA40FF0BD34B01D__CTOR_OFFSET))(this);
	}
};
