#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarChangeFlag.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B0E9129395C6CBAB_METHOD_1_6AF99AD92B057235_OFFSET UNITYSDK_OFFSET(0x1133E510)
#define CLASS_1_B0E9129395C6CBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1133E560)

inline static constexpr unsigned int Class_1_B0E9129395C6CBAB_TypeDefinitionIndex = 45077;

class Class_1_B0E9129395C6CBAB : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::RPG::GameCore::AvatarChangeFlag Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0E9129395C6CBAB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6AF99AD92B057235(::RPG::GameCore::AvatarChangeFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarChangeFlag))((::PBYTE)hIl2Cpp + CLASS_1_B0E9129395C6CBAB_METHOD_1_6AF99AD92B057235_OFFSET))(this, a1);
	}
};
