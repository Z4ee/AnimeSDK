#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/NPCCrowd/SpawnRangeConfig.h"

#define NPCCROWD_GENDERSPAWNRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBDEDBD0)

namespace NPCCrowd
{
	inline static constexpr unsigned int GenderSpawnRangeConfig_TypeDefinitionIndex = 43071;

	class GenderSpawnRangeConfig : public ::NPCCrowd::SpawnRangeConfig
	{
	public:
		::ENPCAvatarGender gender; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GENDERSPAWNRANGECONFIG__CTOR_OFFSET))(this);
		}
	};
}
