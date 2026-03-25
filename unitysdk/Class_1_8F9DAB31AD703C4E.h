#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_8F9DAB31AD703C4E_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0x10AB40F0)

inline static constexpr unsigned int Class_1_8F9DAB31AD703C4E_TypeDefinitionIndex = 59649;

class Class_1_8F9DAB31AD703C4E : public ::System::Object
{
public:
	static ::System::Boolean IsPoolable(::UnityEngine::Transform* rt)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8F9DAB31AD703C4E_ISPOOLABLE_OFFSET))(rt);
	}
};
