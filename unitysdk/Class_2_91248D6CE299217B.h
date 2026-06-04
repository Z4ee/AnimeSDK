#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

namespace UnityEngine { class Mesh; }

#define CLASS_2_91248D6CE299217B_METHOD_2_B8691ED4B4233A8D_OFFSET UNITYSDK_OFFSET(0x13C977A0)
#define CLASS_2_91248D6CE299217B_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x13C978F0)
#define CLASS_2_91248D6CE299217B__CTOR_OFFSET UNITYSDK_OFFSET(0x13C97B00)
#define CLASS_2_91248D6CE299217B___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x13C97B10)

inline static constexpr unsigned int Class_2_91248D6CE299217B_TypeDefinitionIndex = 44887;

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

	::System::Void __iFixBaseProxy_ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91248D6CE299217B___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET))(this);
	}
};
