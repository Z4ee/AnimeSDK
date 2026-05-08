#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"

class Class_1_3C7A2C6347C7498B;
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_1_3C7A2C6347C7498B_CLASS_1_FDD701DC064DA68F_METHOD_1_B0827FA443C6980E_OFFSET UNITYSDK_OFFSET(0x10386CD0)
#define CLASS_1_3C7A2C6347C7498B_CLASS_1_FDD701DC064DA68F__CTOR_OFFSET UNITYSDK_OFFSET(0x10386CC0)

inline static constexpr unsigned int Class_1_3C7A2C6347C7498B_Class_1_FDD701DC064DA68F_TypeDefinitionIndex = 75051;

class Class_1_3C7A2C6347C7498B_Class_1_FDD701DC064DA68F : public ::System::Object
{
public:
	::Nap::NapECS::EcsWorld* Field_1_0; // 0x10
	::Class_1_3C7A2C6347C7498B* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_FDD701DC064DA68F__CTOR_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData Method_1_B0827FA443C6980E()
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C7A2C6347C7498B_CLASS_1_FDD701DC064DA68F_METHOD_1_B0827FA443C6980E_OFFSET))(this);
	}
};
