#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_A27C3E06CB3501A8;
namespace MoleMole::Battle { class Entity; }
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x123DD050)
#define CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612_METHOD_1_AA18621D12E9FC02_OFFSET UNITYSDK_OFFSET(0x123DCF90)
#define CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612__CTOR_OFFSET UNITYSDK_OFFSET(0x123DCF80)

inline static constexpr unsigned int Class_1_A27C3E06CB3501A8_Class_1_E5F952E77144E612_TypeDefinitionIndex = 65537;

class Class_1_A27C3E06CB3501A8_Class_1_E5F952E77144E612 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_1; // 0x10
	::Class_1_A27C3E06CB3501A8* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_AA18621D12E9FC02()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612_METHOD_1_AA18621D12E9FC02_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_A27C3E06CB3501A8_CLASS_1_E5F952E77144E612_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}
};
