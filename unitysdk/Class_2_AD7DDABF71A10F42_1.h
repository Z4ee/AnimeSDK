#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/RPG/Client/VCameraChangeDataState.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_C33A6A0F83B7A2E0;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x130A6AD0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x130A5550)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x130A5470)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x130A6A20)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_67823F1E89059BBC_OFFSET UNITYSDK_OFFSET(0x130A6C10)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x130A6070)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x130A55C0)
#define CLASS_2_AD7DDABF71A10F42_1_METHOD_2_E4701342E93A9B87_OFFSET UNITYSDK_OFFSET(0x130A6140)
#define CLASS_2_AD7DDABF71A10F42_1__CTOR_OFFSET UNITYSDK_OFFSET(0x130A5300)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_1_TypeDefinitionIndex = 69599;

class Class_2_AD7DDABF71A10F42_1 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	::RPG::Client::CameraBlendCurve* KJJOCBMBEHE; // 0x38
	::RPG::Client::CameraBlendCurve* DGFHHPMPAHI; // 0x40
	::Class_1_C33A6A0F83B7A2E0* KGIIAFKDLPD; // 0x48
	::System::Single NLMAMDMLOGM; // 0x50
	::System::Single JFKGPGHOCIP; // 0x54
	::System::Single GHABAAOGBNO; // 0x58
	::System::Single GBPLPJPGMDG; // 0x5C
	::System::Single KKHBNPPDKKL; // 0x60
	::UnityEngine::Matrix4x4 OPMOGGALLPG; // 0x64
	::System::Single BALGFJDINGK; // 0xA4
	::RPG::Client::VCameraChangeDataState CFIKPOFNONJ; // 0xA8
	::System::Single DEHHNEPJBBK; // 0xAC
	::System::Single DBPIIKMFPEB; // 0xB0
	::System::Boolean EGKIAEIAMGM; // 0xB4
	::System::Boolean BNFBHGLKPLP; // 0xB5
	::RPG::Client::VCameraChangeDataState DNKMCBJLAGG; // 0xB8
	::UnityEngine::Matrix4x4 GNGGKLEECHC; // 0xBC
	::System::Single PGMIOKKLHIE; // 0xFC
	::System::Single EKCHCNIINGF; // 0x100

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

	::System::Void Method_2_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_1_METHOD_2_0BDFAC56E6B704CB_OFFSET))(this);
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
};
