#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUILightParam_Enum_3_A4BD09A000F0184F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/AddLightMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightUsage.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }

#define MOLEMOLE_CONFIGUILIGHTPARAM_GET_CHARTOONNORMAL_OFFSET UNITYSDK_OFFSET(0x16B56840)
#define MOLEMOLE_CONFIGUILIGHTPARAM_SET_CHARTOONNORMAL_OFFSET UNITYSDK_OFFSET(0x16B56850)
#define MOLEMOLE_CONFIGUILIGHTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16B568D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUILightParam_TypeDefinitionIndex = 70122;

	class ConfigUILightParam : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10
		::UnityEngine::LightType UseLightType; // 0x18
		::UnityEngine::Vector3 Direction; // 0x1C
		::UnityEngine::Vector3 OffsetPos; // 0x28
		::System::Single Range; // 0x34
		::UnityEngine::Color Color; // 0x38
		::System::Single Intensity; // 0x48
		::MoleMole::ConfigUILightParam_Enum_3_A4BD09A000F0184F AttenuationType; // 0x4C
		::UnityEngine::Color AvatarColor; // 0x50
		::System::Single AvatarIntensity; // 0x60
		::UnityEngine::Rendering::Universal::AddLightMode AvatarLightMode; // 0x64
		::System::Single BlendWeight; // 0x68
		::System::Single LockAngle; // 0x6C
		::System::Single _charToonNormal; // 0x70
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightUsage LightUsage; // 0x74
		::UnityEngine::NAPRenderPipeline0::ColorParameter* Ambient; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUILIGHTPARAM__CTOR_OFFSET))(this);
		}

		::System::Single get_CharToonNormal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUILIGHTPARAM_GET_CHARTOONNORMAL_OFFSET))(this);
		}

		::System::Void set_CharToonNormal(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUILIGHTPARAM_SET_CHARTOONNORMAL_OFFSET))(this, a1);
		}
	};
}
