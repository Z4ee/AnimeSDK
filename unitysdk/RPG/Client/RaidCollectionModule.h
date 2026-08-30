#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RaidCollectionType.h"

namespace RPG::Client { class RaidCollectionData; }
namespace RPG::Client { class RaidCollectionGroupData; }
namespace RPG::GameCore { class ActivityRaidCollectionModeRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETACTIVITYTHUMBNAILICONPATHBYTYPE_OFFSET UNITYSDK_OFFSET(0x1805E200)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1805DCB0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1805DB60)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETHARDMODETABIDBYTYPE_OFFSET UNITYSDK_OFFSET(0x1805D740)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETREWARDIDBYTYPE_OFFSET UNITYSDK_OFFSET(0x1805A3C0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0x1805C7D0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1805C8B0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_WILLRAIDUNLOCKCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1805DE10)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1805EC60)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1805E380)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1805F050)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETCOLLECTIONIDBYRAIDID_OFFSET UNITYSDK_OFFSET(0x1805E090)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETMAINPAGEBYTYPE_OFFSET UNITYSDK_OFFSET(0x1805D650)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABINDEX_OFFSET UNITYSDK_OFFSET(0x1805D4B0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABROWBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1805D330)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ISOPENMAINPAGEWHENFIRSTPASSALLHARDSTAGE_OFFSET UNITYSDK_OFFSET(0x1805DB10)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__NEEDOPENMAINPAGEWHENFIRSTPASSALLEASYSTAGE_OFFSET UNITYSDK_OFFSET(0x1805D6F0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONCMDLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0x1805EB30)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDCOLLECTIONDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1805E5B0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDFINISHED_OFFSET UNITYSDK_OFFSET(0x1805EE20)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x1805EAA0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDSTARTLEAVE_OFFSET UNITYSDK_OFFSET(0x1805EDC0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__RESETRAIDLEAVINGFLAG_OFFSET UNITYSDK_OFFSET(0x1805EA50)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x1805DD40)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1805DBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionModule_TypeDefinitionIndex = 66772;

	class RaidCollectionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RaidCollectionGroupData*>* _GroupDatas; // 0x10
		::System::Boolean _IsLeavingRaid; // 0x18
		::System::Boolean _RegisterdAutoshowRequstWhileLeavingRaid; // 0x19
		::System::Boolean _IsCollectionFirstFinished; // 0x1A
		::System::UInt32 _EnteredCollectionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SendPacketsAfterLoginFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::RPG::Client::RaidCollectionGroupData* GetGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RaidCollectionData* GetCollectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETCOLLECTIONDATA_OFFSET))(this, a1);
		}

		::System::Boolean WillRaidUnlockCollection(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_WILLRAIDUNLOCKCOLLECTION_OFFSET))(this, a1);
		}

		::System::UInt32 GetRewardIDByType(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETREWARDIDBYTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 GetHardModeTabIDByType(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETHARDMODETABIDBYTYPE_OFFSET))(this, a1);
		}

		::System::String* GetActivityThumbnailIconPathByType(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETACTIVITYTHUMBNAILICONPATHBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::RaidCollectionGroupData* _SafeGetGroupData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETGROUPDATA_OFFSET))(this, a1);
		}

		::RPG::Client::RaidCollectionData* _SafeGetCollectionData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETCOLLECTIONDATA_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCollectionIDByRaidID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETCOLLECTIONIDBYRAIDID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRaidCollectionModeRow* _GetTabRowByGroupID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionModeRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABROWBYGROUPID_OFFSET))(this, a1);
		}

		::System::Int32 _GetTabIndex(::RPG::GameCore::ActivityRaidCollectionModeRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityRaidCollectionModeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABINDEX_OFFSET))(this, a1);
		}

		::System::String* _GetMainPageByType(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETMAINPAGEBYTYPE_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRaidCollectionDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDCOLLECTIONDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRaidInfoNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDINFONOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveRaidScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONCMDLEAVERAIDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRaidStartLeave(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDSTARTLEAVE_OFFSET))(this, a1);
		}

		::System::Void _OnRaidFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean _IsOpenMainPageWhenFirstPassAllHardStage(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ISOPENMAINPAGEWHENFIRSTPASSALLHARDSTAGE_OFFSET))(this, a1);
		}

		::System::Boolean _NeedOpenMainPageWhenFirstPassAllEasyStage(::RPG::GameCore::RaidCollectionType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__NEEDOPENMAINPAGEWHENFIRSTPASSALLEASYSTAGE_OFFSET))(this, a1);
		}

		::System::Void _ResetRaidLeavingFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__RESETRAIDLEAVINGFLAG_OFFSET))(this);
		}
	};
}
