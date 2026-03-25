#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3_1.h"
#include "unitysdk/RPG/Client/ChenLingBattle/Effect.h"

class Class_1_120319518E6F6581_20;
class Class_1_4F2B506A7202947A;
class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET UNITYSDK_OFFSET(0x9337D60)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x93385C0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET UNITYSDK_OFFSET(0x93384E0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET UNITYSDK_OFFSET(0x9338430)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET UNITYSDK_OFFSET(0x9338870)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x93388D0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET UNITYSDK_OFFSET(0x93388F0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9338960)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0x9338940)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9338920)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9338900)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0x93388E0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9338970)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0x9338950)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9338930)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9338910)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x9338140)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9338380)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9338110)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9338A20)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9338980)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int DynamicProgressEffect_TypeDefinitionIndex = 62119;

	class DynamicProgressEffect : public ::RPG::Client::ChenLingBattle::Effect
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* _GameSessionRef; // 0x30
		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* _ProgressConfigs_k__BackingField; // 0x38
		::System::UInt32 _SourceID_k__BackingField; // 0x40
		::System::UInt32 _CurrentProgress; // 0x44
		::System::UInt32 _TargetProgress; // 0x48
		::System::UInt32 _FinishCnt; // 0x4C
		::System::UInt32 _LastAddProgress_k__BackingField; // 0x50
		::Enum_3_7CFE31C413D3A3C3_1 _SourceType_k__BackingField; // 0x54

		::System::Void _ctor(::System::UInt32 configId, ::System::UInt64 uniqueId, ::Class_1_D2520FBD61B50E07* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET))(this, configId, uniqueId, source);
		}

		static ::RPG::Client::ChenLingBattle::DynamicProgressEffect* CreateDynamicProgressEffect(::Class_1_4F2B506A7202947A* effectProto, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* gameSession)
		{
			return ((::RPG::Client::ChenLingBattle::DynamicProgressEffect*(*)(::Class_1_4F2B506A7202947A*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET))(effectProto, gameSession);
		}

		::System::Void Sync(::Class_1_4F2B506A7202947A* effectProto, ::Class_1_D2520FBD61B50E07* changeSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F2B506A7202947A*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET))(this, effectProto, changeSource);
		}

		::System::Void UpdateLastAddProgress(::Class_1_120319518E6F6581_20* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET))(this, proto);
		}

		::RPG::Client::ChenLingBattle::EffectProgressConfig* GetProgressConfig(::System::UInt32 finishCnt)
		{
			return ((::RPG::Client::ChenLingBattle::EffectProgressConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET))(this, finishCnt);
		}

		::System::UInt32 GetProgressAdd(::System::UInt32 lastFinishCnt, ::System::UInt32 lastEndValue, ::System::UInt32 nextFinishCnt, ::System::UInt32 nextEndValue)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET))(this, lastFinishCnt, lastEndValue, nextFinishCnt, nextEndValue);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::Grid* GetRelatedGrid()
		{
			return ((::RPG::Client::ChenLingBattle::Grid*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_TargetProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_FinishCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET))(this);
		}

		::Enum_3_7CFE31C413D3A3C3_1 get_SourceType()
		{
			return ((::Enum_3_7CFE31C413D3A3C3_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_7CFE31C413D3A3C3_1 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7CFE31C413D3A3C3_1))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_SourceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET))(this);
		}

		::System::Void set_SourceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* get_ProgressConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET))(this);
		}

		::System::Void set_ProgressConfigs(::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET))(this, value);
		}

		::System::UInt32 get_LastAddProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAddProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_4F2B506A7202947A* P0, ::Class_1_D2520FBD61B50E07* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4F2B506A7202947A*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_SYNC_OFFSET))(this, P0, P1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* __iFixBaseProxy_GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_GETEFFECTPARAMS_OFFSET))(this);
		}
	};
}
