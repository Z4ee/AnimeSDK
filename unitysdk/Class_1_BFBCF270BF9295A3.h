#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_BFBCF270BF9295A3_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBFEB440)
#define CLASS_1_BFBCF270BF9295A3_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBFEB3F0)
#define CLASS_1_BFBCF270BF9295A3__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEB3E0)

inline static constexpr unsigned int Class_1_BFBCF270BF9295A3_TypeDefinitionIndex = 56810;

class Class_1_BFBCF270BF9295A3 : public ::System::Object
{
public:
	::System::UInt32 GNOCBLOMLAC; // 0x10
	::RPG::GameCore::AttackDamageType HPADLBCEKOG; // 0x14
	::System::UInt32 DOCIPOEABOM; // 0x18
	::System::Boolean EEOIILCKPNH; // 0x1C
	::System::Boolean MAAKDJAOJGJ; // 0x1D

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BFBCF270BF9295A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFBCF270BF9295A3_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFBCF270BF9295A3_GETEVENTTYPE_OFFSET))(this);
	}
};
