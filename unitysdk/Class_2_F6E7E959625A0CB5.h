#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_2.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x13B73BE0)

inline static constexpr unsigned int Class_2_F6E7E959625A0CB5_TypeDefinitionIndex = 63740;

class Class_2_F6E7E959625A0CB5 : public ::Class_1_83665B095F1535B5_2
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Boolean Field_2_5; // 0x1C
	::UnityEngine::NAPRenderPipeline0::DistortionQueueType Field_2_4; // 0x20
	::UnityEngine::Vector3 Field_2_7; // 0x24
	::System::Int32 Field_2_1; // 0x30
	::System::Single Field_2_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6E7E959625A0CB5__CTOR_OFFSET))(this);
	}
};
