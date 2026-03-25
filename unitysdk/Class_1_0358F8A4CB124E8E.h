#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePlanetFesBuff; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::GameCore { class PlanetFesEffectRow; }

#define CLASS_1_0358F8A4CB124E8E_METHOD_1_5D08E4DE5A986815_OFFSET UNITYSDK_OFFSET(0x11567B00)
#define CLASS_1_0358F8A4CB124E8E_METHOD_1_8750364D99906E59_OFFSET UNITYSDK_OFFSET(0x115678C0)
#define CLASS_1_0358F8A4CB124E8E_METHOD_1_C8259140754B53C5_OFFSET UNITYSDK_OFFSET(0x11567A10)
#define CLASS_1_0358F8A4CB124E8E__CTOR_OFFSET UNITYSDK_OFFSET(0x11567B70)

inline static constexpr unsigned int Class_1_0358F8A4CB124E8E_TypeDefinitionIndex = 54138;

class Class_1_0358F8A4CB124E8E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0358F8A4CB124E8E__CTOR_OFFSET))(this);
	}

	::RPG::Client::IPlanetFesBuff* Method_1_8750364D99906E59(::RPG::GameCore::PlanetFesEffectRow* a1)
	{
		return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectRow*))((::PBYTE)hIl2Cpp + CLASS_1_0358F8A4CB124E8E_METHOD_1_8750364D99906E59_OFFSET))(this, a1);
	}

	::RPG::Client::IPlanetFesBuff* Method_1_5D08E4DE5A986815(::System::UInt32 a1)
	{
		return ((::RPG::Client::IPlanetFesBuff*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0358F8A4CB124E8E_METHOD_1_5D08E4DE5A986815_OFFSET))(this, a1);
	}

	::RPG::Client::BasePlanetFesBuff* Method_1_C8259140754B53C5(::RPG::GameCore::PlanetFesEffectType a1)
	{
		return ((::RPG::Client::BasePlanetFesBuff*(*)(::PVOID, ::RPG::GameCore::PlanetFesEffectType))((::PBYTE)hIl2Cpp + CLASS_1_0358F8A4CB124E8E_METHOD_1_C8259140754B53C5_OFFSET))(this, a1);
	}
};
