#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6849E525224AB916_METHOD_1_0ECF6E365BC89C37_OFFSET UNITYSDK_OFFSET(0x10B6C4D0)

inline static constexpr unsigned int Class_1_6849E525224AB916_TypeDefinitionIndex = 44931;

class Class_1_6849E525224AB916 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_0ECF6E365BC89C37(::RPG::GameCore::EvolveGearType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + CLASS_1_6849E525224AB916_METHOD_1_0ECF6E365BC89C37_OFFSET))(a1);
	}
};
