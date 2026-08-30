#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFE31C413D3A3C3.h"
#include "unitysdk/RPG/Client/ChenLingBattle/Effect.h"

class Class_1_97F76DB9187C3D43;
class Class_1_D17272E82AE804C2_187;
class Class_1_D2520FBD61B50E07;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameSession; }
namespace RPG::Client::ChenLingBattle { class EffectProgressConfig; }
namespace RPG::Client::ChenLingBattle { class Grid; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET UNITYSDK_OFFSET(0xCB05A80)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xCB062D0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET UNITYSDK_OFFSET(0xCB061F0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET UNITYSDK_OFFSET(0xCB06150)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETRELATEDGRID_OFFSET UNITYSDK_OFFSET(0xCB066C0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB06720)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_FINISHCNT_OFFSET UNITYSDK_OFFSET(0xCB06760)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB06800)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0xCB067E0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xCB067C0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCB067A0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_TARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB06680)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB06810)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET UNITYSDK_OFFSET(0xCB067F0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xCB067D0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0xCB067B0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET UNITYSDK_OFFSET(0xCB05E60)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET UNITYSDK_OFFSET(0xCB060A0)
#define RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB05E30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int DynamicProgressEffect_TypeDefinitionIndex = 75880;

	class DynamicProgressEffect : public ::RPG::Client::ChenLingBattle::Effect
	{
	public:
		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* _ProgressConfigs_k__BackingField; // 0x30
		::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* _GameSessionRef; // 0x38
		::System::UInt32 _LastAddProgress_k__BackingField; // 0x40
		::System::UInt32 _FinishCnt; // 0x44
		::Enum_3_7CFE31C413D3A3C3 _SourceType_k__BackingField; // 0x48
		::System::UInt32 _SourceID_k__BackingField; // 0x4C
		::System::UInt32 _CurrentProgress; // 0x50
		::System::UInt32 _TargetProgress; // 0x54

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2, ::Class_1_D2520FBD61B50E07* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ChenLingBattle::DynamicProgressEffect* CreateDynamicProgressEffect(::Class_1_97F76DB9187C3D43* a1, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession* a2)
		{
			return ((::RPG::Client::ChenLingBattle::DynamicProgressEffect*(*)(::Class_1_97F76DB9187C3D43*, ::RPG::Client::ChenLingBattle::ChenLingBattleGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_CREATEDYNAMICPROGRESSEFFECT_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_97F76DB9187C3D43* a1, ::Class_1_D2520FBD61B50E07* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_97F76DB9187C3D43*, ::Class_1_D2520FBD61B50E07*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateLastAddProgress(::Class_1_D17272E82AE804C2_187* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_187*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_UPDATELASTADDPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::EffectProgressConfig* GetProgressConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::EffectProgressConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSCONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 GetProgressAdd(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GETPROGRESSADD_OFFSET))(this, a1, a2, a3, a4);
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

		::Enum_3_7CFE31C413D3A3C3 get_SourceType()
		{
			return ((::Enum_3_7CFE31C413D3A3C3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SourceType(::Enum_3_7CFE31C413D3A3C3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7CFE31C413D3A3C3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SourceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_SOURCEID_OFFSET))(this);
		}

		::System::Void set_SourceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_SOURCEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* get_ProgressConfigs()
		{
			return ((::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_PROGRESSCONFIGS_OFFSET))(this);
		}

		::System::Void set_ProgressConfigs(::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::ChenLingBattle::EffectProgressConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_PROGRESSCONFIGS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastAddProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_GET_LASTADDPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastAddProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_DYNAMICPROGRESSEFFECT_SET_LASTADDPROGRESS_OFFSET))(this, a1);
		}
	};
}
