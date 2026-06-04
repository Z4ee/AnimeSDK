#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }

#define RPG_CLIENT_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xC0D2A10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCompoundMaterialBlock_TypeDefinitionIndex = 65381;

	class MonoEffectPluginCompoundMaterialBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCOMPOUNDMATERIALBLOCK__CTOR_OFFSET))(this);
		}
	};
}
