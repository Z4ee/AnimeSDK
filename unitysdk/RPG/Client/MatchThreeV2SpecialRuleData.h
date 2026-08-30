#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2SpecialRuleRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1C9ADE10)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C99A700)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1C9ADD00)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C9ADC60)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C9ADBF0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_GET_RULEID_OFFSET UNITYSDK_OFFSET(0x1C9ADC50)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1C9ADDD0)
#define RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9ADDC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2SpecialRuleData_TypeDefinitionIndex = 66050;

	class MatchThreeV2SpecialRuleData : public ::System::Object
	{
	public:
		::System::UInt32 _RuleID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA__CTOR_OFFSET))(this, a1);
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

		static ::RPG::Client::MatchThreeV2SpecialRuleData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2SpecialRuleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>* CreateByConstValue(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeV2SpecialRuleData*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_CREATEBYCONSTVALUE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2SPECIALRULEDATA_INIT_OFFSET))(this);
		}
	};
}
