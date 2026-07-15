#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;

#define CLASS_1_A92BC063ED2379EB___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8BCA0)
#define CLASS_1_A92BC063ED2379EB___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET UNITYSDK_OFFSET(0x16E8C810)

inline static constexpr unsigned int Class_1_A92BC063ED2379EB___c__DisplayClass34_0_TypeDefinitionIndex = 73474;

class Class_1_A92BC063ED2379EB___c__DisplayClass34_0 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraDuelTeamType team; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _SelectTeamField_b__0(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_A92BC063ED2379EB___C__DISPLAYCLASS34_0__SELECTTEAMFIELD_B__0_OFFSET))(this, a1);
	}
};
