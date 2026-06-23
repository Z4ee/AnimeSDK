#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Pow.h"

#define SPINE_POWOUT_APPLY_OFFSET UNITYSDK_OFFSET(0x1E7B53A0)
#define SPINE_POWOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B5330)

namespace Spine
{
	inline static constexpr unsigned int PowOut_TypeDefinitionIndex = 32884;

	class PowOut : public ::Spine::Pow
	{
	public:
		::System::Void _ctor(::System::Single power)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POWOUT__CTOR_OFFSET))(this, power);
		}

		::System::Single Apply(::System::Single a)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POWOUT_APPLY_OFFSET))(this, a);
		}
	};
}
