#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_3_2138DB6150D0CA1A;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace PipelineCamera::CameraSequence { class CoreDataBindingResolver; }
namespace PipelineCamera::CameraSequence { class CoreDataCollection; }
namespace System { class Action; }

#define CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17F34480)
#define CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C_METHOD_1_8D2F1C44EF516F17_OFFSET UNITYSDK_OFFSET(0x17F344F0)
#define CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F34470)

inline static constexpr unsigned int Class_3_2138DB6150D0CA1A_Class_1_2B028A9A6FB1BF5C_TypeDefinitionIndex = 81509;

class Class_3_2138DB6150D0CA1A_Class_1_2B028A9A6FB1BF5C : public ::System::Object
{
public:
	::Class_3_2138DB6150D0CA1A* Field_1_2; // 0x10
	::PipelineCamera::CameraSequence::CoreDataCollection* Field_1_1; // 0x18
	::System::Action* Field_1_6; // 0x20
	::PipelineCamera::CameraSequence::CoreDataBindingResolver* Field_1_0; // 0x28
	::MoleMole::Config::ConfigLevelResultPerforms_LevelFailedCameraSequenceConfig Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_8D2F1C44EF516F17(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_3_2138DB6150D0CA1A_CLASS_1_2B028A9A6FB1BF5C_METHOD_1_8D2F1C44EF516F17_OFFSET))(this, a1);
	}
};
