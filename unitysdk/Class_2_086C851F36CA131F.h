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

#define CLASS_2_086C851F36CA131F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179A7E80)
#define CLASS_2_086C851F36CA131F_METHOD_2_2737B3B3A9A2BD76_OFFSET UNITYSDK_OFFSET(0x179A9B60)
#define CLASS_2_086C851F36CA131F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179A9F20)
#define CLASS_2_086C851F36CA131F_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x179A7B40)
#define CLASS_2_086C851F36CA131F_METHOD_2_B356C0247E96587B_OFFSET UNITYSDK_OFFSET(0x179A82E0)
#define CLASS_2_086C851F36CA131F_METHOD_2_B40973008148C2E3_OFFSET UNITYSDK_OFFSET(0x179A9AC0)
#define CLASS_2_086C851F36CA131F_METHOD_2_ED57348D39079576_OFFSET UNITYSDK_OFFSET(0x179A9C40)
#define CLASS_2_086C851F36CA131F_METHOD_2_EEFBD10919B3BD61_OFFSET UNITYSDK_OFFSET(0x179A9A20)
#define CLASS_2_086C851F36CA131F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179A7EC0)
#define CLASS_2_086C851F36CA131F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179A9970)
#define CLASS_2_086C851F36CA131F_TICK_OFFSET UNITYSDK_OFFSET(0x179A99C0)
#define CLASS_2_086C851F36CA131F__CTOR_OFFSET UNITYSDK_OFFSET(0x179A7B20)

inline static constexpr unsigned int Class_2_086C851F36CA131F_TypeDefinitionIndex = 55985;

class Class_2_086C851F36CA131F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VCameraConfigChange* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::VCameraConfig* GGBGBANPMFG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_2_B356C0247E96587B(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraConfig* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_B356C0247E96587B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EEFBD10919B3BD61(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_EEFBD10919B3BD61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ED57348D39079576(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_ED57348D39079576_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B40973008148C2E3(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_B40973008148C2E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2737B3B3A9A2BD76(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraDOFFocusEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraDOFFocusEntity*))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_2737B3B3A9A2BD76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_086C851F36CA131F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
