#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_24F60EA0D4DCCDF0.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_0E2DEFE2B11A9C71;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x132A1840)
#define CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x132A1900)
#define CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702__CTOR_OFFSET UNITYSDK_OFFSET(0x132A1830)

inline static constexpr unsigned int Class_1_0E2DEFE2B11A9C71_Class_1_B5FB665F93B5A702_TypeDefinitionIndex = 73243;

class Class_1_0E2DEFE2B11A9C71_Class_1_B5FB665F93B5A702 : public ::System::Object
{
public:
	::Class_1_0E2DEFE2B11A9C71* Field_1_0; // 0x10
	::Enum_3_24F60EA0D4DCCDF0 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E2DEFE2B11A9C71_CLASS_1_B5FB665F93B5A702_METHOD_1_1904421C06532BF0_OFFSET))(this);
	}
};
