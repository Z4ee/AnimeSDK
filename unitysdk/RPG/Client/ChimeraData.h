#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraMemberType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_3E926525914B2E70;
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

#define RPG_CLIENT_CHIMERADATA_CLEARINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1B59F0)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAYPARAMS_OFFSET UNITYSDK_OFFSET(0x1C1B6720)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITYDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C1B6670)
#define RPG_CLIENT_CHIMERADATA_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0x1C1B6530)
#define RPG_CLIENT_CHIMERADATA_GET_CHIMERAID_OFFSET UNITYSDK_OFFSET(0x1C1B5A40)
#define RPG_CLIENT_CHIMERADATA_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1C1B63E0)
#define RPG_CLIENT_CHIMERADATA_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1C1B6310)
#define RPG_CLIENT_CHIMERADATA_GET_DATAJSON_OFFSET UNITYSDK_OFFSET(0x1C1B5F50)
#define RPG_CLIENT_CHIMERADATA_GET_DEFAULTATK_OFFSET UNITYSDK_OFFSET(0x1C1B6280)
#define RPG_CLIENT_CHIMERADATA_GET_DEFAULTHP_OFFSET UNITYSDK_OFFSET(0x1C1B6130)
#define RPG_CLIENT_CHIMERADATA_GET_DISPLAYID_OFFSET UNITYSDK_OFFSET(0x1C1B5FF0)
#define RPG_CLIENT_CHIMERADATA_GET_DISPLAY_OFFSET UNITYSDK_OFFSET(0x1C1B6660)
#define RPG_CLIENT_CHIMERADATA_GET_EYEPARAM_OFFSET UNITYSDK_OFFSET(0x1C1B5E10)
#define RPG_CLIENT_CHIMERADATA_GET_HANDLERS_OFFSET UNITYSDK_OFFSET(0x1C1B6590)
#define RPG_CLIENT_CHIMERADATA_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1C1B5AF0)
#define RPG_CLIENT_CHIMERADATA_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1C1B64D0)
#define RPG_CLIENT_CHIMERADATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x1C1B5A50)
#define RPG_CLIENT_CHIMERADATA_GET_LEAVEJSON_OFFSET UNITYSDK_OFFSET(0x1C1B6600)
#define RPG_CLIENT_CHIMERADATA_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1C1B2EE0)
#define RPG_CLIENT_CHIMERADATA_GET_MODELBODY_OFFSET UNITYSDK_OFFSET(0x1C1B5B90)
#define RPG_CLIENT_CHIMERADATA_GET_MODELHORN_OFFSET UNITYSDK_OFFSET(0x1C1B5C30)
#define RPG_CLIENT_CHIMERADATA_GET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0x1C1B5D70)
#define RPG_CLIENT_CHIMERADATA_GET_MODELWING_OFFSET UNITYSDK_OFFSET(0x1C1B5CD0)
#define RPG_CLIENT_CHIMERADATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1C1B6090)
#define RPG_CLIENT_CHIMERADATA_GET_SORT_OFFSET UNITYSDK_OFFSET(0x1C1B5EB0)
#define RPG_CLIENT_CHIMERADATA_GET_TALKCONFIG_OFFSET UNITYSDK_OFFSET(0x1C1B6B70)
#define RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C1B6BD0)
#define RPG_CLIENT_CHIMERADATA_GET_WWISEAUDIOSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1C1B6BF0)
#define RPG_CLIENT_CHIMERADATA_GET__JSONCONFIG_OFFSET UNITYSDK_OFFSET(0x1C1B61C0)
#define RPG_CLIENT_CHIMERADATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1C1B57E0)
#define RPG_CLIENT_CHIMERADATA_SET_WWISEAUDIOGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C1B6BE0)
#define RPG_CLIENT_CHIMERADATA_SYNCINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1B5910)
#define RPG_CLIENT_CHIMERADATA_UPDATEINBATTLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C1B5850)
#define RPG_CLIENT_CHIMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B5750)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraData_TypeDefinitionIndex = 63471;

	class ChimeraData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDisplayData* _Display_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _AbilityDisplayParamCache; // 0x18
		::System::String* _WWiseAudioGroupName_k__BackingField; // 0x20
		::Class_1_C27C9F2BD1AB8E7E* _InBattleAttribute; // 0x28
		::RPG::Client::ChimeraAbilityDisplayData* _AbilityDisplayDataCache; // 0x30
		::System::UInt32 _ChimeraID_k__BackingField; // 0x38

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void UpdateInBattleAttribute(::Class_1_C27C9F2BD1AB8E7E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C27C9F2BD1AB8E7E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_UPDATEINBATTLEATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void SyncInBattleAttribute(::Class_1_3E926525914B2E70* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E926525914B2E70*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADATA_SYNCINBATTLEATTRIBUTE_OFFSET))(this, a1);
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
