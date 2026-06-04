#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_BLOOMSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA1F70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BloomStage_TypeDefinitionIndex = 35461;

	class BloomStage : public ::System::Object
	{
	public:
		::System::Int32 KernelSize; // 0x10
		::System::Single KernelSigma; // 0x14
		::System::Single LayerIntensity; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_BLOOMSTAGE__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
