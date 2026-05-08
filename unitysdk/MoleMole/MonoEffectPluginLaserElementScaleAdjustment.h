#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace MoleMole { class LaserElementScaleAdjustment_LaserLengthLinear; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOEFFECTPLUGINLASERELEMENTSCALEADJUSTMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E47560)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginLaserElementScaleAdjustment_TypeDefinitionIndex = 47465;

	class MonoEffectPluginLaserElementScaleAdjustment : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::LaserElementScaleAdjustment_LaserLengthLinear*>* scaleOverride_LaserLengthLinear; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINLASERELEMENTSCALEADJUSTMENT__CTOR_OFFSET))(this);
		}
	};
}
