#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraBlendConfig; }

#define CLASS_2_4118F0C63931277E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B82490)
#define CLASS_2_4118F0C63931277E_METHOD_2_42D95464172C9267_OFFSET UNITYSDK_OFFSET(0x18B82640)
#define CLASS_2_4118F0C63931277E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B824D0)
#define CLASS_2_4118F0C63931277E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B827C0)
#define CLASS_2_4118F0C63931277E_TICK_OFFSET UNITYSDK_OFFSET(0x18B82810)
#define CLASS_2_4118F0C63931277E__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82480)

inline static constexpr unsigned int Class_2_4118F0C63931277E_TypeDefinitionIndex = 55984;

class Class_2_4118F0C63931277E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::VCameraBlendConfig* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraBlendConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_42D95464172C9267(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::GameCore::VCameraBlendConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraBlendConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4118F0C63931277E_METHOD_2_42D95464172C9267_OFFSET))(this, a1, a2, a3);
	}
};
