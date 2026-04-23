#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ButtonShowPriority.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_3E7CB4EB71D78E39__CTOR_OFFSET UNITYSDK_OFFSET(0x10016920)

inline static constexpr unsigned int Class_1_3E7CB4EB71D78E39_TypeDefinitionIndex = 48479;

class Class_1_3E7CB4EB71D78E39 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::RPG::Client::TextID Field_1_2; // 0x20
	::RPG::GameCore::ButtonShowPriority Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3E7CB4EB71D78E39__CTOR_OFFSET))(this);
	}
};
