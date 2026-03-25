#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x9CDBA40)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CDC320)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x9CDC250)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x9CDC3A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9CDC310)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x9CDBF80)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSceneDissolve_TypeDefinitionIndex = 57289;

	class MonoEffectPluginSceneDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean _EnableDissolve; // 0x168
		::System::Single _DissolveUVChannel; // 0x16C
		::System::Single _DissolveMode; // 0x170
		::System::Single _DissolveBase; // 0x174
		::System::Single _DissolveRange; // 0x178
		::System::Single _DissolveEmissionIntensity; // 0x17C
		::UnityEngine::Color _DissolveEmissionColor; // 0x180
		::UnityEngine::Texture2D* _DissolveMap; // 0x190
		::UnityEngine::Texture2D* _DissolveRangeMap; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_9; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_43D99DDD80B1E30C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET))(this);
		}

		::System::Void Method_8_FFD65E4FEAD3C019()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_FFD65E4FEAD3C019_OFFSET))(this);
		}

		::System::Void Method_8_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
