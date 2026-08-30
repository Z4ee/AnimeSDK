#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1B394B70)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x1B393FD0)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_C38AA259F0B46320_OFFSET UNITYSDK_OFFSET(0x1B3947F0)
#define RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B394C00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSceneDissolve_TypeDefinitionIndex = 69980;

	class MonoEffectPluginSceneDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean _EnableDissolve; // 0x170
		::System::Single _DissolveUVChannel; // 0x174
		::System::Single _DissolveMode; // 0x178
		::System::Single _DissolveBase; // 0x17C
		::System::Single _DissolveRange; // 0x180
		::System::Single _DissolveEmissionIntensity; // 0x184
		::UnityEngine::Color _DissolveEmissionColor; // 0x188
		::UnityEngine::Texture2D* _DissolveMap; // 0x198
		::UnityEngine::Texture2D* _DissolveRangeMap; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEOKAPMPABA; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_A91086AED8314DB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_A91086AED8314DB5_OFFSET))(this);
		}

		::System::Void Method_8_C38AA259F0B46320()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_C38AA259F0B46320_OFFSET))(this);
		}

		::System::Void Method_8_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSCENEDISSOLVE_METHOD_8_0BDFAC56E6B704CB_OFFSET))(this);
		}
	};
}
