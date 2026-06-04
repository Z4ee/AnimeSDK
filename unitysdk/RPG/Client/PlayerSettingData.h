#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_6.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/RPG/Client/PlayerSettingType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerSettingItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLAYERSETTINGDATA_GETPLAYERSETTING_OFFSET UNITYSDK_OFFSET(0xC4AADC0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0xC4AAF20)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB040)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC4AAF60)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC4AAF80)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xC4AAFE0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xC4AB020)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xC4AAFC0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xC4AAFA0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xC4AB160)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0xC4AB180)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0xC4AB1A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0xC4AAF40)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB060)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB080)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xC4AB0A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0xC4AB120)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0xC4AB100)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0xC4AB140)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0xC4AB0C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0xC4AB0E0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xC4AB000)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0xC4AAF30)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB050)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0xC4AAF70)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xC4AAF90)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xC4AAFF0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xC4AB030)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xC4AAFD0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xC4AAFB0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xC4AB170)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0xC4AB190)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0xC4AB1B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0xC4AAF50)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB070)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xC4AB090)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xC4AB0B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0xC4AB130)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0xC4AB110)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0xC4AB150)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0xC4AB0D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0xC4AB0F0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xC4AB010)
#define RPG_CLIENT_PLAYERSETTINGDATA_UPDATESERVERSETTING_OFFSET UNITYSDK_OFFSET(0xC4A2420)
#define RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC4A74E0)
#define RPG_CLIENT_PLAYERSETTINGDATA__GETPLAYERSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0xC4AAD60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingData_TypeDefinitionIndex = 62373;

	class PlayerSettingData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::PlayerSettingType, ::RPG::Client::PlayerSettingItem*>* _PlayerSettings; // 0x10
		::System::UInt32 _RelicAutoDecomposeRarity_k__BackingField; // 0x18
		::System::Boolean _IsCloseSelectAvatarGoodRelicHighlight_k__BackingField; // 0x1C
		::System::Boolean _DisplayDiary_k__BackingField; // 0x1D
		::System::Boolean _IsHideStrangerAssist_k__BackingField; // 0x1E
		::System::Boolean _IsCloseGoodRelicHighLight_k__BackingField; // 0x1F
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x20
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x24
		::System::Boolean _IsEquipmentUpCostPile_k__BackingField; // 0x25
		::System::Boolean _IsFarmStageAutoAddStamina_k__BackingField; // 0x26
		::System::Boolean _IsAllowStrangerVisit_k__BackingField; // 0x27
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x28
		::System::Boolean _DisplayRecord_k__BackingField; // 0x29
		::System::Boolean _IsCloseAvatarLookAt_k__BackingField; // 0x2A
		::System::Boolean _IsAllowEnterOnlinePlayRoom_k__BackingField; // 0x2B
		::System::Boolean _DisplayBirthday_k__BackingField; // 0x2C
		::System::Boolean _IsShowTeamAssociation_k__BackingField; // 0x2D
		::System::Boolean _AutoProtectEquipmentRarity4_k__BackingField; // 0x2E
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x2F
		::System::Boolean _DisplayCollection_k__BackingField; // 0x30
		::System::Boolean _CloseRelicAffixHightLight_k__BackingField; // 0x31
		::System::Boolean _IsAllowOpenOnlineCakeBox_k__BackingField; // 0x32

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET))(this);
		}

		::System::Void UpdateServerSetting(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_UPDATESERVERSETTING_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PlayerSettingItem* GetPlayerSetting(::RPG::Client::PlayerSettingType a1)
		{
			return ((::RPG::Client::PlayerSettingItem*(*)(::PVOID, ::RPG::Client::PlayerSettingType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GETPLAYERSETTING_OFFSET))(this, a1);
		}

		::System::Boolean get_AutoProtectEquipmentRarity4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this);
		}

		::System::Void set_AutoProtectEquipmentRarity4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCloseAvatarLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET))(this);
		}

		::System::Void set_IsCloseAvatarLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayBirthday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_DisplayBirthday(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET))(this);
		}

		::System::Void set_DisplayCollection(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_28 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_28 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET))(this, a1);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_CloseRelicAffixHightLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this);
		}

		::System::Void set_CloseRelicAffixHightLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCloseGoodRelicHighLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseGoodRelicHighLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCloseSelectAvatarGoodRelicHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseSelectAvatarGoodRelicHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowTeamAssociation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET))(this);
		}

		::System::Void set_IsShowTeamAssociation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET))(this, a1);
		}

		::System::UInt32 get_RelicAutoDecomposeRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET))(this);
		}

		::System::Void set_RelicAutoDecomposeRarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFarmStageAutoAddStamina()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this);
		}

		::System::Void set_IsFarmStageAutoAddStamina(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEquipmentUpCostPile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this);
		}

		::System::Void set_IsEquipmentUpCostPile(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHideStrangerAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET))(this);
		}

		::System::Void set_IsHideStrangerAssist(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowEnterOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void set_IsAllowEnterOnlinePlayRoom(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowOpenOnlineCakeBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this);
		}

		::System::Void set_IsAllowOpenOnlineCakeBox(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAllowStrangerVisit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET))(this);
		}

		::System::Void set_IsAllowStrangerVisit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerSettingType _GetPlayerSettingType(::Enum_3_01618AD0437C8486_6 a1)
		{
			return ((::RPG::Client::PlayerSettingType(*)(::PVOID, ::Enum_3_01618AD0437C8486_6))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA__GETPLAYERSETTINGTYPE_OFFSET))(this, a1);
		}
	};
}
