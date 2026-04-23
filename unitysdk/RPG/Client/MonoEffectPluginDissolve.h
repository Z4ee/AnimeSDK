#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA990250)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xA98F3E0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_A03BCE6471ADC02C_OFFSET UNITYSDK_OFFSET(0xA98FCC0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA990140)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xA9902B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA990240)
#define RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9901E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDissolve_TypeDefinitionIndex = 64531;

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
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_16; // 0x1F8

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

		::System::Void Method_8_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
