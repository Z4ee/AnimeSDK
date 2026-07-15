#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_187.h"

class Class_1_A335CFE48265E251;

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeComponentTransition_1_TypeDefinitionIndex = 70629;

	template <typename T>
	class VolumeComponentTransition_1 : public ::Class_1_43BD383C98B4C0C5_187
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
