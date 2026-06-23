#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50_1;

#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_6_METHOD_1_3855628F76860199_OFFSET UNITYSDK_OFFSET(0x138F3EE0)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_6__CTOR_OFFSET UNITYSDK_OFFSET(0x138F3ED0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_6_TypeDefinitionIndex = 86305;

class Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_6 : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50_1* Field_1_1; // 0x10
	::MoleMole::FishCameraConfig Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_6__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_3855628F76860199()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_6_METHOD_1_3855628F76860199_OFFSET))(this);
	}
};
