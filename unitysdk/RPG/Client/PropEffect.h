#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EmissionMode.h"
#include "unitysdk/RPG/Client/MaterialBlockEffectBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROPEFFECT_METHOD_7_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xAF1D440)
#define RPG_CLIENT_PROPEFFECT_METHOD_7_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xAF1CB30)
#define RPG_CLIENT_PROPEFFECT_METHOD_7_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0xAF1D300)
#define RPG_CLIENT_PROPEFFECT_METHOD_7_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xAF1D210)
#define RPG_CLIENT_PROPEFFECT_METHOD_7_D0EAB95EE152A65F_OFFSET UNITYSDK_OFFSET(0xAF1CF90)
#define RPG_CLIENT_PROPEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAF1D350)
#define RPG_CLIENT_PROPEFFECT_RESET_OFFSET UNITYSDK_OFFSET(0xAF1D2B0)
#define RPG_CLIENT_PROPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xAF1D400)
#define RPG_CLIENT_PROPEFFECT___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0xAF1D430)

namespace RPG::Client
{
	inline static constexpr unsigned int PropEffect_TypeDefinitionIndex = 65194;

	class PropEffect : public ::RPG::Client::MaterialBlockEffectBase
	{
	public:
		::UnityEngine::Color TargetEmissionColor; // 0x60
		::UnityEngine::Color TargetEmissionColorNight; // 0x70
		::UnityEngine::Color TargetEmissionColor1; // 0x80
		::UnityEngine::Color TargetEmissionColor2; // 0x90
		::UnityEngine::Color TargetEmissionColor3; // 0xA0
		::System::Boolean KeyEmissionColorIsOn; // 0xB0
		::System::Single KeyEmissionColorLerpVal; // 0xB4
		::System::Single KeyEmissionColorNightLerpVal; // 0xB8
		::System::Single KeyEmissionIntensity; // 0xBC
		::System::Single KeyEmissionIntensityNight; // 0xC0
		::RPG::Client::EmissionMode CurrentEmissionMode; // 0xC4
		::System::Single KeyEmissionColorLerpVal0; // 0xC8
		::System::Single KeyEmissionColorLerpVal1; // 0xCC
		::System::Single KeyEmissionColorLerpVal2; // 0xD0
		::System::Single KeyEmissionColorLerpVal3; // 0xD4
		::System::Boolean KeyEmissionRimFromNormal; // 0xD8
		::UnityEngine::Color FresnelColor; // 0xDC
		::UnityEngine::Vector4 FresnelBSI; // 0xEC
		::System::Single FresnelColorStrength; // 0xFC
		::System::Boolean Field_7_19; // 0x100
		::System::Boolean KeyDissolveIsOn; // 0x101
		::System::Single KeyDissolveBase; // 0x104
		::System::Single KeyAlphaDistance; // 0x108
		::System::Single KeyAlpha; // 0x10C
		::System::Boolean KeyTillingOffset; // 0x110
		::UnityEngine::Vector4 TillingOffset; // 0x114
		::UnityEngine::Animator* Field_7_26; // 0x128
		::Il2CppArray<::RPG::Client::CommonEffectMaterialBlockOne*>* CommonMaterialBlocks; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_METHOD_7_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_7_D0EAB95EE152A65F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_METHOD_7_D0EAB95EE152A65F_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_RESET_OFFSET))(this);
		}

		::System::Void Method_7_82E992240300FB30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_METHOD_7_82E992240300FB30_OFFSET))(this);
		}

		::System::Boolean Method_7_8F059A365E90744C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_METHOD_7_8F059A365E90744C_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT___IFIXBASEPROXY_RESET_OFFSET))(this);
		}

		::System::Void Method_7_06330CD58CB602B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPEFFECT_METHOD_7_06330CD58CB602B6_OFFSET))(this);
		}
	};
}
