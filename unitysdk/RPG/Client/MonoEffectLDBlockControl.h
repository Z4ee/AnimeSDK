#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x10CE5F30)
#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE60A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectLDBlockControl_TypeDefinitionIndex = 65535;

	class MonoEffectLDBlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
