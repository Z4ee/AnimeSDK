#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicatedCondition.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_26B7C5CF09053420__CTOR_OFFSET UNITYSDK_OFFSET(0x16256C30)

inline static constexpr unsigned int Class_2_26B7C5CF09053420_TypeDefinitionIndex = 36193;

class Class_2_26B7C5CF09053420 : public ::System::Attribute
{
public:
	::RPG::Client::LittleGameShare::ReplicatedCondition EKIJFPIPCKF; // 0x10
	::System::Boolean HIDDBHPPPJI; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26B7C5CF09053420__CTOR_OFFSET))(this);
	}
};
