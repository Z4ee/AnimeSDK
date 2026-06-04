#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ISREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xC818D30)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xC818D70)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xC818D50)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUEEXTRA_OFFSET UNITYSDK_OFFSET(0xC818D10)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC818CF0)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ISREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xC818D40)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xC818D80)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xC818D60)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUEEXTRA_OFFSET UNITYSDK_OFFSET(0xC818D20)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC818D00)
#define RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xC818CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameScoreSettleResult_TypeDefinitionIndex = 63468;

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

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ValueExtra()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_VALUEEXTRA_OFFSET))(this);
		}

		::System::Void set_ValueExtra(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_VALUEEXTRA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ISREACHLIMIT_OFFSET))(this);
		}

		::System::Void set_IsReachLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ISREACHLIMIT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Void set_ItemName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMNAME_OFFSET))(this, a1);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::Void set_ItemIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMESCORESETTLERESULT_SET_ITEMICONPATH_OFFSET))(this, a1);
		}
	};
}
