#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define RPG_CUSTOMRP_CRPRENDERERDATA_CRPDEBUGRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x192B3C20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPRendererData_CRPDebugResources_TypeDefinitionIndex = 37179;

	class CRPRendererData_CRPDebugResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* DebugOverlay; // 0x10
		::UnityEngine::Shader* DebugWireframe; // 0x18
		::UnityEngine::Shader* DebugWireframeLegacy; // 0x20
		::UnityEngine::Shader* GlobalSDFVisualizeShader; // 0x28
		::UnityEngine::Shader* AdaptiveTessellationDebugShader; // 0x30
		::UnityEngine::ComputeShader* OverDrawReduction; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPRENDERERDATA_CRPDEBUGRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
