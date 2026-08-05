#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DynamicBoneV2_FreezeAxis.h"
#include "unitysdk/DynamicBoneV2_UpdateMode.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define DYNAMICBONEV2_UPDATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5F1080)

inline static constexpr unsigned int DynamicBoneV2_UpdateConfig_TypeDefinitionIndex = 35291;

class DynamicBoneV2_UpdateConfig : public ::System::Object
{
public:
	::System::Single m_UpdateRate; // 0x10
	::DynamicBoneV2_UpdateMode m_UpdateMode; // 0x14
	::DynamicBoneV2_FreezeAxis m_FreezeAxis; // 0x18
	::System::Boolean m_DistantDisable; // 0x1C
	::UnityEngine::Transform* m_ReferenceObject; // 0x20
	::System::Single m_DistanceToObject; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_UPDATECONFIG__CTOR_OFFSET))(this);
	}
};
