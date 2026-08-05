#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL_METHOD_1_91F4824248EF27C1_OFFSET UNITYSDK_OFFSET(0x1BD80260)
#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD800D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOutlineObjectRenderer_Local_TypeDefinitionIndex = 42232;

	class ConfigOutlineObjectRenderer_Local : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* OutlineColorGradient; // 0x10
		::System::Single OutlineColorIntensity; // 0x18
		::System::Single OutlineAnimLifetime; // 0x1C
		::System::Boolean OccludedByDepth; // 0x20
		::System::Boolean OccludedByCharacters; // 0x21
		::System::Boolean enableAvatarUI; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_91F4824248EF27C1(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_LOCAL_METHOD_1_91F4824248EF27C1_OFFSET))(this, a1);
		}
	};
}
