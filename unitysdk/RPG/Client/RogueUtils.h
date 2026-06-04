#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class RogueAreaData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEUTILS_CHECKROGUEAREABANWITHHINT_OFFSET UNITYSDK_OFFSET(0xC8792A0)
#define RPG_CLIENT_ROGUEUTILS_GETCOSMICFRAGMENTCOUNTINENDLESSSPECIFICLEVEL_OFFSET UNITYSDK_OFFSET(0xC8796A0)
#define RPG_CLIENT_ROGUEUTILS_GETDEFAULTAREADATATOSHOW_OFFSET UNITYSDK_OFFSET(0xC878BE0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEAREAMAXSCORE_OFFSET UNITYSDK_OFFSET(0xC8794D0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEBATTLEMANUALEXITCONFIRMHINT_OFFSET UNITYSDK_OFFSET(0xC8797A0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0xC877210)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0xC8772C0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC877440)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEHALLENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC877060)
#define RPG_CLIENT_ROGUEUTILS_GETROGUELEAVEMAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0xC8775C0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEMAPDEPTH_OFFSET UNITYSDK_OFFSET(0xC8793F0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTKEY_OFFSET UNITYSDK_OFFSET(0xC877AF0)
#define RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTSTAMINA_OFFSET UNITYSDK_OFFSET(0xC877A40)
#define RPG_CLIENT_ROGUEUTILS_GETROGUETRANSFERMAINPAGEFINISHSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xC877670)
#define RPG_CLIENT_ROGUEUTILS_GETROLLBUFFCOST_OFFSET UNITYSDK_OFFSET(0xC8777B0)
#define RPG_CLIENT_ROGUEUTILS_GETSCHEDULEROGUEAREAIDINDOING_OFFSET UNITYSDK_OFFSET(0xC878FB0)
#define RPG_CLIENT_ROGUEUTILS_GETSTARTROGUEAVATARMAXNUMBER_OFFSET UNITYSDK_OFFSET(0xC877700)
#define RPG_CLIENT_ROGUEUTILS_HASREWARDRESETTIP_OFFSET UNITYSDK_OFFSET(0xC878350)
#define RPG_CLIENT_ROGUEUTILS_HASSCHEDULEROGUEAREAINDOING_OFFSET UNITYSDK_OFFSET(0xC878DA0)
#define RPG_CLIENT_ROGUEUTILS_HASUNLOCKAREATIP_OFFSET UNITYSDK_OFFSET(0xC877D40)
#define RPG_CLIENT_ROGUEUTILS_ISINENDLESSCOSMICFRAGMENTAREA_OFFSET UNITYSDK_OFFSET(0xC8795D0)
#define RPG_CLIENT_ROGUEUTILS_ISINENTRANCEFLOOR_OFFSET UNITYSDK_OFFSET(0xC879B30)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREABANNED_OFFSET UNITYSDK_OFFSET(0xC8791D0)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREACHESTLOCK_OFFSET UNITYSDK_OFFSET(0xC877BA0)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAPROGRESSUNLOCK_OFFSET UNITYSDK_OFFSET(0xC8789B0)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_1_OFFSET UNITYSDK_OFFSET(0xC878610)
#define RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xC878850)
#define RPG_CLIENT_ROGUEUTILS_SAVEROGUEREWARDTIPSEEN_OFFSET UNITYSDK_OFFSET(0xC8783F0)
#define RPG_CLIENT_ROGUEUTILS_TELEPORTTOENTRANCE_OFFSET UNITYSDK_OFFSET(0xC8799C0)
#define RPG_CLIENT_ROGUEUTILS_TRYGETFIRSTUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0xC877D80)
#define RPG_CLIENT_ROGUEUTILS_TRYGETLASTENTEREDROGUEAREADATA_OFFSET UNITYSDK_OFFSET(0xC878490)
#define RPG_CLIENT_ROGUEUTILS_TRYGETMAXUNLOCKEDROGUEAREA_OFFSET UNITYSDK_OFFSET(0xC878670)
#define RPG_CLIENT_ROGUEUTILS__GETENTRANCETRANSFERPARAMS_OFFSET UNITYSDK_OFFSET(0xC8798B0)
#define RPG_CLIENT_ROGUEUTILS__GETITEMCONFIGFROMSTR_OFFSET UNITYSDK_OFFSET(0xC877860)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueUtils_TypeDefinitionIndex = 63111;

	class RogueUtils : public ::System::Object
	{
	public:
		static ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> GetRogueHallEntranceID()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEHALLENTRANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceFloorID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEFLOORID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceGroupID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEGROUPID_OFFSET))();
		}

		static ::System::UInt32 GetRogueEntranceInstanceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEENTRANCEINSTANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueLeaveMapEntranceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUELEAVEMAPENTRANCEID_OFFSET))();
		}

		static ::System::UInt32 GetRogueTransferMainPageFinishSubMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUETRANSFERMAINPAGEFINISHSUBMISSIONID_OFFSET))();
		}

		static ::System::UInt32 GetStartRogueAvatarMaxNumber()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETSTARTROGUEAVATARMAXNUMBER_OFFSET))();
		}

		static ::RPG::GameCore::ItemConfig* GetRollBuffCost(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROLLBUFFCOST_OFFSET))(a1);
		}

		static ::RPG::GameCore::ItemConfig* _GetItemConfigFromStr(::System::String* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::ItemConfig*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS__GETITEMCONFIGFROMSTR_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetRogueOpenChestCostStamina()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTSTAMINA_OFFSET))();
		}

		static ::System::UInt32 GetRogueOpenChestCostKey()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEOPENCHESTCOSTKEY_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaChestLock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREACHESTLOCK_OFFSET))(a1);
		}

		static ::System::Boolean HasUnlockAreaTip()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASUNLOCKAREATIP_OFFSET))();
		}

		static ::System::Boolean HasRewardResetTip()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASREWARDRESETTIP_OFFSET))();
		}

		static ::System::Void SaveRogueRewardTipSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_SAVEROGUEREWARDTIPSEEN_OFFSET))();
		}

		static ::RPG::Client::RogueAreaData* TryGetFirstUnlockAreaData(::System::Boolean a1)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETFIRSTUNLOCKAREADATA_OFFSET))(a1);
		}

		static ::RPG::Client::RogueAreaData* TryGetLastEnteredRogueAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETLASTENTEREDROGUEAREADATA_OFFSET))();
		}

		static ::RPG::Client::RogueAreaData* TryGetMaxUnlockedRogueArea()
		{
			return ((::RPG::Client::RogueAreaData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TRYGETMAXUNLOCKEDROGUEAREA_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_OFFSET))(a1);
		}

		static ::System::Boolean IsRogueAreaUnlock_1(::RPG::Client::RogueAreaData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAUNLOCK_1_OFFSET))(a1);
		}

		static ::System::Boolean IsRogueAreaProgressUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREAPROGRESSUNLOCK_OFFSET))(a1);
		}

		static ::RPG::Client::RogueAreaData* GetDefaultAreaDataToShow(::System::Boolean a1)
		{
			return ((::RPG::Client::RogueAreaData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETDEFAULTAREADATATOSHOW_OFFSET))(a1);
		}

		static ::System::Boolean HasScheduleRogueAreaInDoing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_HASSCHEDULEROGUEAREAINDOING_OFFSET))();
		}

		static ::System::UInt32 GetScheduleRogueAreaIDInDoing()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETSCHEDULEROGUEAREAIDINDOING_OFFSET))();
		}

		static ::System::Boolean IsRogueAreaBanned(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISROGUEAREABANNED_OFFSET))(a1);
		}

		static ::System::Boolean CheckRogueAreaBanWithHint(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_CHECKROGUEAREABANWITHHINT_OFFSET))(a1);
		}

		static ::System::UInt32 GetRogueMapDepth(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEMAPDEPTH_OFFSET))(a1);
		}

		static ::System::UInt32 GetRogueAreaMaxScore(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEAREAMAXSCORE_OFFSET))(a1);
		}

		static ::System::Boolean IsInEndlessCosmicFragmentArea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISINENDLESSCOSMICFRAGMENTAREA_OFFSET))();
		}

		static ::System::UInt32 GetCosmicFragmentCountInEndlessSpecificLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETCOSMICFRAGMENTCOUNTINENDLESSSPECIFICLEVEL_OFFSET))();
		}

		static ::RPG::Client::TextID GetRogueBattleManualExitConfirmHint()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_GETROGUEBATTLEMANUALEXITCONFIRMHINT_OFFSET))();
		}

		static ::System::Void _GetEntranceTransferParams(::System::UInt32& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS__GETENTRANCETRANSFERPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Boolean TeleportToEntrance(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_TELEPORTTOENTRANCE_OFFSET))(a1);
		}

		static ::System::Boolean IsInEntranceFloor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEUTILS_ISINENTRANCEFLOOR_OFFSET))();
		}
	};
}
