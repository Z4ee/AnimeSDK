#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_36;
namespace System { class String; }

#define RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xB31FD10)
#define RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xB31FE10)
#define RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xB31FDC0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB31FE60)
#define RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0xB31FD70)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET UNITYSDK_OFFSET(0xB31FF20)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0xB31FD50)
#define RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0xB31FD30)
#define RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET UNITYSDK_OFFSET(0xB31FEB0)
#define RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xB31FC50)
#define RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xB31FCC0)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xB31FD20)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0xB31FD60)
#define RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0xB31FD40)
#define RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB31FBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnnounceData_TypeDefinitionIndex = 62094;

	class AnnounceData : public ::System::Object
	{
	public:
		::Class_1_21DCD4640D389503_36* _Proto; // 0x10
		::System::Boolean _IsStripe_k__BackingField; // 0x18
		::System::Boolean _AlreadyShowed_k__BackingField; // 0x19
		::System::UInt32 _LastShowTime_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_21DCD4640D389503_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void Refresh(::Class_1_21DCD4640D389503_36* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void SetAlreadyShowed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET))(this, a1);
		}

		::System::Boolean get_AlreadyShowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET))(this);
		}

		::System::Void set_AlreadyShowed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastShowTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET))(this);
		}

		::System::Void set_LastShowTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStripe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET))(this);
		}

		::System::Void set_IsStripe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET))(this, a1);
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
