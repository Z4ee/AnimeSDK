#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50;

#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_3_METHOD_1_3855628F76860199_OFFSET UNITYSDK_OFFSET(0x134E9340)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_3__CTOR_OFFSET UNITYSDK_OFFSET(0x134E9330)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_3_TypeDefinitionIndex = 57634;

class Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_3 : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50* Field_1_1; // 0x10
	::MoleMole::FishCameraConfig Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_3__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_3855628F76860199()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_3_METHOD_1_3855628F76860199_OFFSET))(this);
	}
};
