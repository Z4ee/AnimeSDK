#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x9CCC230)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x9CCD240)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x9CCC880)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x9CCD160)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x9CCD2C0)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9CCD230)
#define RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9CCD200)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDirectionDissolve_TypeDefinitionIndex = 57276;

	class MonoEffectPluginDirectionDissolve : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDissolve; // 0x168
		::UnityEngine::Transform* DissolveTargetPlane; // 0x170
		::System::Single DissolveOutlineSize1; // 0x178
		::System::Single DissolveOutlineSize2; // 0x17C
		::System::Single DissolveOutlineEmission; // 0x180
		::UnityEngine::Color DissolveOutlineColor1; // 0x184
		::UnityEngine::Color DissolveOutlineColor2; // 0x194
		::UnityEngine::Vector2 DissolveOutlineSmoothStep; // 0x1A4
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* Field_8_8; // 0x1B0

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

		::System::Void Method_8_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_8_F4ADC37B63F4E9EF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDIRECTIONDISSOLVE_METHOD_8_F4ADC37B63F4E9EF_OFFSET))(this);
		}
	};
}
