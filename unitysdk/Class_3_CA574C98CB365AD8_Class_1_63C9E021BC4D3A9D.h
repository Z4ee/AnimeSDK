#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_3_CA574C98CB365AD8_CLASS_1_63C9E021BC4D3A9D__CTOR_OFFSET UNITYSDK_OFFSET(0xAEEA000)

inline static constexpr unsigned int Class_3_CA574C98CB365AD8_Class_1_63C9E021BC4D3A9D_TypeDefinitionIndex = 44895;

class Class_3_CA574C98CB365AD8_Class_1_63C9E021BC4D3A9D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA574C98CB365AD8_CLASS_1_63C9E021BC4D3A9D__CTOR_OFFSET))(this);
	}
};
