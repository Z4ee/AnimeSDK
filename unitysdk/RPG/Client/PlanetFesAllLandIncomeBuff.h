#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

class Class_0_16E4307DCC419505_910;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0x1BD227E0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x1BD22890)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x1BD226B0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x1BD22750)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1BD227A0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD228F0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x1BD226F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAllLandIncomeBuff_TypeDefinitionIndex = 66569;

	class PlanetFesAllLandIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__ONINITPARAM_OFFSET))(this, a1);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_910* Combine(::RPG::Client::IPlanetFesBuff* a1)
		{
			return ((::Class_0_16E4307DCC419505_910*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_COMBINE_OFFSET))(this, a1);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}
	};
}
