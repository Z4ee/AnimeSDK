#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_20D3150E1235DCB5;
class Class_1_F8DBF80B7574EA21;
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_B5F93263C61C75CE_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1139FD60)
#define CLASS_1_B5F93263C61C75CE_GET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x1139FDC0)
#define CLASS_1_B5F93263C61C75CE_GET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1139FDF0)
#define CLASS_1_B5F93263C61C75CE_GET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x1139FDA0)
#define CLASS_1_B5F93263C61C75CE_GET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1139FE10)
#define CLASS_1_B5F93263C61C75CE_GET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1139FD80)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1139F5E0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1139F580)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0x1139FBA0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x1139F6A0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1139F640)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_4BA0E333242074E4_OFFSET UNITYSDK_OFFSET(0x1139F8E0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_5A2C04A883522E6C_OFFSET UNITYSDK_OFFSET(0x1139EFC0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x1139D9F0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_7D4B05061C536709_OFFSET UNITYSDK_OFFSET(0x1139EF30)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_A25F2DBED10BAA4E_OFFSET UNITYSDK_OFFSET(0x1139F830)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1139F770)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1139EE90)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1139EDC0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1139ECE0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1139E5A0)
#define CLASS_1_B5F93263C61C75CE_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1139FD70)
#define CLASS_1_B5F93263C61C75CE_SET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x1139FDD0)
#define CLASS_1_B5F93263C61C75CE_SET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x1139FDE0)
#define CLASS_1_B5F93263C61C75CE_SET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x1139FDB0)
#define CLASS_1_B5F93263C61C75CE_SET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1139FE00)
#define CLASS_1_B5F93263C61C75CE_SET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x1139FD90)
#define CLASS_1_B5F93263C61C75CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1139D960)

inline static constexpr unsigned int Class_1_B5F93263C61C75CE_TypeDefinitionIndex = 45112;

class Class_1_B5F93263C61C75CE : public ::System::Object
{
public:
	::Class_1_F8DBF80B7574EA21* Field_1_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState>* Field_1_9; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::Class_1_20D3150E1235DCB5*>* Field_1_8; // 0x20
	::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* _NextTurnStateQueue_k__BackingField; // 0x28
	::RPG::GameCore::TurnBasedGameMode* Field_1_7; // 0x30
	::System::Boolean _NewWaveFlag_k__BackingField; // 0x38
	::System::Boolean _OneMoreActionFlag_k__BackingField; // 0x39
	::RPG::GameCore::TurnState _RollbackState_k__BackingField; // 0x3C
	::RPG::GameCore::TurnState _TargetTurnState_k__BackingField; // 0x40
	::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x44

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_7D4B05061C536709(::RPG::GameCore::TurnState a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_7D4B05061C536709_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_4BA0E333242074E4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_4BA0E333242074E4_OFFSET))(this, a1);
	}

	::System::String* Method_1_2B78E57E6DA20820()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_2B78E57E6DA20820_OFFSET))(this);
	}

	::System::Void Method_1_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_5A2C04A883522E6C(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_5A2C04A883522E6C_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnState get_CurrentTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_CURRENTTURNSTATE_OFFSET))(this);
	}

	::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_CURRENTTURNSTATE_OFFSET))(this, value);
	}

	::RPG::GameCore::TurnState get_TargetTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_TARGETTURNSTATE_OFFSET))(this);
	}

	::System::Void set_TargetTurnState(::RPG::GameCore::TurnState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_TARGETTURNSTATE_OFFSET))(this, value);
	}

	::RPG::GameCore::TurnState Method_1_A25F2DBED10BAA4E()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_A25F2DBED10BAA4E_OFFSET))(this);
	}

	::System::Boolean get_OneMoreActionFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_ONEMOREACTIONFLAG_OFFSET))(this);
	}

	::System::Void set_OneMoreActionFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_ONEMOREACTIONFLAG_OFFSET))(this, value);
	}

	::System::Boolean get_NewWaveFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_NEWWAVEFLAG_OFFSET))(this);
	}

	::System::Void set_NewWaveFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_NEWWAVEFLAG_OFFSET))(this, value);
	}

	::System::Void set_NextTurnStateQueue(::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_NEXTTURNSTATEQUEUE_OFFSET))(this, value);
	}

	::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* get_NextTurnStateQueue()
	{
		return ((::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_NEXTTURNSTATEQUEUE_OFFSET))(this);
	}

	::System::Void set_RollbackState(::RPG::GameCore::TurnState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_ROLLBACKSTATE_OFFSET))(this, value);
	}

	::RPG::GameCore::TurnState get_RollbackState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_ROLLBACKSTATE_OFFSET))(this);
	}
};
