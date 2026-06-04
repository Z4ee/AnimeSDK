#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6BAFE11FCE160FB2;
namespace RPG::Client { class IPlanetFesBuff; }

#define RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC3F6090)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_OFFSET UNITYSDK_OFFSET(0xC3F5E10)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_BUFF_OFFSET UNITYSDK_OFFSET(0xC3F6150)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xC3F6130)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xC3F6170)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_UID_OFFSET UNITYSDK_OFFSET(0xC3F6110)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_BUFF_OFFSET UNITYSDK_OFFSET(0xC3F6160)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xC3F6140)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_UID_OFFSET UNITYSDK_OFFSET(0xC3F6120)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_UPDATEEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0xC3F5F70)
#define RPG_CLIENT_PLANETFESACTIVEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xC3F5F60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesActiveBuff_TypeDefinitionIndex = 62212;

	class PlanetFesActiveBuff : public ::System::Object
	{
	public:
		::RPG::Client::IPlanetFesBuff* _Buff_k__BackingField; // 0x10
		::System::UInt64 _UID_k__BackingField; // 0x18
		::System::Int64 _ExpiredTime_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesActiveBuff* Create(::Class_1_6BAFE11FCE160FB2* a1)
		{
			return ((::RPG::Client::PlanetFesActiveBuff*(*)(::Class_1_6BAFE11FCE160FB2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesActiveBuff* Create_1(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::RPG::Client::PlanetFesActiveBuff*(*)(::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_1_OFFSET))(a1);
		}

		::System::Void UpdateExpiredTime(::Class_1_6BAFE11FCE160FB2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6BAFE11FCE160FB2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_UPDATEEXPIREDTIME_OFFSET))(this, a1);
		}

		::System::UInt64 get_UID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_UID_OFFSET))(this, a1);
		}

		::System::Int64 get_ExpiredTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_EXPIREDTIME_OFFSET))(this);
		}

		::System::Void set_ExpiredTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_EXPIREDTIME_OFFSET))(this, a1);
		}

		::RPG::Client::IPlanetFesBuff* get_Buff()
		{
			return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_BUFF_OFFSET))(this);
		}

		::System::Void set_Buff(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_BUFF_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_ISEXPIRED_OFFSET))(this);
		}
	};
}
