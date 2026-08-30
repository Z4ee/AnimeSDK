#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_838;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_D0ABE3932390E93E_METHOD_1_BFA442B83CC2E52F_OFFSET UNITYSDK_OFFSET(0xBD88710)
#define CLASS_1_D0ABE3932390E93E__CTOR_OFFSET UNITYSDK_OFFSET(0xBD887A0)

inline static constexpr unsigned int Class_1_D0ABE3932390E93E_TypeDefinitionIndex = 63967;

class Class_1_D0ABE3932390E93E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ABE3932390E93E__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_838* Method_1_BFA442B83CC2E52F(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_838*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0ABE3932390E93E_METHOD_1_BFA442B83CC2E52F_OFFSET))(this, a1, a2);
	}
};
