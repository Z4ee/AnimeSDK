#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A7F3B1CD6560F7E.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1052;
class Class_1_E34FF29EE1CCACD4;
class TrackCameraController;
namespace Cinemachine { class CinemachineDialogueShot; }
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineMixingCamera; }
namespace Cinemachine { class CinemachineSingleShot; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_030801B1E4FDF773_OFFSET UNITYSDK_OFFSET(0x158045F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08808B59A359D2E9_OFFSET UNITYSDK_OFFSET(0x158041F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08B02D8E59C10952_OFFSET UNITYSDK_OFFSET(0x158014E0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x158001F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0EEBAD4772BA939D_OFFSET UNITYSDK_OFFSET(0x15804470)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15800380)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15802720)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x158002F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x15802660)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x158004D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x157FF360)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_312521E652A99251_OFFSET UNITYSDK_OFFSET(0x15801280)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15804E20)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x15801720)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x15800D80)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_38EFA07E130D4700_OFFSET UNITYSDK_OFFSET(0x15801310)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_3C2E7DF87FF8CDD0_OFFSET UNITYSDK_OFFSET(0x158039F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6096CA3BC11444EA_OFFSET UNITYSDK_OFFSET(0x15804B60)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_642C0E9A04E2FB81_OFFSET UNITYSDK_OFFSET(0x158033E0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x157FF570)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x15801690)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x157FF410)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_8A4C6820E5F5715F_OFFSET UNITYSDK_OFFSET(0x15802930)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15801480)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x157FF520)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x15803DF0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_9D0688AE2E08E349_OFFSET UNITYSDK_OFFSET(0x158031E0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_B17C2FC0DB637748_OFFSET UNITYSDK_OFFSET(0x15803B40)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x158026D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x158037F0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x158035C0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x15803470)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_EC50D77EFF46AE1F_OFFSET UNITYSDK_OFFSET(0x15804720)
#define CLASS_2_AD7DDABF71A10F42_2__CTOR_OFFSET UNITYSDK_OFFSET(0x157FF1F0)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_2_TypeDefinitionIndex = 69615;

class Class_2_AD7DDABF71A10F42_2 : public ::Class_1_4A7F3B1CD6560F7E
{
public:
	// static const ::System::String* ENIMFHHHJOO; // 0x0
	// static const ::System::Single BDKGJFDJMJF; // 0x0
	::Cinemachine::CinemachineVirtualCameraBase* AEOGFGBJPJI; // 0x38
	::UnityEngine::Transform* FPOLAOGJJAK; // 0x40
	::RPG::Client::ShotTemplateRuntime* EFKLANNMHAD; // 0x48
	::RPG::GameCore::GameEntity* KNMIMHIBENA; // 0x50
	::Cinemachine::CinemachineDollyCart* DIDAGAELOMK; // 0x58
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelCurveInstance*>* PPDLPPDDKAF; // 0x60
	::UnityEngine::Transform* LPEKOPMFGDM; // 0x68
	::TrackCameraController* FCPGGDJNPEK; // 0x70
	::UnityEngine::Transform* EJBKHMENLKA; // 0x78
	::Cinemachine::CinemachineSingleShot* ODMMANPJLNI; // 0x80
	::UnityEngine::Transform* GCJHLJAMBOE; // 0x88
	::Cinemachine::CinemachineDialogueShot* JKDNKGBJMPA; // 0x90
	::Class_1_E34FF29EE1CCACD4* ALOIMHMJBII; // 0x98
	::Cinemachine::CinemachineMixingCamera* LNGIIANMHFC; // 0xA0
	::Class_0_16E4307DCC419505_1052* MOHOOECKGKB; // 0xA8
	::Cinemachine::CinemachineVirtualCamera* MHMABPNBJOC; // 0xB0
	::System::Int32 DCJIBFIJFJA; // 0xB8
	::System::Boolean EADCOMGFGAE; // 0xBC
	::System::Boolean NIEMAINODBN; // 0xBD
	::System::Boolean ANGIPPAGOAE; // 0xBE
	::System::Boolean PLGJFGIOBML; // 0xBF
	::System::Single ABNMJLAMCGE; // 0xC0
	::System::Single GLGKPEHDNBP; // 0xC4
	::System::Boolean KKOEPCHFPGF; // 0xC8
	::System::Boolean FIKNIBEENLH; // 0xC9
	::System::Boolean JMEMBFHFIDP; // 0xCA
	::System::Boolean FOMNAIDPPOI; // 0xCB
	::System::Single NDIHOCKJACJ; // 0xCC
	::System::Boolean ABJCNFPKKNP; // 0xD0

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Void Method_2_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_312521E652A99251(::RPG::Client::ShotTemplateRuntime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_312521E652A99251_OFFSET))(this, a1);
	}

	::System::Void Method_2_38EFA07E130D4700(::Class_1_E34FF29EE1CCACD4* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E34FF29EE1CCACD4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_38EFA07E130D4700_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Single Method_2_08B02D8E59C10952(::System::Boolean& a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08B02D8E59C10952_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_2_8A4C6820E5F5715F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_8A4C6820E5F5715F_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_9D0688AE2E08E349()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_9D0688AE2E08E349_OFFSET))(this);
	}

	::System::Boolean Method_2_B17C2FC0DB637748(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_B17C2FC0DB637748_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_364E91940C737CC9_OFFSET))(this);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_2_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33E2FA8E6403B93D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_08808B59A359D2E9(::UnityEngine::Vector3 a1, ::System::Boolean& a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08808B59A359D2E9_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_0EEBAD4772BA939D(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0EEBAD4772BA939D_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_030801B1E4FDF773(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_030801B1E4FDF773_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EC50D77EFF46AE1F(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_EC50D77EFF46AE1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6096CA3BC11444EA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6096CA3BC11444EA_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_3C2E7DF87FF8CDD0(::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCameraBase*>*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_3C2E7DF87FF8CDD0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_642C0E9A04E2FB81(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_642C0E9A04E2FB81_OFFSET))(this, a1, a2);
	}
};
