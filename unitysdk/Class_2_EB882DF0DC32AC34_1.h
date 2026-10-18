#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6CEF1A71F84C86B8.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"

namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_EB882DF0DC32AC34_1_METHOD_2_0C10916F1BB68635_OFFSET UNITYSDK_OFFSET(0x15CE2700)
#define CLASS_2_EB882DF0DC32AC34_1_METHOD_2_3C029C534AE1FB6B_OFFSET UNITYSDK_OFFSET(0x15CE2F00)
#define CLASS_2_EB882DF0DC32AC34_1_METHOD_2_9B48C39BFBDE599D_OFFSET UNITYSDK_OFFSET(0x15CE2710)
#define CLASS_2_EB882DF0DC32AC34_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15CE2F60)
#define CLASS_2_EB882DF0DC32AC34_1_METHOD_2_FDBEFEE526E474E2_OFFSET UNITYSDK_OFFSET(0x15CE2860)
#define CLASS_2_EB882DF0DC32AC34_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE26F0)

inline static constexpr unsigned int Class_2_EB882DF0DC32AC34_1_TypeDefinitionIndex = 56891;

class Class_2_EB882DF0DC32AC34_1 : public ::Class_1_6CEF1A71F84C86B8
{
public:
	::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::BattleEventCreateType Method_2_0C10916F1BB68635()
	{
		return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1_METHOD_2_0C10916F1BB68635_OFFSET))(this);
	}

	::System::Void Method_2_9B48C39BFBDE599D(::RPG::GameCore::BattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1_METHOD_2_9B48C39BFBDE599D_OFFSET))(this, a1);
	}

	::System::Void Method_2_FDBEFEE526E474E2(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1_METHOD_2_FDBEFEE526E474E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C029C534AE1FB6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1_METHOD_2_3C029C534AE1FB6B_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB882DF0DC32AC34_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
