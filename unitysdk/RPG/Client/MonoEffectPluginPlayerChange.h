#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x19135800)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x19135460)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_8E9E3E0D1D6E6E24_OFFSET UNITYSDK_OFFSET(0x19135580)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19135850)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPlayerChange_TypeDefinitionIndex = 66877;

	class MonoEffectPluginPlayerChange : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Single XScale; // 0x170
		::System::Single YScale; // 0x174
		::System::Single ZScale; // 0x178
		::UnityEngine::Color FresnelColor; // 0x17C
		::UnityEngine::Vector4 FresnelBSI; // 0x18C
		::System::Single FresnelColorStrength; // 0x19C
		::UnityEngine::Vector3 Field_8_6; // 0x1A0
		::UnityEngine::Transform* Field_8_7; // 0x1B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_8_8E9E3E0D1D6E6E24()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_8E9E3E0D1D6E6E24_OFFSET))(this);
		}

		::System::Void Method_8_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_25DEA5C65A602671_OFFSET))(this);
		}
	};
}
