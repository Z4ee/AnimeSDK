#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2SpecialRuleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xA8674A0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA8673B0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA867330)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA8672C0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA867250)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_RULEID_OFFSET UNITYSDK_OFFSET(0xA8672B0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xA867460)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA867450)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2SpecialRuleData_TypeDefinitionIndex = 60769;

	class MatchThreeV2SpecialRuleData : public ::System::Object
	{
	public:
		::System::UInt32 _RuleID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 ruleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA__CTOR_OFFSET))(this, ruleID);
		}

		::RPG::GameCore::MatchThreeV2SpecialRuleRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2SpecialRuleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_RuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_RULEID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_DESC_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2SpecialRuleData* Create(::System::UInt32 ruleID)
		{
			return ((::RPG::Client::MatchThreeV2SpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET))(ruleID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>* CreateByConstValue(::System::String* constValue)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET))(constValue);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET))(this);
		}
	};
}
