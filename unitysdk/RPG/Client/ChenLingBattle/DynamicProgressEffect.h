#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3_1.h"
#include "unitysdk/RPG/Client/ChenLingBattle/Effect.h"

class Class_1_BE8B780D54F2A10A;
class Class_1_D1E0AD3915BCCF29_20;
class Class_1_F158EBB544151B42;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET UNITYSDK_OFFSET(0x9FA5890)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9FA60F0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET UNITYSDK_OFFSET(0x9FA6010)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET UNITYSDK_OFFSET(0x9FA5F60)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET UNITYSDK_OFFSET(0x9FA63A0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA6400)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET UNITYSDK_OFFSET(0x9FA6420)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA6490)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0x9FA6470)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9FA6450)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9FA6430)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA6410)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA64A0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0x9FA6480)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x9FA6460)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9FA6440)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0x9FA5C70)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FA5EB0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FA5C40)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x9FA6550)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9FA64B0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int DynamicProgressEffect_TypeDefinitionIndex = 70118;

	class DynamicProgressEffect : public ::RPG::Client::ChenLingBattle::Effect
	{
	public:
		::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* _GameSessionRef; // 0x30
		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* _ProgressConfigs_k__BackingField; // 0x38
		::System::UInt32 _SourceID_k__BackingField; // 0x40
		::Enum_3_7CFE31C413D3A3C3_1 _SourceType_k__BackingField; // 0x44
		::System::UInt32 _TargetProgress; // 0x48
		::System::UInt32 _LastAddProgress_k__BackingField; // 0x4C
		::System::UInt32 _CurrentProgress; // 0x50
		::System::UInt32 _FinishCnt; // 0x54

		::System::Void _ctor(::System::UInt32 configId, ::System::UInt64 uniqueId, ::Class_1_BE8B780D54F2A10A* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET))(this, configId, uniqueId, source);
		}

		static ::RPG::Client::ChenLingBattle::DynamicProgressEffect* CreateDynamicProgressEffect(::Class_1_F158EBB544151B42* effectProto, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* gameSession)
		{
			return ((::RPG::Client::ChenLingBattle::DynamicProgressEffect*(*)(::Class_1_F158EBB544151B42*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET))(effectProto, gameSession);
		}

		::System::Void Sync(::Class_1_F158EBB544151B42* effectProto, ::Class_1_BE8B780D54F2A10A* changeSource)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F158EBB544151B42*, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET))(this, effectProto, changeSource);
		}

		::System::Void UpdateLastAddProgress(::Class_1_D1E0AD3915BCCF29_20* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET))(this, proto);
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

		::System::Void __iFixBaseProxy_Sync(::Class_1_F158EBB544151B42* P0, ::Class_1_BE8B780D54F2A10A* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F158EBB544151B42*, ::Class_1_BE8B780D54F2A10A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_SYNC_OFFSET))(this, P0, P1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* __iFixBaseProxy_GetEffectParams()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT___IFIXBASEPROXY_GETEFFECTPARAMS_OFFSET))(this);
		}
	};
}
