#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_0E2DEFE2B11A9C71_CLASS_1_D9A9D264D97CB293_METHOD_1_EFC710EBABFCE318_OFFSET UNITYSDK_OFFSET(0x178C9F80)
#define CLASS_1_0E2DEFE2B11A9C71_CLASS_1_D9A9D264D97CB293__CTOR_OFFSET UNITYSDK_OFFSET(0x178C9F70)

inline static constexpr unsigned int Class_1_0E2DEFE2B11A9C71_Class_1_D9A9D264D97CB293_TypeDefinitionIndex = 73241;

class Class_1_0E2DEFE2B11A9C71_Class_1_D9A9D264D97CB293 : public ::System::Object
{
public:
	::UnityEngine::LayerMask Field_1_2; // 0x10
	::System::Single Field_1_0; // 0x14
	::System::Single Field_1_1; // 0x18
	::Enum_3_24F60EA0D4DCCDF0 Field_1_3; // 0x1C
	::System::Single Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_CLASS_1_D9A9D264D97CB293__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_EFC710EBABFCE318()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_CLASS_1_D9A9D264D97CB293_METHOD_1_EFC710EBABFCE318_OFFSET))(this);
	}
};
