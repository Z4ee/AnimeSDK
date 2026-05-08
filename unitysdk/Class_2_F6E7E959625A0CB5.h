#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x1170A350)

inline static constexpr unsigned int Class_2_F6E7E959625A0CB5_TypeDefinitionIndex = 47393;

class Class_2_F6E7E959625A0CB5 : public ::Class_1_83665B095F1535B5_2
{
public:
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_2_5; // 0x24
	::System::Boolean Field_2_4; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET))(this);
	}
};
