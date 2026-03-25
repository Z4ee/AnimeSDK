#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_739F331B8908186C_TRIGGER_OFFSET UNITYSDK_OFFSET(0x109B9C00)
#define CLASS_1_739F331B8908186C__CTOR_OFFSET UNITYSDK_OFFSET(0x109B9B70)

inline static constexpr unsigned int Class_1_739F331B8908186C_TypeDefinitionIndex = 53852;

class Class_1_739F331B8908186C : public ::System::Object
{
public:
	::RPG::Client::MonopolyEffectShowType Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_739F331B8908186C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_739F331B8908186C_TRIGGER_OFFSET))(this);
	}
};
