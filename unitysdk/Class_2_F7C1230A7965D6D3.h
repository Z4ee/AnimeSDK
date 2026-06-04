#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_F7C1230A7965D6D3_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x14157970)
#define CLASS_2_F7C1230A7965D6D3_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x141578E0)
#define CLASS_2_F7C1230A7965D6D3_METHOD_2_D58849E1895DD394_OFFSET UNITYSDK_OFFSET(0x141577B0)
#define CLASS_2_F7C1230A7965D6D3__CTOR_OFFSET UNITYSDK_OFFSET(0x14157780)

inline static constexpr unsigned int Class_2_F7C1230A7965D6D3_TypeDefinitionIndex = 65093;

class Class_2_F7C1230A7965D6D3 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Cinemachine::CinemachineVirtualCameraBase* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_F7C1230A7965D6D3__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_D58849E1895DD394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7C1230A7965D6D3_METHOD_2_D58849E1895DD394_OFFSET))(this);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7C1230A7965D6D3_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7C1230A7965D6D3_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
