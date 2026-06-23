#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMISC_EFFECTMATERIALCONTROLCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x881D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_EffectMaterialControlConfig_TypeDefinitionIndex = 59118;

	struct alignas(8) ConfigMisc_EffectMaterialControlConfig
	{
		::System::Single Duration; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* MaterialFloatProperties; // 0x18

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_EFFECTMATERIALCONTROLCONFIG_GET_ISVALID_OFFSET))(this);
		}
	};
}
