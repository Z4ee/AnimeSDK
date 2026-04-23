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

#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETACTIVITYTHUMBNAILICONPATHBYTYPE_OFFSET UNITYSDK_OFFSET(0xAF671D0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xAF66D10)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETGROUPDATA_OFFSET UNITYSDK_OFFSET(0xAF66B80)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETHARDMODETABIDBYTYPE_OFFSET UNITYSDK_OFFSET(0xAF667B0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_GETREWARDIDBYTYPE_OFFSET UNITYSDK_OFFSET(0xAF634D0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_SENDPACKETSAFTERLOGINFINISHED_OFFSET UNITYSDK_OFFSET(0xAF658E0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xAF659C0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE_WILLRAIDUNLOCKCOLLECTION_OFFSET UNITYSDK_OFFSET(0xAF66E70)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF67930)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF67310)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF67CD0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETCOLLECTIONIDBYRAIDID_OFFSET UNITYSDK_OFFSET(0xAF670A0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETMAINPAGEBYTYPE_OFFSET UNITYSDK_OFFSET(0xAF666C0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABINDEX_OFFSET UNITYSDK_OFFSET(0xAF66570)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABROWBYGROUPID_OFFSET UNITYSDK_OFFSET(0xAF66430)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ISOPENMAINPAGEWHENFIRSTPASSALLHARDSTAGE_OFFSET UNITYSDK_OFFSET(0xAF66B30)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__NEEDOPENMAINPAGEWHENFIRSTPASSALLEASYSTAGE_OFFSET UNITYSDK_OFFSET(0xAF66760)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONCMDLEAVERAIDSCRSP_OFFSET UNITYSDK_OFFSET(0xAF67820)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDCOLLECTIONDATASCRSP_OFFSET UNITYSDK_OFFSET(0xAF673F0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDFINISHED_OFFSET UNITYSDK_OFFSET(0xAF67AB0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDINFONOTIFY_OFFSET UNITYSDK_OFFSET(0xAF67790)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDSTARTLEAVE_OFFSET UNITYSDK_OFFSET(0xAF67A50)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__RESETRAIDLEAVINGFLAG_OFFSET UNITYSDK_OFFSET(0xAF67740)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0xAF66DA0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETGROUPDATA_OFFSET UNITYSDK_OFFSET(0xAF66C10)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF67DC0)
#define RPG_CLIENT_RAIDCOLLECTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF67D60)

namespace RPG::Client
{
	inline static constexpr unsigned int RaidCollectionModule_TypeDefinitionIndex = 61488;

	class RaidCollectionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RaidCollectionGroupData*>* _GroupDatas; // 0x10
		::System::UInt32 _EnteredCollectionID; // 0x18
		::System::Boolean _IsLeavingRaid; // 0x1C
		::System::Boolean _RegisterdAutoshowRequstWhileLeavingRaid; // 0x1D
		::System::Boolean _IsCollectionFirstFinished; // 0x1E

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

		::RPG::Client::RaidCollectionGroupData* GetGroupData(::System::UInt32 id)
		{
			return ((::RPG::Client::RaidCollectionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETGROUPDATA_OFFSET))(this, id);
		}

		::RPG::Client::RaidCollectionData* GetCollectionData(::System::UInt32 id)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETCOLLECTIONDATA_OFFSET))(this, id);
		}

		::System::Boolean WillRaidUnlockCollection(::System::UInt32 raidID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_WILLRAIDUNLOCKCOLLECTION_OFFSET))(this, raidID);
		}

		::System::UInt32 GetRewardIDByType(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETREWARDIDBYTYPE_OFFSET))(this, type);
		}

		::System::UInt32 GetHardModeTabIDByType(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETHARDMODETABIDBYTYPE_OFFSET))(this, type);
		}

		::System::String* GetActivityThumbnailIconPathByType(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE_GETACTIVITYTHUMBNAILICONPATHBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::RaidCollectionGroupData* _SafeGetGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::RaidCollectionGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETGROUPDATA_OFFSET))(this, groupID);
		}

		::RPG::Client::RaidCollectionData* _SafeGetCollectionData(::System::UInt32 id)
		{
			return ((::RPG::Client::RaidCollectionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__SAFEGETCOLLECTIONDATA_OFFSET))(this, id);
		}

		::System::UInt32 _GetCollectionIDByRaidID(::System::UInt32 raidID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETCOLLECTIONIDBYRAIDID_OFFSET))(this, raidID);
		}

		::RPG::GameCore::ActivityRaidCollectionModeRow* _GetTabRowByGroupID(::System::UInt32 groupID)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionModeRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABROWBYGROUPID_OFFSET))(this, groupID);
		}

		::System::Int32 _GetTabIndex(::RPG::GameCore::ActivityRaidCollectionModeRow* tabRow)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityRaidCollectionModeRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETTABINDEX_OFFSET))(this, tabRow);
		}

		::System::String* _GetMainPageByType(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__GETMAINPAGEBYTYPE_OFFSET))(this, type);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRaidCollectionDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDCOLLECTIONDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnRaidInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLeaveRaidScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONCMDLEAVERAIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRaidStartLeave(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDSTARTLEAVE_OFFSET))(this, obj);
		}

		::System::Void _OnRaidFinished(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ONRAIDFINISHED_OFFSET))(this, obj);
		}

		::System::Boolean _IsOpenMainPageWhenFirstPassAllHardStage(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__ISOPENMAINPAGEWHENFIRSTPASSALLHARDSTAGE_OFFSET))(this, type);
		}

		::System::Boolean _NeedOpenMainPageWhenFirstPassAllEasyStage(::RPG::GameCore::RaidCollectionType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RaidCollectionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__NEEDOPENMAINPAGEWHENFIRSTPASSALLEASYSTAGE_OFFSET))(this, type);
		}

		::System::Void _ResetRaidLeavingFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE__RESETRAIDLEAVINGFLAG_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RAIDCOLLECTIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
