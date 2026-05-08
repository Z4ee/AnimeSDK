#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERDATAINITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B588040)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRendererDataIniter_TypeDefinitionIndex = 32677;

	class UIParticleRendererDataIniter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean invertMask; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERDATAINITER__CTOR_OFFSET))(this);
		}
	};
}
