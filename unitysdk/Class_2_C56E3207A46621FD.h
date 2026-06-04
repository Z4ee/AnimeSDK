#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraBlendConfig; }

#define CLASS_2_C56E3207A46621FD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141873E0)
#define CLASS_2_C56E3207A46621FD_METHOD_2_4E07D534917F7154_OFFSET UNITYSDK_OFFSET(0x14187590)
#define CLASS_2_C56E3207A46621FD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14187420)
#define CLASS_2_C56E3207A46621FD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14187690)
#define CLASS_2_C56E3207A46621FD_TICK_OFFSET UNITYSDK_OFFSET(0x141876E0)
#define CLASS_2_C56E3207A46621FD__CTOR_OFFSET UNITYSDK_OFFSET(0x141873D0)

inline static constexpr unsigned int Class_2_C56E3207A46621FD_TypeDefinitionIndex = 52113;

class Class_2_C56E3207A46621FD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VCameraBlendConfig* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4E07D534917F7154(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraBlendConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_2_C56E3207A46621FD_METHOD_2_4E07D534917F7154_OFFSET))(this, a1, a2, a3);
	}
};
