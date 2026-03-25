#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x9CCD2D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CCE140)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_A03BCE6471ADC02C_OFFSET UNITYSDK_OFFSET(0x9CCDBB0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x9CCE030)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x9CCE1C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9CCE130)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCE0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDissolve_TypeDefinitionIndex = 57277;

	class MonoEffectPluginDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean _EnableDissolve; // 0x168
		::System::Single _DissolveRate; // 0x16C
		::UnityEngine::Texture2D* _DissolveMap; // 0x170
		::UnityEngine::Vector4 _DissolveST; // 0x178
		::UnityEngine::Vector4 _DistortionST; // 0x188
		::System::Single _DissolveDistortionIntensity; // 0x198
		::System::Single _DissolveOutlineSize1; // 0x19C
		::System::Single _DissolveOutlineSize2; // 0x1A0
		::System::Single _DissolveOutlineEmission; // 0x1A4
		::UnityEngine::Color _DissolveOutlineColor1; // 0x1A8
		::UnityEngine::Color _DissolveOutlineColor2; // 0x1B8
		::System::Single _DissoveDirecMask; // 0x1C8
		::System::Single _DissolveMapAdd; // 0x1CC
		::UnityEngine::Vector2 _DissolveOutlineSmoothStep; // 0x1D0
		::System::Single _DissolveUV; // 0x1D8
		::UnityEngine::Vector4 _DissolveUVSpeed; // 0x1DC
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_16; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_43D99DDD80B1E30C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET))(this);
		}

		::System::Void Method_8_A03BCE6471ADC02C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_A03BCE6471ADC02C_OFFSET))(this);
		}

		::System::Void Method_8_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
