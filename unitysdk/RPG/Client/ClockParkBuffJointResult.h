#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkBuffItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_APPEND_OFFSET UNITYSDK_OFFSET(0x1ADFDC00)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1ADFDD80)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1ADFEF50)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFDESC_OFFSET UNITYSDK_OFFSET(0x1ADFF130)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFICONPATH_OFFSET UNITYSDK_OFFSET(0x1ADFEFA0)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFNAME_OFFSET UNITYSDK_OFFSET(0x1ADFF040)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1ADFEED0)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0x1ADFF280)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM2_OFFSET UNITYSDK_OFFSET(0x1ADFF390)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM3_OFFSET UNITYSDK_OFFSET(0x1ADFF4A0)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_REMAINEFFECTTIMES_OFFSET UNITYSDK_OFFSET(0x1ADFF220)
#define RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFEE80)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkBuffJointResult_TypeDefinitionIndex = 58743;

	class ClockParkBuffJointResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkBuffItem*>* BuffItems; // 0x10
		::System::UInt32 BuffID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ClockParkBuffJointResult* Create(::RPG::Client::ClockParkBuffItem* a1)
		{
			return ((::RPG::Client::ClockParkBuffJointResult*(*)(::RPG::Client::ClockParkBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_CREATE_OFFSET))(a1);
		}

		::System::Void Append(::RPG::Client::ClockParkBuffItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_APPEND_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkBuffItem* get_First()
		{
			return ((::RPG::Client::ClockParkBuffItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_FIRST_OFFSET))(this);
		}

		::System::Int32 get_BuffCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFCOUNT_OFFSET))(this);
		}

		::System::String* get_BuffIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BuffDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_BUFFDESC_OFFSET))(this);
		}

		::System::UInt32 get_RemainEffectTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_REMAINEFFECTTIMES_OFFSET))(this);
		}

		::System::Int32 get_Param1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM1_OFFSET))(this);
		}

		::System::Int32 get_Param2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM2_OFFSET))(this);
		}

		::System::Int32 get_Param3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKBUFFJOINTRESULT_GET_PARAM3_OFFSET))(this);
		}
	};
}
