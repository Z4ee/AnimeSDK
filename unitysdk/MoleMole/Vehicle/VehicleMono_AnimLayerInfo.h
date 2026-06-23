#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleMono_AnimStateLength.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleMono_AnimLayerInfo_TypeDefinitionIndex = 63215;

	struct alignas(8) VehicleMono_AnimLayerInfo
	{
		::System::Collections::Generic::List_1<::MoleMole::Vehicle::VehicleMono_AnimStateLength>* states; // 0x10
	};
}
