#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ISREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xB0C8E50)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xB0C8E90)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xB0C8E70)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUEEXTRA_OFFSET UNITYSDK_OFFSET(0xB0C8E30)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB0C8E10)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ISREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xB0C8E60)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xB0C8EA0)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xB0C8E80)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUEEXTRA_OFFSET UNITYSDK_OFFSET(0xB0C8E40)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB0C8E20)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8E00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameScoreSettleResult_TypeDefinitionIndex = 62535;

	class RogueTournGameScoreSettleResult : public ::System::Object
	{
	public:
		::System::String* _ItemIconPath_k__BackingField; // 0x10
		::System::UInt32 _ValueExtra_k__BackingField; // 0x18
		::RPG::Client::TextID _ItemName_k__BackingField; // 0x20
		::System::UInt32 _Value_k__BackingField; // 0x30
		::System::Boolean _IsReachLimit_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_ValueExtra()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUEEXTRA_OFFSET))(this);
		}

		::System::Void set_ValueExtra(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUEEXTRA_OFFSET))(this, value);
		}

		::System::Boolean get_IsReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ISREACHLIMIT_OFFSET))(this);
		}

		::System::Void set_IsReachLimit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ISREACHLIMIT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Void set_ItemName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMNAME_OFFSET))(this, value);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::Void set_ItemIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMICONPATH_OFFSET))(this, value);
		}
	};
}
