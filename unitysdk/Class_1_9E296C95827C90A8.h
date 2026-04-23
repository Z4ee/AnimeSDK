#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8_ERegisterMode.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_497;
class Class_1_CFAD0A6C5E25FBEF;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E296C95827C90A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F2CB0)
#define CLASS_1_9E296C95827C90A8_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x99F2D10)
#define CLASS_1_9E296C95827C90A8_GET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0x99F3020)
#define CLASS_1_9E296C95827C90A8_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0x99F3010)
#define CLASS_1_9E296C95827C90A8_GET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x99F2F90)
#define CLASS_1_9E296C95827C90A8_METHOD_1_B286FD8ABF100830_OFFSET UNITYSDK_OFFSET(0x99F2800)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x99F2F10)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x99F2F50)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99F2E90)
#define CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_1_OFFSET UNITYSDK_OFFSET(0x99F28A0)
#define CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x99F2100)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F004EAAEA47E15E3_OFFSET UNITYSDK_OFFSET(0x99F2FB0)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F2818BF598780548_OFFSET UNITYSDK_OFFSET(0x99F2080)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F4E5958F2AE995E5_OFFSET UNITYSDK_OFFSET(0x99F2B20)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F7B0A9079CE9AD22_OFFSET UNITYSDK_OFFSET(0x99F2D60)
#define CLASS_1_9E296C95827C90A8_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x99F2DC0)
#define CLASS_1_9E296C95827C90A8_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x99F2E10)
#define CLASS_1_9E296C95827C90A8_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x99F2ED0)
#define CLASS_1_9E296C95827C90A8_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x99F2E50)
#define CLASS_1_9E296C95827C90A8_SET_PROGRESSMONITOR_OFFSET UNITYSDK_OFFSET(0x99F3030)
#define CLASS_1_9E296C95827C90A8_SET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x99F2FA0)
#define CLASS_1_9E296C95827C90A8__CTOR_OFFSET UNITYSDK_OFFSET(0x99F3040)

inline static constexpr unsigned int Class_1_9E296C95827C90A8_TypeDefinitionIndex = 51619;

class Class_1_9E296C95827C90A8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_497*>* Field_1_2; // 0x10
	::Class_1_CFAD0A6C5E25FBEF* _ProgressMonitor_k__BackingField; // 0x18
	::RPG::GameCore::TurnBasedGameMode* __GameMode_k__BackingField; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F2818BF598780548(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_F2818BF598780548_OFFSET))(this, a1);
	}

	::System::Void Method_1_B286FD8ABF100830(::RPG::GameCore::GameModeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_B286FD8ABF100830_OFFSET))(this, a1);
	}

	::System::Void Method_1_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_1_DAEB67F34AF80609_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_1_OFFSET))(this);
	}

	::System::Void Method_1_F4E5958F2AE995E5(::RPG::GameCore::EventType a1, ::Class_0_16E4307DCC419505_382* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_F4E5958F2AE995E5_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_DISPOSE_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7B0A9079CE9AD22(::RPG::GameCore::ActivityStatisticsType a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityStatisticsType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_F7B0A9079CE9AD22_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAfterPlayerCreate(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_ONAFTERPLAYERCREATE_OFFSET))(this, a1);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void OnMazeBuffBinding()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_ONMAZEBUFFBINDING_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::RPG::GameCore::TurnBasedGameMode* get__GameMode()
	{
		return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_GET__GAMEMODE_OFFSET))(this);
	}

	::System::Void set__GameMode(::RPG::GameCore::TurnBasedGameMode* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_SET__GAMEMODE_OFFSET))(this, value);
	}

	::RPG::GameCore::BattleLineupData* Method_1_F004EAAEA47E15E3()
	{
		return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_F004EAAEA47E15E3_OFFSET))(this);
	}

	::Class_1_9E296C95827C90A8_ERegisterMode get_RegisterMode()
	{
		return ((::Class_1_9E296C95827C90A8_ERegisterMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_GET_REGISTERMODE_OFFSET))(this);
	}

	::Class_1_CFAD0A6C5E25FBEF* get_ProgressMonitor()
	{
		return ((::Class_1_CFAD0A6C5E25FBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_GET_PROGRESSMONITOR_OFFSET))(this);
	}

	::System::Void set_ProgressMonitor(::Class_1_CFAD0A6C5E25FBEF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CFAD0A6C5E25FBEF*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_SET_PROGRESSMONITOR_OFFSET))(this, value);
	}
};
