#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RBDDESTRUCTION_FRAGMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6EAA70)

namespace RBDDestruction
{
	inline static constexpr unsigned int FragmentData_TypeDefinitionIndex = 29700;

	class FragmentData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 pivot; // 0x10
		::UnityEngine::Vector3 bBoxSize; // 0x1C
		::System::Single crack; // 0x28
		::System::Int32 groupID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_FRAGMENTDATA__CTOR_OFFSET))(this);
		}
	};
}
