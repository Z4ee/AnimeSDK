#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_E55AE8831AAE79EB_GET_TARGETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1836A020)
#define CLASS_2_E55AE8831AAE79EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1836A010)

inline static constexpr unsigned int Class_2_E55AE8831AAE79EB_TypeDefinitionIndex = 56212;

class Class_2_E55AE8831AAE79EB : public ::System::Attribute
{
public:
	::RPG::GameCore::EventType _TargetEventType_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::EventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType))((::PBYTE)hIl2Cpp + CLASS_2_E55AE8831AAE79EB__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType get_TargetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55AE8831AAE79EB_GET_TARGETEVENTTYPE_OFFSET))(this);
	}
};
