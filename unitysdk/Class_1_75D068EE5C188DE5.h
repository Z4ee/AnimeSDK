#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePlanetFesBuff; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::GameCore { class PlanetFesEffectRow; }

#define CLASS_1_75D068EE5C188DE5_METHOD_1_B236F48605FE894C_OFFSET UNITYSDK_OFFSET(0x19BD8F80)
#define CLASS_1_75D068EE5C188DE5_METHOD_1_C8259140754B53C5_OFFSET UNITYSDK_OFFSET(0x19BD8E90)
#define CLASS_1_75D068EE5C188DE5_METHOD_1_D8504B2B25D3A010_OFFSET UNITYSDK_OFFSET(0x19BD8D00)
#define CLASS_1_75D068EE5C188DE5__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD8FF0)

inline static constexpr unsigned int Class_1_75D068EE5C188DE5_TypeDefinitionIndex = 66576;

class Class_1_75D068EE5C188DE5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75D068EE5C188DE5__CTOR_OFFSET))(this);
	}

	::RPG::Client::IPlanetFesBuff* Method_1_D8504B2B25D3A010(::RPG::GameCore::PlanetFesEffectRow* a1)
	{
		return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_75D068EE5C188DE5_METHOD_1_D8504B2B25D3A010_OFFSET))(this, a1);
	}

	::RPG::Client::IPlanetFesBuff* Method_1_B236F48605FE894C(::System::UInt32 a1)
	{
		return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75D068EE5C188DE5_METHOD_1_B236F48605FE894C_OFFSET))(this, a1);
	}

	::RPG::Client::BasePlanetFesBuff* Method_1_C8259140754B53C5(::RPG::GameCore::PlanetFesEffectType a1)
	{
		return ((::RPG::Client::BasePlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectType))((::PBYTE)hIl2Cpp + CLASS_1_75D068EE5C188DE5_METHOD_1_C8259140754B53C5_OFFSET))(this, a1);
	}
};
