#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define CLASS_1_F1821EEA0942EB48_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2CE480)
#define CLASS_1_F1821EEA0942EB48__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE4E0)

inline static constexpr unsigned int Class_1_F1821EEA0942EB48_TypeDefinitionIndex = 55258;

class Class_1_F1821EEA0942EB48 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntityList* CGNJAJMEKOI; // 0x10
	::Class_3_07C3C4D2990C49EE* NKCKAJPAJCJ; // 0x18
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x20
	::System::Single OIKGNPCGODF; // 0x28
	::System::Single PNJEGPAFNCI; // 0x2C
	::System::Boolean CAIBGHMMDKC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1821EEA0942EB48__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1821EEA0942EB48_DISPOSE_OFFSET))(this);
	}
};
