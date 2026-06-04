#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC08C240)
#define RPG_CLIENT_MONOEFFECTLDBLOCKCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC08C3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectLDBlockControl_TypeDefinitionIndex = 64164;

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
