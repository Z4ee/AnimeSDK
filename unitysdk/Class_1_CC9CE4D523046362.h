#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExpeditionBattleRouteState.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_0AD6ED58055B81A2;
class Class_1_6E4915D0928F88AA;
class Class_1_B8494E43D47731C4;
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_1_CC9CE4D523046362_GET_BATTLEENDDATA_OFFSET UNITYSDK_OFFSET(0x1767D250)
#define CLASS_1_CC9CE4D523046362_GET_CONSUMEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x1767D2B0)
#define CLASS_1_CC9CE4D523046362_GET_FSM_OFFSET UNITYSDK_OFFSET(0x1767D290)
#define CLASS_1_CC9CE4D523046362_GET_ISSETTLERECEIVED_OFFSET UNITYSDK_OFFSET(0x1767D2D0)
#define CLASS_1_CC9CE4D523046362_GET_MAP_OFFSET UNITYSDK_OFFSET(0x1767D230)
#define CLASS_1_CC9CE4D523046362_GET_ROUTESTATEMAP_OFFSET UNITYSDK_OFFSET(0x1767D2A0)
#define CLASS_1_CC9CE4D523046362_GET_TEAMS_OFFSET UNITYSDK_OFFSET(0x1767D270)
#define CLASS_1_CC9CE4D523046362_METHOD_1_2D444D75288B6C4F_OFFSET UNITYSDK_OFFSET(0x1767DB50)
#define CLASS_1_CC9CE4D523046362_METHOD_1_4A7B99FF06C6A910_OFFSET UNITYSDK_OFFSET(0x1767D610)
#define CLASS_1_CC9CE4D523046362_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x1767D4A0)
#define CLASS_1_CC9CE4D523046362_METHOD_1_9F2422E56849ED61_OFFSET UNITYSDK_OFFSET(0x1767D340)
#define CLASS_1_CC9CE4D523046362_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1767D2F0)
#define CLASS_1_CC9CE4D523046362_METHOD_1_C02839B8F78A55E8_OFFSET UNITYSDK_OFFSET(0x1767D860)
#define CLASS_1_CC9CE4D523046362_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1767D820)
#define CLASS_1_CC9CE4D523046362_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1767D7E0)
#define CLASS_1_CC9CE4D523046362_SET_BATTLEENDDATA_OFFSET UNITYSDK_OFFSET(0x1767D260)
#define CLASS_1_CC9CE4D523046362_SET_CONSUMEDLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0x1767D2C0)
#define CLASS_1_CC9CE4D523046362_SET_ISSETTLERECEIVED_OFFSET UNITYSDK_OFFSET(0x1767D2E0)
#define CLASS_1_CC9CE4D523046362_SET_MAP_OFFSET UNITYSDK_OFFSET(0x1767D240)
#define CLASS_1_CC9CE4D523046362_SET_TEAMS_OFFSET UNITYSDK_OFFSET(0x1767D280)
#define CLASS_1_CC9CE4D523046362__CTOR_OFFSET UNITYSDK_OFFSET(0x1767DBB0)

inline static constexpr unsigned int Class_1_CC9CE4D523046362_TypeDefinitionIndex = 63941;

class Class_1_CC9CE4D523046362 : public ::System::Object
{
public:
	::RPG::Client::ExpeditionBattleMap* _Map_k__BackingField; // 0x10
	::Class_1_6E4915D0928F88AA* _Fsm_k__BackingField; // 0x18
	::Class_1_B8494E43D47731C4* _BattleEndData_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* _RouteStateMap_k__BackingField; // 0x28
	::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* _Teams_k__BackingField; // 0x30
	::System::Boolean _IsSettleReceived_k__BackingField; // 0x38
	::System::UInt32 _ConsumedLevelCount_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362__CTOR_OFFSET))(this);
	}

	::RPG::Client::ExpeditionBattleMap* get_Map()
	{
		return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_MAP_OFFSET))(this);
	}

	::System::Void set_Map(::RPG::Client::ExpeditionBattleMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_SET_MAP_OFFSET))(this, a1);
	}

	::Class_1_B8494E43D47731C4* get_BattleEndData()
	{
		return ((::Class_1_B8494E43D47731C4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_BATTLEENDDATA_OFFSET))(this);
	}

	::System::Void set_BattleEndData(::Class_1_B8494E43D47731C4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B8494E43D47731C4*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_SET_BATTLEENDDATA_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* get_Teams()
	{
		return ((::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_TEAMS_OFFSET))(this);
	}

	::System::Void set_Teams(::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_SET_TEAMS_OFFSET))(this, a1);
	}

	::Class_1_6E4915D0928F88AA* get_Fsm()
	{
		return ((::Class_1_6E4915D0928F88AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_FSM_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>* get_RouteStateMap()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ExpeditionBattleRouteState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_ROUTESTATEMAP_OFFSET))(this);
	}

	::System::UInt32 get_ConsumedLevelCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_CONSUMEDLEVELCOUNT_OFFSET))(this);
	}

	::System::Void set_ConsumedLevelCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_SET_CONSUMEDLEVELCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_IsSettleReceived()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_GET_ISSETTLERECEIVED_OFFSET))(this);
	}

	::System::Void set_IsSettleReceived(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_SET_ISSETTLERECEIVED_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::GameCore::ExpeditionBattleFlowStateType Method_1_9F2422E56849ED61()
	{
		return ((::RPG::GameCore::ExpeditionBattleFlowStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_9F2422E56849ED61_OFFSET))(this);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::System::Void Method_1_4A7B99FF06C6A910(::RPG::Client::ExpeditionBattleMap* a1, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_4A7B99FF06C6A910_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* Method_1_C02839B8F78A55E8()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_C02839B8F78A55E8_OFFSET))(this);
	}

	::Class_1_0AD6ED58055B81A2* Method_1_2D444D75288B6C4F()
	{
		return ((::Class_1_0AD6ED58055B81A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362_METHOD_1_2D444D75288B6C4F_OFFSET))(this);
	}
};
