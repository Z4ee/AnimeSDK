#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class InitializeModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_28281581723C36DF_METHOD_2_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0x16198570)
#define CLASS_2_28281581723C36DF_METHOD_2_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x16198300)
#define CLASS_2_28281581723C36DF_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x174404B0)
#define CLASS_2_28281581723C36DF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17440470)
#define CLASS_2_28281581723C36DF_METHOD_2_E71A958DC020C7A7_OFFSET UNITYSDK_OFFSET(0x161981D0)
#define CLASS_2_28281581723C36DF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16198070)
#define CLASS_2_28281581723C36DF__CTOR_OFFSET UNITYSDK_OFFSET(0x16198060)

inline static constexpr unsigned int Class_2_28281581723C36DF_TypeDefinitionIndex = 66497;

class Class_2_28281581723C36DF : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::RPG::Client::InitializeModuleConfig* Field_2_0; // 0x38
	::System::Single Field_2_1; // 0x40
	::System::Single Field_2_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E71A958DC020C7A7(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF_METHOD_2_E71A958DC020C7A7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF_METHOD_2_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Void Method_2_0A0A8830B02C5A4B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF_METHOD_2_0A0A8830B02C5A4B_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_28281581723C36DF_METHOD_2_3422201382CE593B_OFFSET))(this);
	}
};
