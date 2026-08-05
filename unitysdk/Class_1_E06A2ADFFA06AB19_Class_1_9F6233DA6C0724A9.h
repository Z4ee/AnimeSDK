#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2BD1943B012482C0.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_E06A2ADFFA06AB19;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9_METHOD_1_0E09DFE2597FC6BF_OFFSET UNITYSDK_OFFSET(0x10F62520)
#define CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9_METHOD_1_A9B2EF3C627CFC34_OFFSET UNITYSDK_OFFSET(0x10F623C0)
#define CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9__CTOR_OFFSET UNITYSDK_OFFSET(0x10F623B0)

inline static constexpr unsigned int Class_1_E06A2ADFFA06AB19_Class_1_9F6233DA6C0724A9_TypeDefinitionIndex = 49327;

class Class_1_E06A2ADFFA06AB19_Class_1_9F6233DA6C0724A9 : public ::System::Object
{
public:
	::Class_1_E06A2ADFFA06AB19* Field_1_0; // 0x10
	::Enum_3_2BD1943B012482C0 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_A9B2EF3C627CFC34()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9_METHOD_1_A9B2EF3C627CFC34_OFFSET))(this);
	}

	::System::Void Method_1_0E09DFE2597FC6BF(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_E06A2ADFFA06AB19_CLASS_1_9F6233DA6C0724A9_METHOD_1_0E09DFE2597FC6BF_OFFSET))(this, a1);
	}
};
