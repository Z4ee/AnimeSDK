#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9D2ADA07F34E084B_METHOD_1_D5AA9549C74A8F39_OFFSET UNITYSDK_OFFSET(0xA4F2330)

inline static constexpr unsigned int Class_1_9D2ADA07F34E084B_TypeDefinitionIndex = 71889;

class Class_1_9D2ADA07F34E084B : public ::System::Object
{
public:
	static ::System::Boolean Method_1_D5AA9549C74A8F39(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::LittleGameValueCompareType a3)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::LittleGameValueCompareType))((::PBYTE)hIl2Cpp + CLASS_1_9D2ADA07F34E084B_METHOD_1_D5AA9549C74A8F39_OFFSET))(a1, a2, a3);
	}
};
