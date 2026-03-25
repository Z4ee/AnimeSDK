#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3AC793AC922B6D20_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xCB41800)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0xCB41650)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xCB41700)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0xCB42FA0)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCB42F50)
#define CLASS_2_3AC793AC922B6D20__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCB41620)
#define CLASS_2_3AC793AC922B6D20__CTOR_OFFSET UNITYSDK_OFFSET(0xCB41610)

inline static constexpr unsigned int Class_2_3AC793AC922B6D20_TypeDefinitionIndex = 56918;

class Class_2_3AC793AC922B6D20 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20_METHOD_2_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_3AC793AC922B6D20_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
