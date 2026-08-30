#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_4551A380DCBB3F00_CLASS_1_63C9E021BC4D3A9D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x155C5C50)

inline static constexpr unsigned int Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1_TypeDefinitionIndex = 60378;

class Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* FKMOKGOBEHJ; // 0x10
	::System::String* NHIGJKJJPGM; // 0x18
	::System::String* APODMGIFMFI; // 0x20
	::System::Boolean CIFAPEKOKFC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_CLASS_1_63C9E021BC4D3A9D_1__CTOR_OFFSET))(this);
	}
};
