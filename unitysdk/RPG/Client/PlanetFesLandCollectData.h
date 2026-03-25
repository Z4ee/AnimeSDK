#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLANETFESLANDCOLLECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9B820)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLandCollectData_TypeDefinitionIndex = 54195;

	class PlanetFesLandCollectData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger Number; // 0x10
		::System::Boolean IsCritical; // 0x20
		::System::UInt32 LandID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLANDCOLLECTDATA__CTOR_OFFSET))(this);
		}
	};
}
