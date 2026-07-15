#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaOverlayMatBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1912FED0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY_METHOD_8_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1912FCB0)
#define RPG_CLIENT_MONOEFFECTPLUGINHOLOGRAMOVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19130020)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginHologramOverlay_TypeDefinitionIndex = 66873;

	class MonoEffectPluginHologramOverlay : public ::RPG::Client::MonoEffectPluginCharaOverlayMatBase
	{
	public:
		::System::Boolean FollowScale; // 0x220
		::UnityEngine::Vector3 Field_8_1; // 0x224
		::UnityEngine::Vector4 Field_8_2; // 0x230

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
