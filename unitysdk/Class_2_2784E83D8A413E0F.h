#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_2784E83D8A413E0F_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x14576280)
#define CLASS_2_2784E83D8A413E0F_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x14576410)
#define CLASS_2_2784E83D8A413E0F_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x14576290)
#define CLASS_2_2784E83D8A413E0F_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x145764B0)
#define CLASS_2_2784E83D8A413E0F__CTOR_OFFSET UNITYSDK_OFFSET(0x145764C0)

inline static constexpr unsigned int Class_2_2784E83D8A413E0F_TypeDefinitionIndex = 51278;

class Class_2_2784E83D8A413E0F : public ::Class_1_8A0BE42C657CE107
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2784E83D8A413E0F__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2784E83D8A413E0F_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2784E83D8A413E0F_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2784E83D8A413E0F_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2784E83D8A413E0F_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}
};
