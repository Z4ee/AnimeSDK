#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_TOOLKIT_RENDERERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x11D807B0)

namespace MoleMole::ToolKit
{
	inline static constexpr unsigned int RendererGroup_TypeDefinitionIndex = 54239;

	class RendererGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TOOLKIT_RENDERERGROUP__CTOR_OFFSET))(this);
		}
	};
}
