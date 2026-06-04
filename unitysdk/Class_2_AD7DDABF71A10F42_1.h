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

#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13676050)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x13675F70)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x136774C0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_67823F1E89059BBC_OFFSET UNITYSDK_OFFSET(0x13677690)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x13676B10)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x13677570)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_DD325FEFA053DBEF_OFFSET UNITYSDK_OFFSET(0x13677780)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x136760C0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E4701342E93A9B87_OFFSET UNITYSDK_OFFSET(0x13676BE0)
#define CLASS_2_AD7DDABF71A10F42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13675F30)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_1_TypeDefinitionIndex = 65101;

class Class_2_AD7DDABF71A10F42_1 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	::Class_1_C33A6A0F83B7A2E0* Field_2_0; // 0x38
	::RPG::Client::CameraBlendCurve* Field_2_1; // 0x40
	::RPG::Client::CameraBlendCurve* Field_2_2; // 0x48
	::System::Single Field_2_3; // 0x50
	::System::Single Field_2_4; // 0x54
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_6; // 0x5C
	::UnityEngine::Matrix4x4 Field_2_7; // 0x60
	::System::Single Field_2_8; // 0xA0
	::System::Single Field_2_9; // 0xA4
	::System::Single Field_2_10; // 0xA8
	::RPG::Client::VCameraChangeDataState Field_2_11; // 0xAC
	::RPG::Client::VCameraChangeDataState Field_2_12; // 0xB0
	::System::Single Field_2_13; // 0xB4
	::System::Single Field_2_14; // 0xB8
	::UnityEngine::Matrix4x4 Field_2_15; // 0xBC
	::System::Boolean Field_2_16; // 0xFC
	::System::Boolean Field_2_17; // 0xFD
	::System::Single Field_2_18; // 0x100

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

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_2_67823F1E89059BBC(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_67823F1E89059BBC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Matrix4x4 Method_2_E4701342E93A9B87(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E4701342E93A9B87_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DD325FEFA053DBEF(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_DD325FEFA053DBEF_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
