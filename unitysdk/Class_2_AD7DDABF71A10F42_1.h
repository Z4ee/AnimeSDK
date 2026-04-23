#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_C33A6A0F83B7A2E0;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA2E5310)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_2E5FAB831E74FD2D_OFFSET UNITYSDK_OFFSET(0xA2E5EB0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0xA2E5230)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA2E6150)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xA2E60A0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_67823F1E89059BBC_OFFSET UNITYSDK_OFFSET(0xA2E6270)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA2E5DE0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0xA2E6360)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xA2E5380)
#define CLASS_2_AD7DDABF71A10F42_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E51F0)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_1_TypeDefinitionIndex = 64180;

class Class_2_AD7DDABF71A10F42_1 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Class_1_C33A6A0F83B7A2E0* Field_2_11; // 0x38
	::RPG::Client::CameraBlendCurve* Field_2_14; // 0x40
	::RPG::Client::CameraBlendCurve* Field_2_12; // 0x48
	::System::Single Field_2_4; // 0x50
	::RPG::Client::VCameraChangeDataState Field_2_18; // 0x54
	::UnityEngine::Matrix4x4 Field_2_16; // 0x58
	::System::Single Field_2_9; // 0x98
	::System::Single Field_2_2; // 0x9C
	::System::Boolean Field_2_13; // 0xA0
	::System::Boolean Field_2_15; // 0xA1
	::System::Single Field_2_1; // 0xA4
	::System::Single Field_2_0; // 0xA8
	::System::Single Field_2_8; // 0xAC
	::System::Single Field_2_6; // 0xB0
	::System::Single Field_2_5; // 0xB4
	::System::Single Field_2_3; // 0xB8
	::RPG::Client::VCameraChangeDataState Field_2_10; // 0xBC
	::System::Single Field_2_7; // 0xC0
	::UnityEngine::Matrix4x4 Field_2_17; // 0xC4

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_2_67823F1E89059BBC(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_67823F1E89059BBC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_2_2E5FAB831E74FD2D(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_2E5FAB831E74FD2D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
