#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLANETFESINCOMECHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375E10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesIncomeChangeEvent_TypeDefinitionIndex = 66650;

	class PlanetFesIncomeChangeEvent : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger Change; // 0x10
		::System::Numerics::BigInteger Current; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESINCOMECHANGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
