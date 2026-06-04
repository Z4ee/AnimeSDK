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

#define CLASS_2_EFB31D576AFB2C7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136D0920)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_2737B3B3A9A2BD76_OFFSET UNITYSDK_OFFSET(0x136D2420)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x136D0630)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136D2710)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_48902F308D0CA90F_OFFSET UNITYSDK_OFFSET(0x136D2500)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_A07AE26DD451310A_OFFSET UNITYSDK_OFFSET(0x136D2380)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_B4313B543DF47CF2_OFFSET UNITYSDK_OFFSET(0x136D0D10)
#define CLASS_2_EFB31D576AFB2C7A_METHOD_2_CC45519FD9246AB8_OFFSET UNITYSDK_OFFSET(0x136D22E0)
#define CLASS_2_EFB31D576AFB2C7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136D0960)
#define CLASS_2_EFB31D576AFB2C7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136D2230)
#define CLASS_2_EFB31D576AFB2C7A_TICK_OFFSET UNITYSDK_OFFSET(0x136D2280)
#define CLASS_2_EFB31D576AFB2C7A__CTOR_OFFSET UNITYSDK_OFFSET(0x136D0610)

inline static constexpr unsigned int Class_2_EFB31D576AFB2C7A_TypeDefinitionIndex = 52114;

class Class_2_EFB31D576AFB2C7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VCameraConfig* Field_2_0; // 0x18
	::RPG::GameCore::VCameraConfigChange* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfigChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfigChange*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> Method_2_B4313B543DF47CF2(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraConfig* a3)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_B4313B543DF47CF2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CC45519FD9246AB8(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_CC45519FD9246AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_48902F308D0CA90F(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_48902F308D0CA90F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A07AE26DD451310A(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_A07AE26DD451310A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2737B3B3A9A2BD76(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraDOFFocusEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraDOFFocusEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_2737B3B3A9A2BD76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EFB31D576AFB2C7A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
