#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC118B78FC4216B;

#define CLASS_1_D3359DF62696519E___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164F53B0)
#define CLASS_1_D3359DF62696519E___C__DISPLAYCLASS5_0__PLAYTARGETREACHED_B__0_OFFSET UNITYSDK_OFFSET(0x164F5530)

inline static constexpr unsigned int Class_1_D3359DF62696519E___c__DisplayClass5_0_TypeDefinitionIndex = 79549;

class Class_1_D3359DF62696519E___c__DisplayClass5_0 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::MechCraftAttributeType target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayTargetReached_b__0(::Class_1_2EC118B78FC4216B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2EC118B78FC4216B*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E___C__DISPLAYCLASS5_0__PLAYTARGETREACHED_B__0_OFFSET))(this, a1);
	}
};
