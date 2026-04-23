#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraConfigChange; }
namespace RPG::GameCore { class VCameraDOFFocusEntity; }

#define CLASS_2_E256D51739E8A45D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x950AC40)
#define CLASS_2_E256D51739E8A45D_METHOD_2_0189701ED798D8FD_OFFSET UNITYSDK_OFFSET(0x950C380)
#define CLASS_2_E256D51739E8A45D_METHOD_2_25C8640ECC38F2A1_OFFSET UNITYSDK_OFFSET(0x950B040)
#define CLASS_2_E256D51739E8A45D_METHOD_2_2737B3B3A9A2BD76_OFFSET UNITYSDK_OFFSET(0x950C4C0)
#define CLASS_2_E256D51739E8A45D_METHOD_2_2C102AF9C42D7F86_OFFSET UNITYSDK_OFFSET(0x950C420)
#define CLASS_2_E256D51739E8A45D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x950CFA0)
#define CLASS_2_E256D51739E8A45D_METHOD_2_7A8A4BC25DA6A18D_OFFSET UNITYSDK_OFFSET(0x950C5A0)
#define CLASS_2_E256D51739E8A45D_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x950A940)
#define CLASS_2_E256D51739E8A45D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x950AC80)
#define CLASS_2_E256D51739E8A45D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x950C2D0)
#define CLASS_2_E256D51739E8A45D_TICK_OFFSET UNITYSDK_OFFSET(0x950C320)
#define CLASS_2_E256D51739E8A45D__CTOR_OFFSET UNITYSDK_OFFSET(0x950A920)

inline static constexpr unsigned int Class_2_E256D51739E8A45D_TypeDefinitionIndex = 51446;

class Class_2_E256D51739E8A45D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VCameraConfigChange* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::VCameraConfig* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_2_25C8640ECC38F2A1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraConfig* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_25C8640ECC38F2A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0189701ED798D8FD(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_0189701ED798D8FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A8A4BC25DA6A18D(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_7A8A4BC25DA6A18D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C102AF9C42D7F86(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_2C102AF9C42D7F86_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2737B3B3A9A2BD76(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraDOFFocusEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraDOFFocusEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_2737B3B3A9A2BD76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E256D51739E8A45D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
