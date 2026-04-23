#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_5EB2C6616A5654C1__CTOR_OFFSET UNITYSDK_OFFSET(0x92F8650)

inline static constexpr unsigned int Class_1_5EB2C6616A5654C1_TypeDefinitionIndex = 51249;

class Class_1_5EB2C6616A5654C1 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::RPG::GameCore::FixPoint Field_1_0; // 0x20
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_6; // 0x29
	::RPG::GameCore::FixPoint Field_1_2; // 0x30
	::RPG::GameCore::FixPoint Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5EB2C6616A5654C1__CTOR_OFFSET))(this);
	}
};
