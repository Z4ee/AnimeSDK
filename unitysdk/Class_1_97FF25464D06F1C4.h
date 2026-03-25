#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97FF25464D06F1C4_METHOD_1_1A4BC247898434D2_OFFSET UNITYSDK_OFFSET(0x8851AD0)

inline static constexpr unsigned int Class_1_97FF25464D06F1C4_TypeDefinitionIndex = 50502;

class Class_1_97FF25464D06F1C4 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_1A4BC247898434D2(::RPG::GameCore::GroupCategory a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GroupCategory))((::PBYTE)hIl2Cpp + CLASS_1_97FF25464D06F1C4_METHOD_1_1A4BC247898434D2_OFFSET))(a1);
	}
};
