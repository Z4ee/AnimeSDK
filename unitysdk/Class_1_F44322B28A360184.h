#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1FFDD73C4573633F;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44322B28A360184__CTOR_OFFSET UNITYSDK_OFFSET(0xB81DF50)

inline static constexpr unsigned int Class_1_F44322B28A360184_TypeDefinitionIndex = 73190;

class Class_1_F44322B28A360184 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::Il2CppArray<::Class_1_1FFDD73C4573633F*>* HPBAMMEFDMK; // 0x18
	::Il2CppArray<::System::Int32>* NPGHFOOPAIJ; // 0x20
	::System::Boolean GNDCCBNILML; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44322B28A360184__CTOR_OFFSET))(this);
	}
};
