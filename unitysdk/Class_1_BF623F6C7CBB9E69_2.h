#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_BF623F6C7CBB9E69_2_TRIGGER_OFFSET UNITYSDK_OFFSET(0xCCDD560)
#define CLASS_1_BF623F6C7CBB9E69_2__CTOR_OFFSET UNITYSDK_OFFSET(0xCCDD4D0)

inline static constexpr unsigned int Class_1_BF623F6C7CBB9E69_2_TypeDefinitionIndex = 66283;

class Class_1_BF623F6C7CBB9E69_2 : public ::System::Object
{
public:
	::System::UInt32 AIDLKPHEAMD; // 0x10
	::System::UInt32 IHFNLAGGGNM; // 0x14
	::System::UInt32 NBJOOFCNMFM; // 0x18
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x1C
	::System::UInt32 NHGPMJAGGCJ; // 0x20

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_BF623F6C7CBB9E69_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF623F6C7CBB9E69_2_TRIGGER_OFFSET))(this);
	}
};
