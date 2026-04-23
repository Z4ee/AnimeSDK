#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_833;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class RogueNousTalentRow; }
namespace RPG::GameCore { class RogueTalentRow; }
namespace RPG::GameCore { class RogueTournPermanentTalentRow; }
namespace System { class String; }

#define CLASS_1_4078C96AB014182F_GET_COST_OFFSET UNITYSDK_OFFSET(0x964A720)
#define CLASS_1_4078C96AB014182F_GET_EFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x964A7A0)
#define CLASS_1_4078C96AB014182F_GET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x964A780)
#define CLASS_1_4078C96AB014182F_GET_EFFECTTAG_OFFSET UNITYSDK_OFFSET(0x964A740)
#define CLASS_1_4078C96AB014182F_GET_EFFECTTITLE_OFFSET UNITYSDK_OFFSET(0x964A760)
#define CLASS_1_4078C96AB014182F_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x964A6C0)
#define CLASS_1_4078C96AB014182F_GET_NEXTTALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x964A6E0)
#define CLASS_1_4078C96AB014182F_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x964A7C0)
#define CLASS_1_4078C96AB014182F_GET_TALENTID_OFFSET UNITYSDK_OFFSET(0x964A6A0)
#define CLASS_1_4078C96AB014182F_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x964A700)
#define CLASS_1_4078C96AB014182F_METHOD_1_02D1C9F59EB61FCB_OFFSET UNITYSDK_OFFSET(0x964A410)
#define CLASS_1_4078C96AB014182F_METHOD_1_D7A4AD29E1AA5C62_OFFSET UNITYSDK_OFFSET(0x964A5D0)
#define CLASS_1_4078C96AB014182F_METHOD_1_F0FF75C5B1B78759_OFFSET UNITYSDK_OFFSET(0x964A510)
#define CLASS_1_4078C96AB014182F_SET_COST_OFFSET UNITYSDK_OFFSET(0x964A730)
#define CLASS_1_4078C96AB014182F_SET_EFFECTDESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x964A7B0)
#define CLASS_1_4078C96AB014182F_SET_EFFECTDESC_OFFSET UNITYSDK_OFFSET(0x964A790)
#define CLASS_1_4078C96AB014182F_SET_EFFECTTAG_OFFSET UNITYSDK_OFFSET(0x964A750)
#define CLASS_1_4078C96AB014182F_SET_EFFECTTITLE_OFFSET UNITYSDK_OFFSET(0x964A770)
#define CLASS_1_4078C96AB014182F_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x964A6D0)
#define CLASS_1_4078C96AB014182F_SET_NEXTTALENTIDLIST_OFFSET UNITYSDK_OFFSET(0x964A6F0)
#define CLASS_1_4078C96AB014182F_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x964A7D0)
#define CLASS_1_4078C96AB014182F_SET_TALENTID_OFFSET UNITYSDK_OFFSET(0x964A6B0)
#define CLASS_1_4078C96AB014182F_SET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x964A710)
#define CLASS_1_4078C96AB014182F__CTOR_OFFSET UNITYSDK_OFFSET(0x964A500)

inline static constexpr unsigned int Class_1_4078C96AB014182F_TypeDefinitionIndex = 62177;

class Class_1_4078C96AB014182F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _Cost_k__BackingField; // 0x10
	::Il2CppArray<::System::UInt32>* _UnlockIDList_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* _EffectDescParamList_k__BackingField; // 0x20
	::System::String* _IconPath_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_833* _SendPacketCmd_k__BackingField; // 0x30
	::Il2CppArray<::System::UInt32>* _NextTalentIDList_k__BackingField; // 0x38
	::RPG::Client::TextID _EffectTag_k__BackingField; // 0x40
	::System::UInt32 _TalentID_k__BackingField; // 0x50
	::RPG::Client::TextID _EffectTitle_k__BackingField; // 0x58
	::RPG::Client::TextID _EffectDesc_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F__CTOR_OFFSET))(this);
	}

	static ::Class_1_4078C96AB014182F* Method_1_02D1C9F59EB61FCB(::RPG::GameCore::RogueTalentRow* a1)
	{
		return ((::Class_1_4078C96AB014182F*(*)(::RPG::GameCore::RogueTalentRow*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_METHOD_1_02D1C9F59EB61FCB_OFFSET))(a1);
	}

	static ::Class_1_4078C96AB014182F* Method_1_F0FF75C5B1B78759(::RPG::GameCore::RogueNousTalentRow* a1)
	{
		return ((::Class_1_4078C96AB014182F*(*)(::RPG::GameCore::RogueNousTalentRow*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_METHOD_1_F0FF75C5B1B78759_OFFSET))(a1);
	}

	static ::Class_1_4078C96AB014182F* Method_1_D7A4AD29E1AA5C62(::RPG::GameCore::RogueTournPermanentTalentRow* a1)
	{
		return ((::Class_1_4078C96AB014182F*(*)(::RPG::GameCore::RogueTournPermanentTalentRow*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_METHOD_1_D7A4AD29E1AA5C62_OFFSET))(a1);
	}

	::System::UInt32 get_TalentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_TALENTID_OFFSET))(this);
	}

	::System::Void set_TalentID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_TALENTID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_ICONPATH_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_NextTalentIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_NEXTTALENTIDLIST_OFFSET))(this);
	}

	::System::Void set_NextTalentIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_NEXTTALENTIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_UnlockIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_UNLOCKIDLIST_OFFSET))(this);
	}

	::System::Void set_UnlockIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_UNLOCKIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_Cost()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_COST_OFFSET))(this);
	}

	::System::Void set_Cost(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_COST_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_EffectTag()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_EFFECTTAG_OFFSET))(this);
	}

	::System::Void set_EffectTag(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_EFFECTTAG_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_EffectTitle()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_EFFECTTITLE_OFFSET))(this);
	}

	::System::Void set_EffectTitle(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_EFFECTTITLE_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_EffectDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_EFFECTDESC_OFFSET))(this);
	}

	::System::Void set_EffectDesc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_EFFECTDESC_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_EffectDescParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_EFFECTDESCPARAMLIST_OFFSET))(this);
	}

	::System::Void set_EffectDescParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_EFFECTDESCPARAMLIST_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_833* get_SendPacketCmd()
	{
		return ((::Class_0_16E4307DCC419505_833*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_GET_SENDPACKETCMD_OFFSET))(this);
	}

	::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_833* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_833*))((::PBYTE)hIl2Cpp + CLASS_1_4078C96AB014182F_SET_SENDPACKETCMD_OFFSET))(this, value);
	}
};
