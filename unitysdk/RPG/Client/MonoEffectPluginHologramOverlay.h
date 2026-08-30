#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1B38BE10)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1B38BBF0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38BF60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginHologramOverlay_TypeDefinitionIndex = 69975;

	class MonoEffectPluginHologramOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::UnityEngine::Vector3 KABMCJNCNFE; // 0x224
		::UnityEngine::Vector4 DJOJMMKJGIJ; // 0x230

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_8_33E2FA8E6403B93D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_33E2FA8E6403B93D_OFFSET))(this);
		}
	};
}
