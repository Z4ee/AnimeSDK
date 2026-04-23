#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA98F370)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0xA98E360)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0xA98E9B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xA98F290)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xA98F3D0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xA98F360)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA98F330)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDirectionDissolve_TypeDefinitionIndex = 64530;

	class MonoEffectPluginDirectionDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDissolve; // 0x170
		::UnityEngine::Transform* DissolveTargetPlane; // 0x178
		::System::Single DissolveOutlineSize1; // 0x180
		::System::Single DissolveOutlineSize2; // 0x184
		::System::Single DissolveOutlineEmission; // 0x188
		::UnityEngine::Color DissolveOutlineColor1; // 0x18C
		::UnityEngine::Color DissolveOutlineColor2; // 0x19C
		::UnityEngine::Vector2 DissolveOutlineSmoothStep; // 0x1AC
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_8; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_8_43D99DDD80B1E30C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET))(this);
		}

		::System::Void Method_8_84B92802FDAFF6C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_84B92802FDAFF6C8_OFFSET))(this);
		}

		::System::Void Method_8_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void Method_8_F5447CD65612575D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET))(this);
		}

		::System::Void Method_8_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_092CD57850778EFC_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
