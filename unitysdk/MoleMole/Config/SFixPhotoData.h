#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SFixPhotoData_TypeDefinitionIndex = 69709;

	struct alignas(4) SFixPhotoData
	{
		::System::Int32 ItemConfigId; // 0x10
		::UnityEngine::Vector3 OffsetPos; // 0x14
		::System::Single RotateAngle; // 0x20
		::System::Int32 Layer; // 0x24
	};
}
