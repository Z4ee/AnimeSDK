#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1206;
namespace RPG::Client { class BaseChimeraViewProxy; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_APPLYTIMESCALETOPROXY_OFFSET UNITYSDK_OFFSET(0xC52EA00)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC52E380)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xC52E6C0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xC52F5F0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xC52F0E0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xC52F180)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_REGISTERTICKABLE_OFFSET UNITYSDK_OFFSET(0xC52F510)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC52E880)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xC52E3C0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_UPDATEONACCELERATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC52E6D0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xC52E310)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC52F370)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraViewTimeManager_TypeDefinitionIndex = 73024;

	class ChimeraViewTimeManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1206*>* _PendingTickableList; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1206*>* _TickableList; // 0x18
		::System::Int32 _PauseLockCount; // 0x20
		::System::Single _TimeScale; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void UpdateOnAccelerationChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_UPDATEONACCELERATIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void ApplyTimeScaleToProxy(::RPG::Client::BaseChimeraViewProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseChimeraViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_APPLYTIMESCALETOPROXY_OFFSET))(this, a1);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void PauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_PAUSEGAME_OFFSET))(this, a1);
		}

		::System::Single _GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__GETTIMESCALE_OFFSET))(this);
		}

		::System::Void RegisterTickable(::Class_0_16E4307DCC419505_1206* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1206*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_REGISTERTICKABLE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* get__View()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET__VIEW_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_TIMESCALE_OFFSET))(this);
		}
	};
}
