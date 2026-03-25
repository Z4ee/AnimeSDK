#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DA74A07F9762CEB2_1;
namespace System { class String; }

#define RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x90CDAE0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x90CDBE0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x90CDB90)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x90CDC30)
#define RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x90CDB40)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET UNITYSDK_OFFSET(0x90CDCF0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0x90CDB20)
#define RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x90CDB00)
#define RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET UNITYSDK_OFFSET(0x90CDC80)
#define RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x90CDA20)
#define RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x90CDA90)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0x90CDAF0)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0x90CDB30)
#define RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x90CDB10)
#define RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x90CD9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnnounceData_TypeDefinitionIndex = 54007;

	class AnnounceData : public ::System::Object
	{
	public:
		::Class_1_DA74A07F9762CEB2_1* _Proto; // 0x10
		::System::UInt32 _LastShowTime_k__BackingField; // 0x18
		::System::Boolean _AlreadyShowed_k__BackingField; // 0x1C
		::System::Boolean _IsStripe_k__BackingField; // 0x1D

		::System::Void _ctor(::Class_1_DA74A07F9762CEB2_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DA74A07F9762CEB2_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET))(this, proto);
		}

		::System::Void Refresh(::Class_1_DA74A07F9762CEB2_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DA74A07F9762CEB2_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void SetAlreadyShowed(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET))(this, timeStamp);
		}

		::System::Boolean get_AlreadyShowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET))(this);
		}

		::System::Void set_AlreadyShowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET))(this, value);
		}

		::System::UInt32 get_LastShowTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET))(this);
		}

		::System::Void set_LastShowTime(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsStripe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET))(this);
		}

		::System::Void set_IsStripe(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Frequency()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::String* get_TipText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCenterSystemLast5EveryMinutes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET))(this);
		}
	};
}
