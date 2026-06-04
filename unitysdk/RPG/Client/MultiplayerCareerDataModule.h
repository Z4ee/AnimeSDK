#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MultiplayerCareerData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0xC1BFC40)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_GETCAREERDATA_OFFSET UNITYSDK_OFFSET(0xC1BFEC0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0xC1BFDE0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC1C03B0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_REGISTERMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0xC1BFF30)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1BFA10)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1C0590)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONGETMATCHPLAYDATARSP_OFFSET UNITYSDK_OFFSET(0xC1C0190)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONMATCHPLAYDATACHANGENTF_OFFSET UNITYSDK_OFFSET(0xC1C02F0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONSELFRANKCHANGENTF_OFFSET UNITYSDK_OFFSET(0xC1C0070)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__TRYINITCAREERDATA_OFFSET UNITYSDK_OFFSET(0xC1BFCC0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC1C0680)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1C0620)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerDataModule_TypeDefinitionIndex = 62001;

	class MultiplayerCareerDataModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::RPG::Client::MultiplayerCareerData*>* _CareerDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_FRIENDRANKINGINFOPROMISED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_MATCHPLAYDATAREFRESHED_OFFSET))(this, a1);
		}

		::RPG::Client::MultiplayerCareerData* GetCareerData(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::RPG::Client::MultiplayerCareerData*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_GETCAREERDATA_OFFSET))(this, a1);
		}

		::System::Void RegisterMatchPlayDataUpdatedListener(::Enum_3_A35B38E5F9115A76_2 a1, ::System::Action_1<::RPG::Client::MatchPlayRecord*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_REGISTERMATCHPLAYDATAUPDATEDLISTENER_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelfRankChangeNtf(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONSELFRANKCHANGENTF_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetMatchPlayDataRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONGETMATCHPLAYDATARSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchPlayDataChangeNtf(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONMATCHPLAYDATACHANGENTF_OFFSET))(this, a1, a2);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _TryInitCareerData(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__TRYINITCAREERDATA_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
