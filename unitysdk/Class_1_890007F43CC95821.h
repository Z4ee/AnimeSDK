#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_890007F43CC95821__CTOR_OFFSET UNITYSDK_OFFSET(0x11684BE0)

inline static constexpr unsigned int Class_1_890007F43CC95821_TypeDefinitionIndex = 53342;

class Class_1_890007F43CC95821 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::TextID Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_890007F43CC95821__CTOR_OFFSET))(this);
	}
};
