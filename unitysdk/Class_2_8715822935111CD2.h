#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4CD8A1ACD565F336.h"

class Class_1_6E6FEE1E26FFD7A8;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::PixAir { class IPixAirBattleAction; }
namespace UnityEngine { class Transform; }

#define CLASS_2_8715822935111CD2__CTOR_OFFSET UNITYSDK_OFFSET(0x138E4B40)

inline static constexpr unsigned int Class_2_8715822935111CD2_TypeDefinitionIndex = 71816;

class Class_2_8715822935111CD2 : public ::Class_1_4CD8A1ACD565F336
{
public:
	::RPG::Client::LittleGame::PixAir::PixAirLevelController* Field_2_0; // 0x28
	::RPG::Client::PixAir::IPixAirBattleAction* Field_2_1; // 0x30
	::Il2CppArray<::Class_1_6E6FEE1E26FFD7A8*>* Field_2_2; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::Class_1_6E6FEE1E26FFD7A8* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8715822935111CD2__CTOR_OFFSET))(this);
	}
};
