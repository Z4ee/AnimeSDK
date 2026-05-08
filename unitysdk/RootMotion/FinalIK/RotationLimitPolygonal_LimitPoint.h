#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3A8C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int RotationLimitPolygonal_LimitPoint_TypeDefinitionIndex = 36682;

	class RotationLimitPolygonal_LimitPoint : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 point; // 0x10
		::System::Single tangentWeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_ROTATIONLIMITPOLYGONAL_LIMITPOINT__CTOR_OFFSET))(this);
		}
	};
}
