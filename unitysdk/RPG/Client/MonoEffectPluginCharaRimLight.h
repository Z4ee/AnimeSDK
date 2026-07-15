#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x19120BA0)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x19120D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaRimLight_TypeDefinitionIndex = 66850;

	class MonoEffectPluginCharaRimLight : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color FresnelColor; // 0x170
		::UnityEngine::Vector4 FresnelBSI; // 0x180
		::System::Single FresnelColorStrength; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_D799715F2EF979EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_D799715F2EF979EA_OFFSET))(this);
		}
	};
}
