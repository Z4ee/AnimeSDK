#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC118B78FC4216B;

#define CLASS_1_D3359DF62696519E___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164F5510)
#define CLASS_1_D3359DF62696519E___C__DISPLAYCLASS6_0__SETTARGETUNREACHED_B__0_OFFSET UNITYSDK_OFFSET(0x164F55A0)

inline static constexpr unsigned int Class_1_D3359DF62696519E___c__DisplayClass6_0_TypeDefinitionIndex = 79550;

class Class_1_D3359DF62696519E___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::Client::MechCraft::MechCraftAttributeType target; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SetTargetUnReached_b__0(::Class_1_2EC118B78FC4216B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2EC118B78FC4216B*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E___C__DISPLAYCLASS6_0__SETTARGETUNREACHED_B__0_OFFSET))(this, a1);
	}
};
