#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_SCALABLERENDERERBEHAVIOR_RENDERERPACKAGE_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1AF5C1C0)
#define RPG_CLIENT_SCALABLERENDERERBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF5ABF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ScalableRendererBehavior_RendererPackage_TypeDefinitionIndex = 70274;

	class ScalableRendererBehavior_RendererPackage : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* materials; // 0x18
		::System::UInt32 renderingLayerMask; // 0x20
		::System::Int32 count; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERERBEHAVIOR_RENDERERPACKAGE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_validForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCALABLERENDERERBEHAVIOR_RENDERERPACKAGE_GET_VALIDFORRENDERING_OFFSET))(this);
		}
	};
}
