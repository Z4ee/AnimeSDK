#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Pow.h"

#define SPINE_POWOUT_APPLY_OFFSET UNITYSDK_OFFSET(0x14784300)
#define SPINE_POWOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1477C510)

namespace Spine
{
	inline static constexpr unsigned int PowOut_TypeDefinitionIndex = 37523;

	class PowOut : public ::Spine::Pow
	{
	public:
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POWOUT__CTOR_OFFSET))(this, a1);
		}

		::System::Single Apply(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_POWOUT_APPLY_OFFSET))(this, a1);
		}
	};
}
