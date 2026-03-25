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

class Class_0_16E4307DCC419505_375;
class Class_0_16E4307DCC419505_414;
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E296C95827C90A8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109083A0)
#define CLASS_1_9E296C95827C90A8_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x109083F0)
#define CLASS_1_9E296C95827C90A8_GET_REGISTERMODE_OFFSET UNITYSDK_OFFSET(0x109086F0)
#define CLASS_1_9E296C95827C90A8_GET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x10908670)
#define CLASS_1_9E296C95827C90A8_METHOD_1_B286FD8ABF100830_OFFSET UNITYSDK_OFFSET(0x10907EF0)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x109085F0)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10908630)
#define CLASS_1_9E296C95827C90A8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10908570)
#define CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_1_OFFSET UNITYSDK_OFFSET(0x10907F90)
#define CLASS_1_9E296C95827C90A8_METHOD_1_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x109077F0)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F004EAAEA47E15E3_OFFSET UNITYSDK_OFFSET(0x10908690)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F2818BF598780548_OFFSET UNITYSDK_OFFSET(0x10907770)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F4E5958F2AE995E5_OFFSET UNITYSDK_OFFSET(0x10908210)
#define CLASS_1_9E296C95827C90A8_METHOD_1_F7B0A9079CE9AD22_OFFSET UNITYSDK_OFFSET(0x10908440)
#define CLASS_1_9E296C95827C90A8_ONAFTERPLAYERCREATE_OFFSET UNITYSDK_OFFSET(0x109084A0)
#define CLASS_1_9E296C95827C90A8_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x109084F0)
#define CLASS_1_9E296C95827C90A8_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x109085B0)
#define CLASS_1_9E296C95827C90A8_ONMAZEBUFFBINDING_OFFSET UNITYSDK_OFFSET(0x10908530)
#define CLASS_1_9E296C95827C90A8_SET__GAMEMODE_OFFSET UNITYSDK_OFFSET(0x10908680)
#define CLASS_1_9E296C95827C90A8__CTOR_OFFSET UNITYSDK_OFFSET(0x10908700)

inline static constexpr unsigned int Class_1_9E296C95827C90A8_TypeDefinitionIndex = 44872;

class Class_1_9E296C95827C90A8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_414*>* Field_1_2; // 0x10
	::RPG::GameCore::TurnBasedGameMode* __GameMode_k__BackingField; // 0x18
	::System::Boolean Field_1_1; // 0x20

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

	::System::Void Method_1_F4E5958F2AE995E5(::RPG::GameCore::EventType a1, ::Class_0_16E4307DCC419505_375* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9E296C95827C90A8_METHOD_1_F4E5958F2AE995E5_OFFSET))(this, a1, a2);
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
};
