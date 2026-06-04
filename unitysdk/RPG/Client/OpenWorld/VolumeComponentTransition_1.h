#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_179.h"

class Class_1_8F713D8ADA87F44A;

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeComponentTransition_1_TypeDefinitionIndex = 69110;

	template <typename T>
	class VolumeComponentTransition_1 : public ::Class_1_43BD383C98B4C0C5_179
	{
	public:
		T _Last; // 0x0
		T _Target; // 0x0
		T _Result; // 0x0
		::System::Single InterpTimestamp; // 0x0
		::System::Single InterpTime; // 0x0
		::System::Boolean _Dirty; // 0x0
		::System::Single _LastInterpFactor; // 0x0
	};
}
