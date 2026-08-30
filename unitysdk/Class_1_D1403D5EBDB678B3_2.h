#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3EEA4ED0244C1A6;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D1403D5EBDB678B3_2_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD7F9CD0)
#define CLASS_1_D1403D5EBDB678B3_2__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F9D20)

inline static constexpr unsigned int Class_1_D1403D5EBDB678B3_2_TypeDefinitionIndex = 56243;

class Class_1_D1403D5EBDB678B3_2 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* MFIEDDGBIPH; // 0x10
	::Class_2_F3EEA4ED0244C1A6* OLOKHEMMGOH; // 0x18
	::System::Int32 DHPDILNLIPC; // 0x20
	::System::Int32 KHBBNDBJAFK; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3_2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1403D5EBDB678B3_2_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
