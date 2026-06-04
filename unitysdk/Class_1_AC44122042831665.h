#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_AC44122042831665_METHOD_1_655DDF6049BBBE34_OFFSET UNITYSDK_OFFSET(0x18BB54E0)

inline static constexpr unsigned int Class_1_AC44122042831665_TypeDefinitionIndex = 40175;

class Class_1_AC44122042831665 : public ::System::Object
{
public:
	static ::UnityEngine::Vector2 Method_1_655DDF6049BBBE34(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_AC44122042831665_METHOD_1_655DDF6049BBBE34_OFFSET))(a1, a2);
	}
};
