#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x1912F550)
#define RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1912F700)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFresnelRim_TypeDefinitionIndex = 66871;

	class MonoEffectPluginFresnelRim : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::UnityEngine::Color FresnelColor; // 0x170
		::UnityEngine::Vector4 FresnelBSI; // 0x180
		::System::Single FresnelColorStrength; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_D799715F2EF979EA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRESNELRIM_METHOD_8_D799715F2EF979EA_OFFSET))(this);
		}
	};
}
