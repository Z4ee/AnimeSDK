#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExpeditionBattleFlowStateConfig; }
namespace System { class String; }

#define CLASS_1_7567A2DA21501154_METHOD_1_42EDF81186698B5F_OFFSET UNITYSDK_OFFSET(0x152DA380)
#define CLASS_1_7567A2DA21501154_METHOD_1_E8C0131731CEDFF3_OFFSET UNITYSDK_OFFSET(0x152DA310)
#define CLASS_1_7567A2DA21501154__CTOR_OFFSET UNITYSDK_OFFSET(0x152DA4E0)

inline static constexpr unsigned int Class_1_7567A2DA21501154_TypeDefinitionIndex = 63936;

class Class_1_7567A2DA21501154 : public ::System::Object
{
public:
	// static const ::System::String* LFLICOKAJEK; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7567A2DA21501154__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_E8C0131731CEDFF3(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + CLASS_1_7567A2DA21501154_METHOD_1_E8C0131731CEDFF3_OFFSET))(this, a1);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateConfig* Method_1_42EDF81186698B5F(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateConfig*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + CLASS_1_7567A2DA21501154_METHOD_1_42EDF81186698B5F_OFFSET))(this, a1);
	}
};
