#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50;

#define CLASS_2_3CC769D284A54927_1_CLASS_1_9DD7D75FE5248C2C_METHOD_1_20E5F03C6592DEB6_OFFSET UNITYSDK_OFFSET(0x110F7310)
#define CLASS_2_3CC769D284A54927_1_CLASS_1_9DD7D75FE5248C2C__CTOR_OFFSET UNITYSDK_OFFSET(0x110F7300)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Class_1_9DD7D75FE5248C2C_TypeDefinitionIndex = 57660;

class Class_2_3CC769D284A54927_1_Class_1_9DD7D75FE5248C2C : public ::System::Object
{
public:
	::Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50* Field_1_2; // 0x10
	::MoleMole::FishCameraConfig Field_1_1; // 0x18
	::MoleMole::FishCameraConfig Field_1_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_9DD7D75FE5248C2C__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_20E5F03C6592DEB6()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_CLASS_1_9DD7D75FE5248C2C_METHOD_1_20E5F03C6592DEB6_OFFSET))(this);
	}
};
