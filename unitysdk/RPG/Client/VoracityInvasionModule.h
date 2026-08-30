#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_VORACITYINVASIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE414FF0)
#define RPG_CLIENT_VORACITYINVASIONMODULE_GETFARMINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE415D50)
#define RPG_CLIENT_VORACITYINVASIONMODULE_GETVORACITYINVASIONLEVELBYGAMEENTITY_OFFSET UNITYSDK_OFFSET(0xE4142F0)
#define RPG_CLIENT_VORACITYINVASIONMODULE_GETVORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE414250)
#define RPG_CLIENT_VORACITYINVASIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE414830)
#define RPG_CLIENT_VORACITYINVASIONMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xE414F70)
#define RPG_CLIENT_VORACITYINVASIONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xE414FB0)
#define RPG_CLIENT_VORACITYINVASIONMODULE_SENDGETDATACSREQ_OFFSET UNITYSDK_OFFSET(0xE415040)
#define RPG_CLIENT_VORACITYINVASIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE414D70)
#define RPG_CLIENT_VORACITYINVASIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE414DB0)
#define RPG_CLIENT_VORACITYINVASIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xE415EB0)
#define RPG_CLIENT_VORACITYINVASIONMODULE__GETFARMINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE4143C0)
#define RPG_CLIENT_VORACITYINVASIONMODULE__GETMAPMONSTERINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE414510)
#define RPG_CLIENT_VORACITYINVASIONMODULE__GETSTAGEINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE414490)
#define RPG_CLIENT_VORACITYINVASIONMODULE__INITFARMINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE414890)
#define RPG_CLIENT_VORACITYINVASIONMODULE__INITNPCMONSTERINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0xE414B40)
#define RPG_CLIENT_VORACITYINVASIONMODULE__ONGETVORACITYINVASIONDATASCRSP_OFFSET UNITYSDK_OFFSET(0xE415120)
#define RPG_CLIENT_VORACITYINVASIONMODULE__ONVORACITYINVASIONCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xE415BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int VoracityInvasionModule_TypeDefinitionIndex = 68245;

	class VoracityInvasionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::FarmTypeConfig>* _AllInvadedFarmTypes; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FarmTypeConfig, ::System::UInt32>* _FarmInvasionLevels; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_4<::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::UInt32>* _NPCMonsterInvasionLevels; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FarmTypeConfig, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* InvadedFarmIDs; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetVoracityInvasionLevel(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_GETVORACITYINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 GetVoracityInvasionLevelByGameEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_GETVORACITYINVASIONLEVELBYGAMEENTITY_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void SendGetDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_SENDGETDATACSREQ_OFFSET))(this);
		}

		::System::Void _OnGetVoracityInvasionDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__ONGETVORACITYINVASIONDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnVoracityInvasionChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__ONVORACITYINVASIONCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _InitFarmInvasionLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__INITFARMINVASIONLEVEL_OFFSET))(this);
		}

		::System::Void _InitNPCMonsterInvasionLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__INITNPCMONSTERINVASIONLEVEL_OFFSET))(this);
		}

		::System::Int32 _GetFarmInvasionLevel(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__GETFARMINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 _GetStageInvasionLevel(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__GETSTAGEINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 _GetMapMonsterInvasionLevel(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE__GETMAPMONSTERINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 GetFarmInvasionLevel(::System::UInt32 a1, ::RPG::GameCore::FarmTypeConfig a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_VORACITYINVASIONMODULE_GETFARMINVASIONLEVEL_OFFSET))(this, a1, a2);
		}
	};
}
