#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace UnityEngine { class Transform; }

#define CLASS_2_3AC793AC922B6D20_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xBEE19C0)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0xBEE1810)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xBEE18C0)
#define CLASS_2_3AC793AC922B6D20_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEE3110)
#define CLASS_2_3AC793AC922B6D20__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBEE16B0)
#define CLASS_2_3AC793AC922B6D20__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE16A0)

inline static constexpr unsigned int Class_2_3AC793AC922B6D20_TypeDefinitionIndex = 69587;

class Class_2_3AC793AC922B6D20 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::UnityEngine::Transform* EDCNDIHCEIJ; // 0x38

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
};
