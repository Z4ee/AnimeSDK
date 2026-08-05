#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOETHEREYESOUTLINERENDERIGNORE__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4BE20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEtherEyesOutlineRenderIgnore_TypeDefinitionIndex = 71161;

	class MonoEtherEyesOutlineRenderIgnore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* outlineIgnoreRenderers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOETHEREYESOUTLINERENDERIGNORE__CTOR_OFFSET))(this);
		}
	};
}
