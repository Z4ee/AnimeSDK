#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CD2390)
#define RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x9CD21F0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD2380)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFresnelRim_TypeDefinitionIndex = 57282;

	class MonoEffectPluginFresnelRim : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color FresnelColor; // 0x168
		::UnityEngine::Vector4 FresnelBSI; // 0x178
		::System::Single FresnelColorStrength; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_99D60EF23C904C6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_99D60EF23C904C6D_OFFSET))(this);
		}

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}
	};
}
