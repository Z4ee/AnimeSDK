#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_VOXELBAKEDGI__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F5300)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VoxelBakedGI_TypeDefinitionIndex = 47858;

	class VoxelBakedGI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOXELBAKEDGI__CTOR_OFFSET))(this);
		}
	};
}
