#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA137DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESCGLOSSARYTERMIDS_OFFSET UNITYSDK_OFFSET(0xA137F30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA137F00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA137F50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA137E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA137ED0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xA137EB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_RULETAG_OFFSET UNITYSDK_OFFSET(0xA137F90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA137F70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SPECIALRULEJSON_OFFSET UNITYSDK_OFFSET(0xA137E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA137E60)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleData_TypeDefinitionIndex = 69848;

	class DiceCombatSpecialRuleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* Create(::System::UInt32 specialRuleID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET))(specialRuleID);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ID_OFFSET))(this);
		}

		::System::String* get_SpecialRuleJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SPECIALRULEJSON_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_PARAMLIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DescGlossaryTermIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESCGLOSSARYTERMIDS_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatWeatherShowType get_ShowType()
		{
			return ((::RPG::GameCore::DiceCombatWeatherShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatWeatherRuleTag get_RuleTag()
		{
			return ((::RPG::GameCore::DiceCombatWeatherRuleTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_RULETAG_OFFSET))(this);
		}
	};
}
