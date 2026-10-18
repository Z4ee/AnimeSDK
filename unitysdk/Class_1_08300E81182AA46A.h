#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define CLASS_1_08300E81182AA46A_METHOD_1_46174B9528EBBC57_OFFSET UNITYSDK_OFFSET(0x15DB4550)

inline static constexpr unsigned int Class_1_08300E81182AA46A_TypeDefinitionIndex = 47900;

class Class_1_08300E81182AA46A : public ::System::Object
{
public:
	static ::System::Boolean Method_1_46174B9528EBBC57(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_1_08300E81182AA46A_METHOD_1_46174B9528EBBC57_OFFSET))(a1);
	}
};
