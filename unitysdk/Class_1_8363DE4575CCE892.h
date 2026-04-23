#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_8363DE4575CCE892__CTOR_OFFSET UNITYSDK_OFFSET(0xC7343B0)

inline static constexpr unsigned int Class_1_8363DE4575CCE892_TypeDefinitionIndex = 51182;

class Class_1_8363DE4575CCE892 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8363DE4575CCE892__CTOR_OFFSET))(this);
	}
};
