#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class InitializeModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x8AC7A40)
#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x8AC8030)
#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_9CDDA330CD3329E0_OFFSET UNITYSDK_OFFSET(0x8AC76B0)
#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x8AC80E0)
#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8AC80A0)
#define CLASS_2_C1ED3FA7F84A16DC_METHOD_2_D1C9D812A3FB4E21_OFFSET UNITYSDK_OFFSET(0x8AC77E0)
#define CLASS_2_C1ED3FA7F84A16DC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8AC7680)
#define CLASS_2_C1ED3FA7F84A16DC__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC7670)

inline static constexpr unsigned int Class_2_C1ED3FA7F84A16DC_TypeDefinitionIndex = 56921;

class Class_2_C1ED3FA7F84A16DC : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::RPG::Client::InitializeModuleConfig* Field_2_1; // 0x38
	::System::Single Field_2_2; // 0x40
	::System::Single Field_2_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9CDDA330CD3329E0(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_9CDDA330CD3329E0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_D1C9D812A3FB4E21()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_D1C9D812A3FB4E21_OFFSET))(this);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_C1ED3FA7F84A16DC_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
