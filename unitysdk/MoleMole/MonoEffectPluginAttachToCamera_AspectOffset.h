#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_AspectWH.h"
#include "unitysdk/MoleMole/MonoEffectPluginAttachToCamera_FovOffset.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTOFFSET_GET_SUBISSHOWADDFOVMINMAX_OFFSET UNITYSDK_OFFSET(0x3F06C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_AspectOffset_TypeDefinitionIndex = 80254;

	struct alignas(4) MonoEffectPluginAttachToCamera_AspectOffset
	{
		::MoleMole::MonoEffectPluginAttachToCamera_AspectWH aspect; // 0x10
		::UnityEngine::Vector3 attachOffset; // 0x1C
		::System::Boolean SubIsOpenAddFovScale; // 0x28
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset addMinFovAttachOffset; // 0x2C
		::MoleMole::MonoEffectPluginAttachToCamera_FovOffset addMaxFovAttachOffset; // 0x3C

		::System::Boolean get_SubIsShowAddFovMinMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTOFFSET_GET_SUBISSHOWADDFOVMINMAX_OFFSET))(this);
		}
	};
}
