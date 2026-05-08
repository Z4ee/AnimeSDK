#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOEFFECTPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCF7B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginBase_TypeDefinitionIndex = 44342;

	class MonoEffectPluginBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINBASE__CTOR_OFFSET))(this);
		}
	};
}
