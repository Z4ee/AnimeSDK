#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9268626D960D1854__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC98F0)

inline static constexpr unsigned int Class_1_9268626D960D1854_TypeDefinitionIndex = 55800;

class Class_1_9268626D960D1854 : public ::System::Object
{
public:
	::System::String* CDEEHGCEOKN; // 0x10
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::BattleScreenEffectType DLMINHHKKMK; // 0x20
	::System::Int32 NALMBOOCCIN; // 0x24
	::System::Boolean GNDCCBNILML; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9268626D960D1854__CTOR_OFFSET))(this);
	}
};
