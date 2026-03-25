#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/IInterpolation.h"

#define SPINE_POW_APPLY_OFFSET UNITYSDK_OFFSET(0x183A6B60)
#define SPINE_POW_GET_POWER_OFFSET UNITYSDK_OFFSET(0x183A6B40)
#define SPINE_POW_SET_POWER_OFFSET UNITYSDK_OFFSET(0x183A6B50)
#define SPINE_POW__CTOR_OFFSET UNITYSDK_OFFSET(0x1839E440)

namespace Spine
{
	inline static constexpr unsigned int Pow_TypeDefinitionIndex = 30720;

	class Pow : public ::Spine::IInterpolation
	{
	public:
		::System::Single _Power_k__BackingField; // 0x10

		::System::Void _ctor(::System::Single power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW__CTOR_OFFSET))(this, power);
		}

		::System::Single get_Power()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_POW_GET_POWER_OFFSET))(this);
		}

		::System::Void set_Power(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW_SET_POWER_OFFSET))(this, value);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POW_APPLY_OFFSET))(this, a);
		}
	};
}
