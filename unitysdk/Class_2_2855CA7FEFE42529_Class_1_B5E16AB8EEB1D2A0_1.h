#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D1797279B49332E9;
namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_2855CA7FEFE42529_CLASS_1_B5E16AB8EEB1D2A0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EF420)

inline static constexpr unsigned int Class_2_2855CA7FEFE42529_Class_1_B5E16AB8EEB1D2A0_1_TypeDefinitionIndex = 58856;

class Class_2_2855CA7FEFE42529_Class_1_B5E16AB8EEB1D2A0_1 : public ::System::Object
{
public:
	::RPG::GameCore::BattleInstance* Field_1_0; // 0x10
	::Class_1_D1797279B49332E9* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2855CA7FEFE42529_CLASS_1_B5E16AB8EEB1D2A0_1__CTOR_OFFSET))(this);
	}
};
