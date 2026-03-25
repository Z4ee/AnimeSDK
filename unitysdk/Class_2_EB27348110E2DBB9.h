#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AstraFXRendererDelegate.h"

namespace UnityEngine { class Mesh; }

#define CLASS_2_EB27348110E2DBB9_METHOD_2_B8691ED4B4233A8D_OFFSET UNITYSDK_OFFSET(0x11050E70)
#define CLASS_2_EB27348110E2DBB9_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x11050FC0)
#define CLASS_2_EB27348110E2DBB9__CTOR_OFFSET UNITYSDK_OFFSET(0x11051200)
#define CLASS_2_EB27348110E2DBB9___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x11051210)

inline static constexpr unsigned int Class_2_EB27348110E2DBB9_TypeDefinitionIndex = 38457;

class Class_2_EB27348110E2DBB9 : public ::UnityEngine::AstraFXRendererDelegate
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB27348110E2DBB9__CTOR_OFFSET))(this);
	}

	::UnityEngine::Mesh* Method_2_B8691ED4B4233A8D()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB27348110E2DBB9_METHOD_2_B8691ED4B4233A8D_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB27348110E2DBB9_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB27348110E2DBB9___IFIXBASEPROXY_RESETSIMULATIONSTATE_OFFSET))(this);
	}
};
