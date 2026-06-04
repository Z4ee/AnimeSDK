#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xC0A7550)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xC0A7760)
#define RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A76A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCharaBreak_TypeDefinitionIndex = 65387;

	class MonoEffectPluginCharaBreak : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::UnityEngine::Vector4 MainSpeed; // 0x220

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_7A097E7EF929F289()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_7A097E7EF929F289_OFFSET))(this);
		}

		::System::Void Method_8_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCHARABREAK_METHOD_8_D78B51BFDA4B8B32_OFFSET))(this);
		}
	};
}
