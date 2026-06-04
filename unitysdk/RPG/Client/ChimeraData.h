#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraMemberType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_2E81B539DAB8D165_1;
class Class_1_C27C9F2BD1AB8E7E;
namespace RPG::Client { class ChimeraAbilityDisplayData; }
namespace RPG::Client { class ChimeraDisplayData; }
namespace RPG::GameCore { class ChimeraAbilityList; }
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }
namespace RPG::GameCore { class ChimeraConfig; }
namespace RPG::GameCore { class ChimeraDataRow; }
namespace RPG::GameCore { class ChimeraTalkConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADATA_CLEARINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB6711E0)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAYPARAMS_OFFSET UNITYSDK_OFFSET(0xB671DF0)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAY_OFFSET UNITYSDK_OFFSET(0xB671D40)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0xB671C40)
#define RPG_CLIENT_CHIMERADATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0xB671230)
#define RPG_CLIENT_CHIMERADATA_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0xB671AF0)
#define RPG_CLIENT_CHIMERADATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0xB671A20)
#define RPG_CLIENT_CHIMERADATA_GET_DATAJSON_OFFSET UNITYSDK_OFFSET(0xB6715F0)
#define RPG_CLIENT_CHIMERADATA_GET_DEFAULTATK_OFFSET UNITYSDK_OFFSET(0xB671990)
#define RPG_CLIENT_CHIMERADATA_GET_DEFAULTHP_OFFSET UNITYSDK_OFFSET(0xB671740)
#define RPG_CLIENT_CHIMERADATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0xB671660)
#define RPG_CLIENT_CHIMERADATA_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0xB671D30)
#define RPG_CLIENT_CHIMERADATA_GET_EYEPARAM_OFFSET UNITYSDK_OFFSET(0xB6714E0)
#define RPG_CLIENT_CHIMERADATA_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0xB671CA0)
#define RPG_CLIENT_CHIMERADATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0xB6712B0)
#define RPG_CLIENT_CHIMERADATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0xB671BE0)
#define RPG_CLIENT_CHIMERADATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0xB671240)
#define RPG_CLIENT_CHIMERADATA_GET_LEAVEJSON_OFFSET UNITYSDK_OFFSET(0xB671D10)
#define RPG_CLIENT_CHIMERADATA_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0xB66EA80)
#define RPG_CLIENT_CHIMERADATA_GET_MODELBODY_OFFSET UNITYSDK_OFFSET(0xB671320)
#define RPG_CLIENT_CHIMERADATA_GET_MODELHORN_OFFSET UNITYSDK_OFFSET(0xB671390)
#define RPG_CLIENT_CHIMERADATA_GET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0xB671470)
#define RPG_CLIENT_CHIMERADATA_GET_MODELWING_OFFSET UNITYSDK_OFFSET(0xB671400)
#define RPG_CLIENT_CHIMERADATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xB6716D0)
#define RPG_CLIENT_CHIMERADATA_GET_SORT_OFFSET UNITYSDK_OFFSET(0xB671580)
#define RPG_CLIENT_CHIMERADATA_GET_TALKCONFIG_OFFSET UNITYSDK_OFFSET(0xB672240)
#define RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOGROUPNAME_OFFSET UNITYSDK_OFFSET(0xB6722A0)
#define RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOSWITCHNAME_OFFSET UNITYSDK_OFFSET(0xB6722C0)
#define RPG_CLIENT_CHIMERADATA_GET__JSONCONFIG_OFFSET UNITYSDK_OFFSET(0xB6717D0)
#define RPG_CLIENT_CHIMERADATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xB670FD0)
#define RPG_CLIENT_CHIMERADATA_SET_WWISEAUDIOGROUPNAME_OFFSET UNITYSDK_OFFSET(0xB6722B0)
#define RPG_CLIENT_CHIMERADATA_SYNCINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB671100)
#define RPG_CLIENT_CHIMERADATA_UPDATEINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB671040)
#define RPG_CLIENT_CHIMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB670F40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraData_TypeDefinitionIndex = 59347;

	class ChimeraData : public ::System::Object
	{
	public:
		::System::String* _WWiseAudioGroupName_k__BackingField; // 0x10
		::RPG::Client::ChimeraDisplayData* _Display_k__BackingField; // 0x18
		::RPG::Client::ChimeraAbilityDisplayData* _AbilityDisplayDataCache; // 0x20
		::Class_1_C27C9F2BD1AB8E7E* _InBattleAttribute; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _AbilityDisplayParamCache; // 0x30
		::System::UInt32 _ChimeraID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateInBattleAttribute(::Class_1_C27C9F2BD1AB8E7E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C27C9F2BD1AB8E7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_UPDATEINBATTLEATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void SyncInBattleAttribute(::Class_1_2E81B539DAB8D165_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E81B539DAB8D165_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_SYNCINBATTLEATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void ClearInBattleAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_CLEARINBATTLEATTRIBUTE_OFFSET))(this);
		}

		::System::UInt32 get_ChimeraID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_CHIMERAID_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraMemberType get_MemberType()
		{
			return ((::RPG::GameCore::ChimeraMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraMaterialType get_ModelBody()
		{
			return ((::RPG::GameCore::ChimeraMaterialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_MODELBODY_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraHornsPartType get_ModelHorn()
		{
			return ((::RPG::GameCore::ChimeraHornsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_MODELHORN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWingsPartType get_ModelWing()
		{
			return ((::RPG::GameCore::ChimeraWingsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_MODELWING_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTailPartType get_ModelTail()
		{
			return ((::RPG::GameCore::ChimeraTailPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_MODELTAIL_OFFSET))(this);
		}

		::System::Int32 get_EyeParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_EYEPARAM_OFFSET))(this);
		}

		::System::Single get_Sort()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_SORT_OFFSET))(this);
		}

		::System::String* get_DataJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_DATAJSON_OFFSET))(this);
		}

		::System::UInt32 get_DisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_DISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_RARITY_OFFSET))(this);
		}

		::System::Int32 get_DefaultHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_DEFAULTHP_OFFSET))(this);
		}

		::System::Int32 get_DefaultAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_DEFAULTATK_OFFSET))(this);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Int32 get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ISDEAD_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraAbilityList* get_Ability()
		{
			return ((::RPG::GameCore::ChimeraAbilityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ABILITY_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>* get_Handlers()
		{
			return ((::Il2CppArray<::RPG::GameCore::ChimeraBattleWaitEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_HANDLERS_OFFSET))(this);
		}

		::System::String* get_LeaveJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_LEAVEJSON_OFFSET))(this);
		}

		::RPG::Client::ChimeraDisplayData* get_Display()
		{
			return ((::RPG::Client::ChimeraDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_DISPLAY_OFFSET))(this);
		}

		::RPG::Client::ChimeraAbilityDisplayData* get_AbilityDisplay()
		{
			return ((::RPG::Client::ChimeraAbilityDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_AbilityDisplayParams()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAYPARAMS_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTalkConfig* get_TalkConfig()
		{
			return ((::RPG::GameCore::ChimeraTalkConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_TALKCONFIG_OFFSET))(this);
		}

		::System::String* get_WWiseAudioGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOGROUPNAME_OFFSET))(this);
		}

		::System::Void set_WWiseAudioGroupName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_SET_WWISEAUDIOGROUPNAME_OFFSET))(this, a1);
		}

		::System::String* get_WWiseAudioSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOSWITCHNAME_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDataRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraConfig* get__JsonConfig()
		{
			return ((::RPG::GameCore::ChimeraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_GET__JSONCONFIG_OFFSET))(this);
		}
	};
}
