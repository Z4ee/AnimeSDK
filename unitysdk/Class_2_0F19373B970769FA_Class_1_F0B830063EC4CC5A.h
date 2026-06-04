#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F19373B970769FA_ForceKillMarkType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1002;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_0F19373B970769FA_CLASS_1_F0B830063EC4CC5A__CTOR_OFFSET UNITYSDK_OFFSET(0xC982010)

inline static constexpr unsigned int Class_2_0F19373B970769FA_Class_1_F0B830063EC4CC5A_TypeDefinitionIndex = 66990;

class Class_2_0F19373B970769FA_Class_1_F0B830063EC4CC5A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1002* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_2_0F19373B970769FA_ForceKillMarkType Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1002* a1, ::Class_2_0F19373B970769FA_ForceKillMarkType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1002*, ::Class_2_0F19373B970769FA_ForceKillMarkType))((::PBYTE)hIl2Cpp + CLASS_2_0F19373B970769FA_CLASS_1_F0B830063EC4CC5A__CTOR_OFFSET))(this, a1, a2);
	}
};
