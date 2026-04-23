#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA99BAF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA99B810)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA99B6F0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA99BA70)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xA99BB50)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA99BAE0)
#define RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99BAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPlayerChange_TypeDefinitionIndex = 64542;

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

		::System::Void Method_8_218124418542E081()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_218124418542E081_OFFSET))(this);
		}

		::System::Void Method_8_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPLAYERCHANGE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
