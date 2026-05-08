#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A097505A5A1A069.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_0F6476F86DD5E333;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }

#define CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702_METHOD_1_0846D1EBB7741623_OFFSET UNITYSDK_OFFSET(0x11E6CF90)
#define CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702_METHOD_1_1904421C06532BF0_OFFSET UNITYSDK_OFFSET(0x11E6CEE0)
#define CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702__CTOR_OFFSET UNITYSDK_OFFSET(0x11E6B5D0)

inline static constexpr unsigned int Class_1_0F6476F86DD5E333_Class_1_B5FB665F93B5A702_TypeDefinitionIndex = 55757;

class Class_1_0F6476F86DD5E333_Class_1_B5FB665F93B5A702 : public ::System::Object
{
public:
	::Class_1_0F6476F86DD5E333* Field_1_1; // 0x10
	::Enum_3_4A097505A5A1A069 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* Method_1_1904421C06532BF0()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702_METHOD_1_1904421C06532BF0_OFFSET))(this);
	}

	::System::Void Method_1_0846D1EBB7741623(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + CLASS_1_0F6476F86DD5E333_CLASS_1_B5FB665F93B5A702_METHOD_1_0846D1EBB7741623_OFFSET))(this, a1);
	}
};
