#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_CAA8B23EA64BF072;
namespace System { class Type; }

#define CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET UNITYSDK_OFFSET(0x887F070)

inline static constexpr unsigned int Class_1_1A41AEC3FE4CE438_TypeDefinitionIndex = 49491;

class Class_1_1A41AEC3FE4CE438 : public ::System::Object
{
public:
	::System::Object* Field_1_4; // 0x10
	::Class_1_CAA8B23EA64BF072* Field_1_2; // 0x18
	::System::Object* Field_1_1; // 0x20
	::System::Type* Field_1_3; // 0x28
	::RPG::GameCore::BattleModeType Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET))(this);
	}
};
