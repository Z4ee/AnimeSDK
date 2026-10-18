#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

namespace UnityEngine { class Mesh; }

#define CLASS_2_91248D6CE299217B_METHOD_2_B8691ED4B4233A8D_OFFSET UNITYSDK_OFFSET(0x15E19670)
#define CLASS_2_91248D6CE299217B_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x15E197C0)
#define CLASS_2_91248D6CE299217B__CTOR_OFFSET UNITYSDK_OFFSET(0x15E199D0)

inline static constexpr unsigned int Class_2_91248D6CE299217B_TypeDefinitionIndex = 47596;

class Class_2_91248D6CE299217B : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91248D6CE299217B__CTOR_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_2_B8691ED4B4233A8D()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91248D6CE299217B_METHOD_2_B8691ED4B4233A8D_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91248D6CE299217B_RESETSIMULATIONSTATE_OFFSET))(this);
	}
};
