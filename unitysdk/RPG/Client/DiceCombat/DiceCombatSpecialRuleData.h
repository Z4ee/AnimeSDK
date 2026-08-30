#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherRuleTag.h"
#include "unitysdk/RPG/GameCore/DiceCombatWeatherShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCD372E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESCGLOSSARYTERMIDS_OFFSET UNITYSDK_OFFSET(0xCD37570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCD37500)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCD375C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCD373A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD37490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xCD37440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_RULETAG_OFFSET UNITYSDK_OFFSET(0xCD37660)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0xCD37610)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_GET_SPECIALRULEJSON_OFFSET UNITYSDK_OFFSET(0xCD373F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCD37390)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleData_TypeDefinitionIndex = 75610;

	class DiceCombatSpecialRuleData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* _Row; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEDATA_CREATE_OFFSET))(a1);
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
