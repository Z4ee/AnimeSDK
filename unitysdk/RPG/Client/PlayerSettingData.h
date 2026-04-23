#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0xAD69CE0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E00)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0xAD69D20)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xAD69D40)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xAD69DA0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xAD69DE0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xAD69D80)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xAD69D60)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xAD69F20)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0xAD69F40)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0xAD69F60)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0xAD69D00)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E20)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E40)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xAD69E60)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0xAD69EE0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0xAD69EC0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0xAD69F00)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0xAD69E80)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0xAD69EA0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xAD69DC0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0xAD69CF0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E10)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0xAD69D30)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0xAD69D50)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0xAD69DB0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0xAD69DF0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0xAD69D90)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0xAD69D70)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xAD69F30)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0xAD69F50)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0xAD69F70)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0xAD69D10)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E30)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xAD69E50)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0xAD69E70)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0xAD69EF0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0xAD69ED0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0xAD69F10)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0xAD69E90)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0xAD69EB0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0xAD69DD0)
#define RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD663A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingData_TypeDefinitionIndex = 61449;

	class PlayerSettingData : public ::System::Object
	{
	public:
		::System::UInt32 _RelicAutoDecomposeRarity_k__BackingField; // 0x10
		::System::Boolean _CloseRelicAffixHightLight_k__BackingField; // 0x14
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x15
		::System::Boolean _DisplayRecord_k__BackingField; // 0x16
		::System::Boolean _IsAllowOpenOnlineCakeBox_k__BackingField; // 0x17
		::System::Boolean _IsCloseGoodRelicHighLight_k__BackingField; // 0x18
		::System::Boolean _IsFarmStageAutoAddStamina_k__BackingField; // 0x19
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x1A
		::System::Boolean _DisplayBirthday_k__BackingField; // 0x1B
		::System::Boolean _IsAllowStrangerVisit_k__BackingField; // 0x1C
		::System::Boolean _IsEquipmentUpCostPile_k__BackingField; // 0x1D
		::System::Boolean _DisplayCollection_k__BackingField; // 0x1E
		::System::Boolean _DisplayDiary_k__BackingField; // 0x1F
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x20
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x24
		::System::Boolean _IsHideStrangerAssist_k__BackingField; // 0x25
		::System::Boolean _AutoProtectEquipmentRarity4_k__BackingField; // 0x26
		::System::Boolean _IsCloseAvatarLookAt_k__BackingField; // 0x27
		::System::Boolean _IsShowTeamAssociation_k__BackingField; // 0x28
		::System::Boolean _IsCloseSelectAvatarGoodRelicHighlight_k__BackingField; // 0x29
		::System::Boolean _IsAllowEnterOnlinePlayRoom_k__BackingField; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoProtectEquipmentRarity4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this);
		}

		::System::Void set_AutoProtectEquipmentRarity4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseAvatarLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET))(this);
		}

		::System::Void set_IsCloseAvatarLookAt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayBirthday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_DisplayBirthday(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET))(this);
		}

		::System::Void set_DisplayCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_28 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET))(this, value);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_CloseRelicAffixHightLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this);
		}

		::System::Void set_CloseRelicAffixHightLight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseGoodRelicHighLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseGoodRelicHighLight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseSelectAvatarGoodRelicHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseSelectAvatarGoodRelicHighlight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowTeamAssociation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET))(this);
		}

		::System::Void set_IsShowTeamAssociation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET))(this, value);
		}

		::System::UInt32 get_RelicAutoDecomposeRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET))(this);
		}

		::System::Void set_RelicAutoDecomposeRarity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsFarmStageAutoAddStamina()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this);
		}

		::System::Void set_IsFarmStageAutoAddStamina(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this, value);
		}

		::System::Boolean get_IsEquipmentUpCostPile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this);
		}

		::System::Void set_IsEquipmentUpCostPile(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this, value);
		}

		::System::Boolean get_IsHideStrangerAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET))(this);
		}

		::System::Void set_IsHideStrangerAssist(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowEnterOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void set_IsAllowEnterOnlinePlayRoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowOpenOnlineCakeBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this);
		}

		::System::Void set_IsAllowOpenOnlineCakeBox(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowStrangerVisit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET))(this);
		}

		::System::Void set_IsAllowStrangerVisit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET))(this, value);
		}
	};
}
