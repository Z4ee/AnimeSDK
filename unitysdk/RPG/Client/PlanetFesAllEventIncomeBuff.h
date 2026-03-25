#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

class Class_0_16E4307DCC419505_670;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0x9F7D380)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x9F7D4C0)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x9F7D270)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x9F7D2F0)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9F7D340)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9F7D520)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x9F7D280)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAllEventIncomeBuff_TypeDefinitionIndex = 54133;

	class PlanetFesAllEventIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* param)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__ONINITPARAM_OFFSET))(this, param);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, avatar);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_670* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_670*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_COMBINE_OFFSET))(this, other);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}
	};
}
