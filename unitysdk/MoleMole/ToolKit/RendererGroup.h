#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_TOOLKIT_RENDERERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x183A7C10)

namespace MoleMole::ToolKit
{
	inline static constexpr unsigned int RendererGroup_TypeDefinitionIndex = 83622;

	class RendererGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOOLKIT_RENDERERGROUP__CTOR_OFFSET))(this);
		}
	};
}
