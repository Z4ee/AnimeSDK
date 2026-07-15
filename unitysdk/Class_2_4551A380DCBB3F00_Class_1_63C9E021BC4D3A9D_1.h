#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_4551A380DCBB3F00_CLASS_1_63C9E021BC4D3A9D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1602F4C0)

inline static constexpr unsigned int Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1_TypeDefinitionIndex = 57561;

class Class_2_4551A380DCBB3F00_Class_1_63C9E021BC4D3A9D_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4551A380DCBB3F00_CLASS_1_63C9E021BC4D3A9D_1__CTOR_OFFSET))(this);
	}
};
