#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x11B368F0)

inline static constexpr unsigned int Class_2_F6E7E959625A0CB5_TypeDefinitionIndex = 56695;

class Class_2_F6E7E959625A0CB5 : public ::Class_1_83665B095F1535B5_1
{
public:
	::System::Int32 Field_2_0; // 0x18
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_2_5; // 0x1C
	::System::Single Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x24
	::System::Single Field_2_1; // 0x28
	::UnityEngine::Vector3 Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET))(this);
	}
};
