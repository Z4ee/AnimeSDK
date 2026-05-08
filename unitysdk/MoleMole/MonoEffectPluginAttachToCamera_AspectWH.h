#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_MINASPECT_OFFSET UNITYSDK_OFFSET(0x7020B0)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x702050)
#define MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_METHOD_2_B31A23B75E1D102F_OFFSET UNITYSDK_OFFSET(0x10BCF720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginAttachToCamera_AspectWH_TypeDefinitionIndex = 80259;

	struct alignas(4) MonoEffectPluginAttachToCamera_AspectWH
	{
		::System::Int32 W; // 0x10
		::System::Int32 H; // 0x14
		::System::Boolean IsAlign9; // 0x18

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_RATIO_OFFSET))(this);
		}

		::System::String* get_MinAspect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_GET_MINASPECT_OFFSET))(this);
		}

		static ::System::Int32 Method_2_B31A23B75E1D102F(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINATTACHTOCAMERA_ASPECTWH_METHOD_2_B31A23B75E1D102F_OFFSET))(a1, a2);
		}
	};
}
