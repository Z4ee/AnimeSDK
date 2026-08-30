#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace OceanSystem { class OceanRenderer; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Camera; }

#define OCEANSYSTEM_OCEANRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0CC040)
#define OCEANSYSTEM_OCEANRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0CC080)
#define OCEANSYSTEM_OCEANRENDERER___C__GET_ONBEGINCAMERARENDERING_B__58_0_OFFSET UNITYSDK_OFFSET(0xC0CC090)

namespace OceanSystem
{
	inline static constexpr unsigned int OceanRenderer___c_TypeDefinitionIndex = 49404;

	class OceanRenderer___c : public ::System::Object
	{
	public:
		static ::OceanSystem::OceanRenderer___c** StaticGet___9()
		{
			return (::OceanSystem::OceanRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(OceanRenderer___c_TypeDefinitionIndex)->GetStaticField(0x14FB0);
		}
		static ::System::Action_3<::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet___9__58_0()
		{
			return (::System::Action_3<::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(OceanRenderer___c_TypeDefinitionIndex)->GetStaticField(0x14FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Void _get_OnBeginCameraRendering_b__58_0(::OceanSystem::OceanRenderer* a1, ::UnityEngine::Rendering::ScriptableRenderContext a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OceanSystem::OceanRenderer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + OCEANSYSTEM_OCEANRENDERER___C__GET_ONBEGINCAMERARENDERING_B__58_0_OFFSET))(this, a1, a2, a3);
		}
	};
}
