#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xD7B8C30)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_19B14977ABA39612_OFFSET UNITYSDK_OFFSET(0xD7B8680)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0xD7B7890)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7B8CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDissolve_TypeDefinitionIndex = 69967;

	class MonoEffectPluginDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean _EnableDissolve; // 0x170
		::System::Single _DissolveRate; // 0x174
		::UnityEngine::Texture2D* _DissolveMap; // 0x178
		::UnityEngine::Vector4 _DissolveST; // 0x180
		::UnityEngine::Vector4 _DistortionST; // 0x190
		::System::Single _DissolveDistortionIntensity; // 0x1A0
		::System::Single _DissolveOutlineSize1; // 0x1A4
		::System::Single _DissolveOutlineSize2; // 0x1A8
		::System::Single _DissolveOutlineEmission; // 0x1AC
		::UnityEngine::Color _DissolveOutlineColor1; // 0x1B0
		::UnityEngine::Color _DissolveOutlineColor2; // 0x1C0
		::System::Single _DissoveDirecMask; // 0x1D0
		::System::Single _DissolveMapAdd; // 0x1D4
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0x1D8
		::System::Single _DissolveUV; // 0x1E0
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0x1E4
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEOKAPMPABA; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_A91086AED8314DB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET))(this);
		}

		::System::Void Method_8_19B14977ABA39612()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_19B14977ABA39612_OFFSET))(this);
		}

		::System::Void Method_8_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET))(this);
		}
	};
}
