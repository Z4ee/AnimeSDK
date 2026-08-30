#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
namespace RPG::Client { class ChimeraDuelGameSessionChimera; }
namespace System { class Action; }

#define CLASS_1_4C3D712C4A57A9B3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1950DED0)
#define CLASS_1_4C3D712C4A57A9B3_TICK_OFFSET UNITYSDK_OFFSET(0x1950DF80)
#define CLASS_1_4C3D712C4A57A9B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1950DEC0)

inline static constexpr unsigned int Class_1_4C3D712C4A57A9B3_TypeDefinitionIndex = 77877;

class Class_1_4C3D712C4A57A9B3 : public ::System::Object
{
public:
	::RPG::Client::ChimeraDuelGameSessionChimera* NOKJFPPOHKM; // 0x10

	::System::Void _ctor(::RPG::Client::ChimeraDuelGameSessionChimera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionChimera*))((::PBYTE)hIl2Cpp + CLASS_1_4C3D712C4A57A9B3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4C3D712C4A57A9B3_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4C3D712C4A57A9B3_TICK_OFFSET))(this, a1);
	}
};
