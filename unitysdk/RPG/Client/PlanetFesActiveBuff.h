#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CFACAB598270468;
namespace RPG::Client { class IPlanetFesBuff; }

#define RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9F7CB00)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_OFFSET UNITYSDK_OFFSET(0x9F7C8A0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_BUFF_OFFSET UNITYSDK_OFFSET(0x9F7CBC0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x9F7CBA0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x9F7CBE0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_GET_UID_OFFSET UNITYSDK_OFFSET(0x9F7CB80)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_BUFF_OFFSET UNITYSDK_OFFSET(0x9F7CBD0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x9F7CBB0)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_SET_UID_OFFSET UNITYSDK_OFFSET(0x9F7CB90)
#define RPG_CLIENT_PLANETFESACTIVEBUFF_UPDATEEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x9F7CA00)
#define RPG_CLIENT_PLANETFESACTIVEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7C9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesActiveBuff_TypeDefinitionIndex = 54125;

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

		static ::RPG::Client::PlanetFesActiveBuff* Create(::Class_1_1CFACAB598270468* effect)
		{
			return ((::RPG::Client::PlanetFesActiveBuff*(*)(::Class_1_1CFACAB598270468*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_OFFSET))(effect);
		}

		static ::RPG::Client::PlanetFesActiveBuff* Create_1(::RPG::Client::IPlanetFesBuff* buff)
		{
			return ((::RPG::Client::PlanetFesActiveBuff*(*)(::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_CREATE_1_OFFSET))(buff);
		}

		::System::Void UpdateExpiredTime(::Class_1_1CFACAB598270468* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CFACAB598270468*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_UPDATEEXPIREDTIME_OFFSET))(this, effect);
		}

		::System::UInt64 get_UID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_UID_OFFSET))(this, value);
		}

		::System::Int64 get_ExpiredTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_EXPIREDTIME_OFFSET))(this);
		}

		::System::Void set_ExpiredTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_EXPIREDTIME_OFFSET))(this, value);
		}

		::RPG::Client::IPlanetFesBuff* get_Buff()
		{
			return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_BUFF_OFFSET))(this);
		}

		::System::Void set_Buff(::RPG::Client::IPlanetFesBuff* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_SET_BUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESACTIVEBUFF_GET_ISEXPIRED_OFFSET))(this);
		}
	};
}
