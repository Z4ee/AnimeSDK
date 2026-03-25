#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x9CC3F20)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x9CC3D80)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x9CC3F10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaRimLight_TypeDefinitionIndex = 57262;

	class MonoEffectPluginCharaRimLight : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color FresnelColor; // 0x168
		::UnityEngine::Vector4 FresnelBSI; // 0x178
		::System::Single FresnelColorStrength; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_99D60EF23C904C6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_99D60EF23C904C6D_OFFSET))(this);
		}

		::System::Void Method_8_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARARIMLIGHT_METHOD_8_092CD57850778EFC_OFFSET))(this);
		}
	};
}
