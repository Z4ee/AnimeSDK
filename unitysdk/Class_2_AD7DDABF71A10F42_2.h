#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_906;
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

#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_030801B1E4FDF773_OFFSET UNITYSDK_OFFSET(0x118A5060)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x118A2230)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0448359E56604271_OFFSET UNITYSDK_OFFSET(0x118A4570)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08808B59A359D2E9_OFFSET UNITYSDK_OFFSET(0x118A4CB0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_08B02D8E59C10952_OFFSET UNITYSDK_OFFSET(0x118A20D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x118A3190)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x118A0F90)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0EEBAD4772BA939D_OFFSET UNITYSDK_OFFSET(0x118A4EE0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x118A1120)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x118A1090)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x118A1270)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_30E134A2CEDB3A22_OFFSET UNITYSDK_OFFSET(0x118A0130)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_312521E652A99251_OFFSET UNITYSDK_OFFSET(0x118A1E70)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x118A5870)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x118A3F10)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x118A22C0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_38EFA07E130D4700_OFFSET UNITYSDK_OFFSET(0x118A1F00)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_3C2E7DF87FF8CDD0_OFFSET UNITYSDK_OFFSET(0x118A4420)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x118A3430)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_642C0E9A04E2FB81_OFFSET UNITYSDK_OFFSET(0x118A3E80)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6827D1B56D40B805_OFFSET UNITYSDK_OFFSET(0x118A55D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6916CB2AB9451DD7_1_OFFSET UNITYSDK_OFFSET(0x118A3C40)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x118A0320)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x118A19E0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x118A01E0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x118A2070)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x118A02D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x118A48A0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x118A30D0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_AFDBE2353EC32F1F_OFFSET UNITYSDK_OFFSET(0x118A5930)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x118A3140)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x118A4220)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x118A3FF0)
#define CLASS_2_AD7DDABF71A10F42_2_METHOD_2_EC50D77EFF46AE1F_OFFSET UNITYSDK_OFFSET(0x118A5190)
#define CLASS_2_AD7DDABF71A10F42_2__CTOR_OFFSET UNITYSDK_OFFSET(0x118A00E0)

inline static constexpr unsigned int Class_2_AD7DDABF71A10F42_2_TypeDefinitionIndex = 64196;

class Class_2_AD7DDABF71A10F42_2 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	::TrackCameraController* Field_2_25; // 0x38
	::Class_1_E34FF29EE1CCACD4* Field_2_1; // 0x40
	::UnityEngine::Transform* Field_2_6; // 0x48
	::Cinemachine::CinemachineVirtualCameraBase* Field_2_13; // 0x50
	::Class_0_16E4307DCC419505_906* Field_2_26; // 0x58
	::Cinemachine::CinemachineSingleShot* Field_2_3; // 0x60
	::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelCurveInstance*>* Field_2_28; // 0x68
	::UnityEngine::Transform* Field_2_7; // 0x70
	::UnityEngine::Transform* Field_2_9; // 0x78
	::UnityEngine::Transform* Field_2_8; // 0x80
	::RPG::GameCore::GameEntity* Field_2_19; // 0x88
	::RPG::Client::ShotTemplateRuntime* Field_2_2; // 0x90
	::Cinemachine::CinemachineMixingCamera* Field_2_29; // 0x98
	::Cinemachine::CinemachineDialogueShot* Field_2_4; // 0xA0
	::Cinemachine::CinemachineDollyCart* Field_2_12; // 0xA8
	::Cinemachine::CinemachineVirtualCamera* Field_2_0; // 0xB0
	::System::Int32 Field_2_18; // 0xB8
	::System::Boolean Field_2_22; // 0xBC
	::System::Boolean Field_2_20; // 0xBD
	::System::Boolean Field_2_11; // 0xBE
	::System::Boolean Field_2_21; // 0xBF
	::System::Boolean Field_2_24; // 0xC0
	::System::Boolean Field_2_5; // 0xC1
	::System::Single Field_2_15; // 0xC4
	::System::Boolean Field_2_16; // 0xC8
	::System::Boolean Field_2_30; // 0xC9
	::System::Boolean Field_2_23; // 0xCA
	::System::Single Field_2_27; // 0xCC
	::System::Single Field_2_14; // 0xD0

	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_30E134A2CEDB3A22(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_30E134A2CEDB3A22_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
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

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_0E142E3463F30350()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0E142E3463F30350_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6916CB2AB9451DD7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_0448359E56604271(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0448359E56604271_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_0C88AB06D46E777A_OFFSET))(this);
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

	::System::Void Method_2_6827D1B56D40B805(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_6827D1B56D40B805_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
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

	::System::Void Method_2_AFDBE2353EC32F1F(::RPG::Client::PipelineCameraEngine* P0, ::RPG::Client::CameraModuleConfigCollection* P1, ::RPG::Client::PipelineCameraGlobalConfig* P2, ::RPG::Client::CameraDataAndFlags* P3, ::RPG::Client::CameraModuleType P4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + CLASS_2_AD7DDABF71A10F42_2_METHOD_2_AFDBE2353EC32F1F_OFFSET))(this, P0, P1, P2, P3, P4);
	}
};
