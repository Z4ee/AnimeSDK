#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

class Class_1_20D3150E1235DCB5;
class Class_1_9A17EB74C01177E3;
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_B5F93263C61C75CE_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10C86480)
#define CLASS_1_B5F93263C61C75CE_GET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x10C864E0)
#define CLASS_1_B5F93263C61C75CE_GET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x10C86510)
#define CLASS_1_B5F93263C61C75CE_GET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x10C864C0)
#define CLASS_1_B5F93263C61C75CE_GET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x10C86530)
#define CLASS_1_B5F93263C61C75CE_GET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10C864A0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x10C85530)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x10C85D50)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10C85CF0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_2B78E57E6DA20820_OFFSET UNITYSDK_OFFSET(0x10C86310)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x10C85E10)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C85DB0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_4BA0E333242074E4_OFFSET UNITYSDK_OFFSET(0x10C86050)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_5A2C04A883522E6C_OFFSET UNITYSDK_OFFSET(0x10C85730)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x10C84160)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_68C1385DC892D665_OFFSET UNITYSDK_OFFSET(0x10C85FA0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_7D4B05061C536709_OFFSET UNITYSDK_OFFSET(0x10C856A0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x10C85EE0)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10C85600)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x10C85450)
#define CLASS_1_B5F93263C61C75CE_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x10C84D10)
#define CLASS_1_B5F93263C61C75CE_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10C86490)
#define CLASS_1_B5F93263C61C75CE_SET_NEWWAVEFLAG_OFFSET UNITYSDK_OFFSET(0x10C864F0)
#define CLASS_1_B5F93263C61C75CE_SET_NEXTTURNSTATEQUEUE_OFFSET UNITYSDK_OFFSET(0x10C86500)
#define CLASS_1_B5F93263C61C75CE_SET_ONEMOREACTIONFLAG_OFFSET UNITYSDK_OFFSET(0x10C864D0)
#define CLASS_1_B5F93263C61C75CE_SET_ROLLBACKSTATE_OFFSET UNITYSDK_OFFSET(0x10C86520)
#define CLASS_1_B5F93263C61C75CE_SET_TARGETTURNSTATE_OFFSET UNITYSDK_OFFSET(0x10C864B0)
#define CLASS_1_B5F93263C61C75CE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C840D0)

inline static constexpr unsigned int Class_1_B5F93263C61C75CE_TypeDefinitionIndex = 52543;

class Class_1_B5F93263C61C75CE : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* _NextTurnStateQueue_k__BackingField; // 0x10
	::Class_1_9A17EB74C01177E3* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnState, ::Class_1_20D3150E1235DCB5*>* Field_1_3; // 0x28
	::RPG::GameCore::TurnBasedGameMode* Field_1_4; // 0x30
	::RPG::GameCore::TurnState _TargetTurnState_k__BackingField; // 0x38
	::RPG::GameCore::TurnState _CurrentTurnState_k__BackingField; // 0x3C
	::System::Boolean _OneMoreActionFlag_k__BackingField; // 0x40
	::System::Boolean _NewWaveFlag_k__BackingField; // 0x41
	::RPG::GameCore::TurnState _RollbackState_k__BackingField; // 0x44

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_078D85152011B919_OFFSET))(this);
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

	::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_CURRENTTURNSTATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnState get_TargetTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_TARGETTURNSTATE_OFFSET))(this);
	}

	::System::Void set_TargetTurnState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_TARGETTURNSTATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnState Method_1_68C1385DC892D665()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_METHOD_1_68C1385DC892D665_OFFSET))(this);
	}

	::System::Boolean get_OneMoreActionFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_ONEMOREACTIONFLAG_OFFSET))(this);
	}

	::System::Void set_OneMoreActionFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_ONEMOREACTIONFLAG_OFFSET))(this, a1);
	}

	::System::Boolean get_NewWaveFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_NEWWAVEFLAG_OFFSET))(this);
	}

	::System::Void set_NewWaveFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_NEWWAVEFLAG_OFFSET))(this, a1);
	}

	::System::Void set_NextTurnStateQueue(::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_NEXTTURNSTATEQUEUE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>* get_NextTurnStateQueue()
	{
		return ((::System::Collections::Generic::Queue_1<::RPG::GameCore::TurnState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_NEXTTURNSTATEQUEUE_OFFSET))(this);
	}

	::System::Void set_RollbackState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_SET_ROLLBACKSTATE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnState get_RollbackState()
	{
		return ((::RPG::GameCore::TurnState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F93263C61C75CE_GET_ROLLBACKSTATE_OFFSET))(this);
	}
};
