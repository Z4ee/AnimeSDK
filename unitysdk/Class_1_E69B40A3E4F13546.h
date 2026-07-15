#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesAssistantMessageType.h"
#include "unitysdk/System/Object.h"

class Class_1_A794720E3EA5DFF0;

#define CLASS_1_E69B40A3E4F13546_METHOD_1_C1662082CE930398_OFFSET UNITYSDK_OFFSET(0x14568160)
#define CLASS_1_E69B40A3E4F13546__CTOR_OFFSET UNITYSDK_OFFSET(0x145682D0)

inline static constexpr unsigned int Class_1_E69B40A3E4F13546_TypeDefinitionIndex = 63554;

class Class_1_E69B40A3E4F13546 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E69B40A3E4F13546__CTOR_OFFSET))(this);
	}

	static ::Class_1_A794720E3EA5DFF0* Method_1_C1662082CE930398(::RPG::GameCore::PlanetFesAssistantMessageType a1)
	{
		return ((::Class_1_A794720E3EA5DFF0*(*)(::RPG::GameCore::PlanetFesAssistantMessageType))((::PBYTE)hIl2Cpp + CLASS_1_E69B40A3E4F13546_METHOD_1_C1662082CE930398_OFFSET))(a1);
	}
};
