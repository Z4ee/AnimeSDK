#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"

class Class_1_1735A22855B404E5;
namespace System { class Type; }

#define CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET UNITYSDK_OFFSET(0x14263E70)

inline static constexpr unsigned int Class_1_1A41AEC3FE4CE438_TypeDefinitionIndex = 57048;

class Class_1_1A41AEC3FE4CE438 : public ::System::Object
{
public:
	::Class_1_1735A22855B404E5* Field_1_0; // 0x10
	::System::Object* Field_1_1; // 0x18
	::System::Object* Field_1_2; // 0x20
	::System::Type* Field_1_3; // 0x28
	::RPG::GameCore::BattleModeType Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A41AEC3FE4CE438__CTOR_OFFSET))(this);
	}
};
