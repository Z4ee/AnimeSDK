#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_89C70488A8D240C1_CLASS_1_851D20A69D848BB9_METHOD_1_EFC710EBABFCE318_OFFSET UNITYSDK_OFFSET(0xEBF9ED0)
#define CLASS_1_89C70488A8D240C1_CLASS_1_851D20A69D848BB9__CTOR_OFFSET UNITYSDK_OFFSET(0xEBF9EC0)

inline static constexpr unsigned int Class_1_89C70488A8D240C1_Class_1_851D20A69D848BB9_TypeDefinitionIndex = 44523;

class Class_1_89C70488A8D240C1_Class_1_851D20A69D848BB9 : public ::System::Object
{
public:
	::UnityEngine::LayerMask Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_CLASS_1_851D20A69D848BB9__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_EFC710EBABFCE318()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89C70488A8D240C1_CLASS_1_851D20A69D848BB9_METHOD_1_EFC710EBABFCE318_OFFSET))(this);
	}
};
