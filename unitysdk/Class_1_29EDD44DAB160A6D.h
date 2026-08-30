#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_828;
class Class_1_7567A2DA21501154;
class Class_1_811C21B122C8082C;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace RPG::GameCore { class ExpeditionBattleNodeContainer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29EDD44DAB160A6D_METHOD_1_291310EE94A30F89_OFFSET UNITYSDK_OFFSET(0xBAE5990)
#define CLASS_1_29EDD44DAB160A6D_METHOD_1_8F38761A34EB3F75_OFFSET UNITYSDK_OFFSET(0xBAE5270)
#define CLASS_1_29EDD44DAB160A6D_METHOD_1_DF72978734FCCB41_OFFSET UNITYSDK_OFFSET(0xBAE5AA0)
#define CLASS_1_29EDD44DAB160A6D__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE5260)

inline static constexpr unsigned int Class_1_29EDD44DAB160A6D_TypeDefinitionIndex = 63933;

class Class_1_29EDD44DAB160A6D : public ::System::Object
{
public:
	::Class_1_7567A2DA21501154* JGDIFAIKIFC; // 0x10
	::Class_0_16E4307DCC419505_828* BEGBEPJDHIM; // 0x18

	::System::Void _ctor(::Class_1_7567A2DA21501154* a1, ::Class_0_16E4307DCC419505_828* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7567A2DA21501154*, ::Class_0_16E4307DCC419505_828*))((::PBYTE)hIl2Cpp + CLASS_1_29EDD44DAB160A6D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>* Method_1_8F38761A34EB3F75(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a3)
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_29EDD44DAB160A6D_METHOD_1_8F38761A34EB3F75_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>* Method_1_DF72978734FCCB41(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>* a4)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::BaseExpeditionBattleAction*>*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_811C21B122C8082C*>*))((::PBYTE)hIl2Cpp + CLASS_1_29EDD44DAB160A6D_METHOD_1_DF72978734FCCB41_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::ExpeditionBattleNodeContainer* Method_1_291310EE94A30F89(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
	{
		return ((::RPG::GameCore::ExpeditionBattleNodeContainer*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + CLASS_1_29EDD44DAB160A6D_METHOD_1_291310EE94A30F89_OFFSET))(this, a1);
	}
};
