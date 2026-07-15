#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NodeGraphDisplayType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_17870E2EB8C466A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3D8180)

inline static constexpr unsigned int Class_2_17870E2EB8C466A9_TypeDefinitionIndex = 10456;

class Class_2_17870E2EB8C466A9 : public ::System::Attribute
{
public:
	::RPG::GameCore::NodeGraphDisplayType Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::NodeGraphDisplayType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NodeGraphDisplayType))((::PBYTE)hIl2Cpp + CLASS_2_17870E2EB8C466A9__CTOR_OFFSET))(this, a1);
	}
};
