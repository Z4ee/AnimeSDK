#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PuzzleTutorialType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AC38B35AB33B8993_METHOD_1_A4E91EA850D6E03F_OFFSET UNITYSDK_OFFSET(0x11E59270)

inline static constexpr unsigned int Class_1_AC38B35AB33B8993_TypeDefinitionIndex = 72282;

class Class_1_AC38B35AB33B8993 : public ::System::Object
{
public:
	static ::System::Void Method_1_A4E91EA850D6E03F(::RPG::GameCore::PuzzleTutorialType a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PuzzleTutorialType))((::PBYTE)hIl2Cpp + CLASS_1_AC38B35AB33B8993_METHOD_1_A4E91EA850D6E03F_OFFSET))(a1);
	}
};
