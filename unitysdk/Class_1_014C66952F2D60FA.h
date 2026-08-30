#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define CLASS_1_014C66952F2D60FA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xBD35D20)
#define CLASS_1_014C66952F2D60FA_GET_SPEQUIP_OFFSET UNITYSDK_OFFSET(0xBD35D30)
#define CLASS_1_014C66952F2D60FA__CTOR_OFFSET UNITYSDK_OFFSET(0xBD35D40)

inline static constexpr unsigned int Class_1_014C66952F2D60FA_TypeDefinitionIndex = 74924;

class Class_1_014C66952F2D60FA : public ::System::Object
{
public:
	::RPG::Client::ActivityIdleLive::SpecialEquip* _SpEquip_k__BackingField; // 0x10
	::System::UInt32 _AvatarId_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + CLASS_1_014C66952F2D60FA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_AvatarId()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_014C66952F2D60FA_GET_AVATARID_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::SpecialEquip* get_SpEquip()
	{
		return ((::RPG::Client::ActivityIdleLive::SpecialEquip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_014C66952F2D60FA_GET_SPEQUIP_OFFSET))(this);
	}
};
