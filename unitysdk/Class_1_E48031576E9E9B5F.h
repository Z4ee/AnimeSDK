#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define CLASS_1_E48031576E9E9B5F_METHOD_1_170787A7084A91EA_OFFSET UNITYSDK_OFFSET(0x13937D30)

inline static constexpr unsigned int Class_1_E48031576E9E9B5F_TypeDefinitionIndex = 68334;

class Class_1_E48031576E9E9B5F : public ::System::Object
{
public:
	static ::System::Void Method_1_170787A7084A91EA(::UnityEngine::ParticleSystem* a1)
	{
		return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + CLASS_1_E48031576E9E9B5F_METHOD_1_170787A7084A91EA_OFFSET))(a1);
	}
};
