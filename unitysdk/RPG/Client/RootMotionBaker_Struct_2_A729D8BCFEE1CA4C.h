#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBaker_Struct_2_A729D8BCFEE1CA4C_TypeDefinitionIndex = 65747;

	struct alignas(8) RootMotionBaker_Struct_2_A729D8BCFEE1CA4C
	{
		::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve Field_2_0; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x28
	};
}
