#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_E55AE8831AAE79EB_1_GET_TARGETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1784D410)
#define CLASS_2_E55AE8831AAE79EB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1784D400)

inline static constexpr unsigned int Class_2_E55AE8831AAE79EB_1_TypeDefinitionIndex = 53712;

class Class_2_E55AE8831AAE79EB_1 : public ::System::Attribute
{
public:
	::RPG::GameCore::EventType _TargetEventType_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::EventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType))((::PBYTE)hIl2Cpp + CLASS_2_E55AE8831AAE79EB_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType get_TargetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55AE8831AAE79EB_1_GET_TARGETEVENTTYPE_OFFSET))(this);
	}
};
