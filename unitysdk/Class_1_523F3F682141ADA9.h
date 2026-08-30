#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_523F3F682141ADA9_ISPOOLABLE_OFFSET UNITYSDK_OFFSET(0x16401010)

inline static constexpr unsigned int Class_1_523F3F682141ADA9_TypeDefinitionIndex = 72702;

class Class_1_523F3F682141ADA9 : public ::System::Object
{
public:
	static ::System::Boolean IsPoolable(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_523F3F682141ADA9_ISPOOLABLE_OFFSET))(a1);
	}
};
