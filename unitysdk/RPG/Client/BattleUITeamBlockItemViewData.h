#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1202;
namespace System { class String; }

#define RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC8662C0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETPERCENT_OFFSET UNITYSDK_OFFSET(0xC8666F0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETTITLE_OFFSET UNITYSDK_OFFSET(0xC866350)
#define RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETVALUE_OFFSET UNITYSDK_OFFSET(0xC8665A0)
#define RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC866340)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUITeamBlockItemViewData_TypeDefinitionIndex = 71526;

	class BattleUITeamBlockItemViewData : public ::System::Object
	{
	public:
		// static const ::System::String* _TEXT_ID_TITLE; // 0x0
		// static const ::System::String* _TEXT_ID_PERCENT; // 0x0
		::Class_0_16E4307DCC419505_1202* _ItemData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleUITeamBlockItemViewData* Create(::Class_0_16E4307DCC419505_1202* a1)
		{
			return ((::RPG::Client::BattleUITeamBlockItemViewData*(*)(::Class_0_16E4307DCC419505_1202*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_CREATE_OFFSET))(a1);
		}

		::System::String* GetTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETTITLE_OFFSET))(this);
		}

		::System::String* GetValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETVALUE_OFFSET))(this);
		}

		::System::String* GetPercent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUITEAMBLOCKITEMVIEWDATA_GETPERCENT_OFFSET))(this);
		}
	};
}
