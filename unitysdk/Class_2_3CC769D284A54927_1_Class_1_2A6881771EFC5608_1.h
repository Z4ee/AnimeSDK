#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_1_Class_1_0DFB2C0A6BD54BBA;

#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_1_METHOD_1_3855628F76860199_OFFSET UNITYSDK_OFFSET(0xF1FEE40)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF1FD0C0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_1_TypeDefinitionIndex = 62893;

class Class_2_3CC769D284A54927_1_Class_1_2A6881771EFC5608_1 : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1_Class_1_0DFB2C0A6BD54BBA* Field_1_7; // 0x10
	::MoleMole::FishCameraConfig Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_1__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_3855628F76860199()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_2A6881771EFC5608_1_METHOD_1_3855628F76860199_OFFSET))(this);
	}
};
