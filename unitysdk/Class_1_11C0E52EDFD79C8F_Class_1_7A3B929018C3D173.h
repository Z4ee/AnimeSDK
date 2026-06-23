#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/Struct_2_B8984AF1CBDAAA93.h"
#include "unitysdk/System/Object.h"

class Class_2_D39C2FCEF4D4B922;
namespace MoleMole::Cameras { class CameraDataAccessor; }

#define CLASS_1_11C0E52EDFD79C8F_CLASS_1_7A3B929018C3D173_METHOD_1_A9B7569771D39B2D_OFFSET UNITYSDK_OFFSET(0x1791C750)
#define CLASS_1_11C0E52EDFD79C8F_CLASS_1_7A3B929018C3D173__CTOR_OFFSET UNITYSDK_OFFSET(0x1791C740)

inline static constexpr unsigned int Class_1_11C0E52EDFD79C8F_Class_1_7A3B929018C3D173_TypeDefinitionIndex = 71958;

class Class_1_11C0E52EDFD79C8F_Class_1_7A3B929018C3D173 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraDataAccessor* Field_1_0; // 0x10
	::Class_2_D39C2FCEF4D4B922* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_CLASS_1_7A3B929018C3D173__CTOR_OFFSET))(this);
	}

	::PipelineCamera::FinalCameraData Method_1_A9B7569771D39B2D(::Struct_2_B8984AF1CBDAAA93 a1)
	{
		return ((::PipelineCamera::FinalCameraData(*)(::PVOID, ::Struct_2_B8984AF1CBDAAA93))((::PBYTE)hIl2Cpp + CLASS_1_11C0E52EDFD79C8F_CLASS_1_7A3B929018C3D173_METHOD_1_A9B7569771D39B2D_OFFSET))(this, a1);
	}
};
