#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_BDB15119DD8FA1AC_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16C7A7C0)
#define CLASS_2_BDB15119DD8FA1AC_METHOD_2_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x16C7A690)
#define CLASS_2_BDB15119DD8FA1AC_METHOD_2_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x16C7A850)
#define CLASS_2_BDB15119DD8FA1AC__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7A530)

inline static constexpr unsigned int Class_2_BDB15119DD8FA1AC_TypeDefinitionIndex = 66498;

class Class_2_BDB15119DD8FA1AC : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_BDB15119DD8FA1AC__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB15119DD8FA1AC_METHOD_2_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Method_2_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB15119DD8FA1AC_METHOD_2_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDB15119DD8FA1AC_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
