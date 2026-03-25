#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MultiplayerCareerData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_FRIENDRANKINGINFOPROMISED_OFFSET UNITYSDK_OFFSET(0x9DAACA0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_GETCAREERDATA_OFFSET UNITYSDK_OFFSET(0x9DAAF30)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_MATCHPLAYDATAREFRESHED_OFFSET UNITYSDK_OFFSET(0x9DAAE50)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9DAB380)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_REGISTERMATCHPLAYDATAUPDATEDLISTENER_OFFSET UNITYSDK_OFFSET(0x9DAAFA0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DAABC0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DAB590)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONGETMATCHPLAYDATARSP_OFFSET UNITYSDK_OFFSET(0x9DAB1C0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONMATCHPLAYDATACHANGENTF_OFFSET UNITYSDK_OFFSET(0x9DAB2C0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONSELFRANKCHANGENTF_OFFSET UNITYSDK_OFFSET(0x9DAB0E0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__TRYINITCAREERDATA_OFFSET UNITYSDK_OFFSET(0x9DAAD20)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9DAB680)
#define RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DAB620)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerDataModule_TypeDefinitionIndex = 53932;

	class MultiplayerCareerDataModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::RPG::Client::MultiplayerCareerData*>* _CareerDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>* FriendRankingInfoPromised(::Enum_3_F80BFD5B986D5503_3 mode)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*>*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_FRIENDRANKINGINFOPROMISED_OFFSET))(this, mode);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>* MatchPlayDataRefreshed(::Enum_3_F80BFD5B986D5503_3 mode)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::MatchPlayRecord*>*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_MATCHPLAYDATAREFRESHED_OFFSET))(this, mode);
		}

		::RPG::Client::MultiplayerCareerData* GetCareerData(::Enum_3_F80BFD5B986D5503_3 mode)
		{
			return ((::RPG::Client::MultiplayerCareerData*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_GETCAREERDATA_OFFSET))(this, mode);
		}

		::System::Void RegisterMatchPlayDataUpdatedListener(::Enum_3_F80BFD5B986D5503_3 mode, ::System::Action_1<::RPG::Client::MatchPlayRecord*>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3, ::System::Action_1<::RPG::Client::MatchPlayRecord*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_REGISTERMATCHPLAYDATAUPDATEDLISTENER_OFFSET))(this, mode, listener);
		}

		::System::Void _OnSelfRankChangeNtf(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONSELFRANKCHANGENTF_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetMatchPlayDataRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONGETMATCHPLAYDATARSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchPlayDataChangeNtf(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__ONMATCHPLAYDATACHANGENTF_OFFSET))(this, cmd, rspObject);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _TryInitCareerData(::Enum_3_F80BFD5B986D5503_3 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATAMODULE__TRYINITCAREERDATA_OFFSET))(this, gameMode);
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
