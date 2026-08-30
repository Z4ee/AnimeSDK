#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692;
namespace RPG::Client { class DialogEmitterBehavior_DialogData; }
namespace RPG::Client { class DialogEmitterMonoPlugin; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CARCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xDDA03B0)
#define CARCONTROL_GENERATERANDOMPLATENUMBER_OFFSET UNITYSDK_OFFSET(0xDDA1970)
#define CARCONTROL_GETTRANSFORMREF_OFFSET UNITYSDK_OFFSET(0xDDA13A0)
#define CARCONTROL_INITCARLICENSE_OFFSET UNITYSDK_OFFSET(0xDDA0330)
#define CARCONTROL_MANUALEND_OFFSET UNITYSDK_OFFSET(0xDDA1C90)
#define CARCONTROL_MANUALSTART_OFFSET UNITYSDK_OFFSET(0xDDA0500)
#define CARCONTROL_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0xDDA1E10)
#define CARCONTROL_METHOD_5_1AD013B50B95594F_OFFSET UNITYSDK_OFFSET(0xDDA3C00)
#define CARCONTROL_METHOD_5_4C4796AC7F58C144_OFFSET UNITYSDK_OFFSET(0xDDA3F00)
#define CARCONTROL_METHOD_5_5CCB202047B26946_OFFSET UNITYSDK_OFFSET(0xDDA0EA0)
#define CARCONTROL_METHOD_5_5CCDFA1325D1189C_OFFSET UNITYSDK_OFFSET(0xDDA3E20)
#define CARCONTROL_METHOD_5_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0xDDA0490)
#define CARCONTROL_METHOD_5_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0xDDA3C80)
#define CARCONTROL_METHOD_5_72441113E013E70D_OFFSET UNITYSDK_OFFSET(0xDDA31D0)
#define CARCONTROL_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0xDDA3770)
#define CARCONTROL_METHOD_5_97AC5E0734B0603A_OFFSET UNITYSDK_OFFSET(0xDDA0B50)
#define CARCONTROL_METHOD_5_B6B60891A776E34D_OFFSET UNITYSDK_OFFSET(0xDDA14A0)
#define CARCONTROL_METHOD_5_CEB0AC426B3FC6F6_OFFSET UNITYSDK_OFFSET(0xDDA2220)
#define CARCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDA0420)
#define CARCONTROL_SETCARSTATE_OFFSET UNITYSDK_OFFSET(0xDDA3AC0)
#define CARCONTROL_SETIRICAR_OFFSET UNITYSDK_OFFSET(0xDDA4110)
#define CARCONTROL_TRIGGERDANCE_OFFSET UNITYSDK_OFFSET(0xDDA0AF0)
#define CARCONTROL_UPDATECARLICENSEPOSITION_OFFSET UNITYSDK_OFFSET(0xDDA0370)
#define CARCONTROL_UPDATELIGHTS_OFFSET UNITYSDK_OFFSET(0xDDA4160)
#define CARCONTROL__CCTOR_OFFSET UNITYSDK_OFFSET(0xDDA4580)
#define CARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xDDA4520)

inline static constexpr unsigned int CarControl_TypeDefinitionIndex = 47527;

class CarControl : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet_GLODMJNHNBB()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)Il2CppClass::FromTypeDefinitionIndex(CarControl_TypeDefinitionIndex)->GetStaticField(0x66A10);
	}
	::Il2CppArray<::UnityEngine::Transform*>* wheels; // 0x18
	::UnityEngine::Transform* carBody; // 0x20
	::System::Single DayEmissionStrength; // 0x28
	::System::Single NightEmissionStrength; // 0x2C
	::System::Int32 HeadLightID; // 0x30
	::System::Int32 RearLightID; // 0x34
	::System::Int32 TailLightID; // 0x38
	::System::Int32 TurnLightRightID; // 0x3C
	::System::Int32 TurnLightLeftID; // 0x40
	::System::Boolean PoliceCarLightOn; // 0x44
	::System::Int32 PoliceCarLightID; // 0x48
	::UnityEngine::Transform* Lights; // 0x50
	::Il2CppArray<::UnityEngine::Transform*>* CarLicense; // 0x58
	::System::Single wheelRotationSpeed; // 0x60
	::System::Single acceleration; // 0x64
	::System::Single DLJMOKNCIPG; // 0x68
	::System::Single accelerationSmoothSpeed; // 0x6C
	::UnityEngine::Vector3 steeringCurveTangent; // 0x70
	::System::Single maxSteeringAngle; // 0x7C
	::System::Single wheelBase; // 0x80
	::System::Single rearTrack; // 0x84
	::System::Single suspensionHeight; // 0x88
	::System::Single suspensionDamping; // 0x8C
	::System::Single suspensionCentripetalForceFactor; // 0x90
	::System::Single bodyPitchFactor; // 0x94
	::System::Single slopePitchFactor; // 0x98
	::System::Boolean enableTesting; // 0x9C
	::System::Single testSpeed; // 0xA0
	::System::Single testAcceleration; // 0xA4
	::UnityEngine::Vector3 testTangent; // 0xA8
	::System::Single PCAJNGAKFPE; // 0xB4
	::System::Single JEFDPPELNMJ; // 0xB8
	::System::Boolean NPMICDHMPDC; // 0xBC
	::System::Boolean POAHLDHEPOC; // 0xBD
	::System::Int32 ALMIBCEGMGF; // 0xC0
	::UnityEngine::Vector3 IPDMJEBFKAL; // 0xC4
	::UnityEngine::Quaternion KPPEOEKGCIL; // 0xD0
	::UnityEngine::Vector3 PEOEIJDMMDF; // 0xE0
	::UnityEngine::Quaternion DFKHAKPDGLO; // 0xEC
	::Il2CppArray<::UnityEngine::Vector3>* ENKEEDBNKIO; // 0x100
	::Il2CppArray<::UnityEngine::Vector3>* KBFEODKNFDD; // 0x108
	::System::Boolean JJAEMBOHPAB; // 0x110
	::System::Single NPEMEJNNJDG; // 0x114
	::System::Boolean enableDancing; // 0x118
	::UnityEngine::AnimationCurve* danceAmplitudeCurve; // 0x120
	::System::Single danceFrequency; // 0x128
	::System::Single danceIntensity; // 0x12C
	::System::Boolean useAdvancedMotion; // 0x130
	::System::Int32 EDEMFDGCKAA; // 0x134
	::System::Single HCAHCMKGEDO; // 0x138
	::System::Single AHLFCJGGNAM; // 0x13C
	::RPG::Client::DialogEmitterMonoPlugin* FFOKKLLFAFM; // 0x140
	::System::Collections::Generic::List_1<::RPG::Client::DialogEmitterBehavior_DialogData*>* MCFBFENIOKE; // 0x148
	::Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692* MHHNLBMLPNK; // 0x150
	::RootMotion::IKJob::IKThreadProxyContext* EEFMDEHLLFI; // 0x158
	::RootMotion::IKJob::IKTransformRef JOHFAIACCGK; // 0x160
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* GJNLOONGCAF; // 0x170
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* NLCHMGOIJOJ; // 0x178
	::System::Single LAKHBMGNAFM; // 0x180
	::System::Single GKHPLJAAPBP; // 0x184

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARCONTROL__CCTOR_OFFSET))();
	}

	::Il2CppArray<::RPG::Client::DialogEmitterBehavior_DialogData*>* InitCarLicense()
	{
		return ((::Il2CppArray<::RPG::Client::DialogEmitterBehavior_DialogData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_INITCARLICENSE_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::Vector3>* UpdateCarLicensePosition()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_UPDATECARLICENSEPOSITION_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_ONDESTROY_OFFSET))(this);
	}

	::System::Void Method_5_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Void TriggerDance(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CARCONTROL_TRIGGERDANCE_OFFSET))(this, a1);
	}

	::System::Void Method_5_97AC5E0734B0603A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_97AC5E0734B0603A_OFFSET))(this);
	}

	::RootMotion::IKJob::IKTransformRef GetTransformRef(::UnityEngine::Transform* a1)
	{
		return ((::RootMotion::IKJob::IKTransformRef(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CARCONTROL_GETTRANSFORMREF_OFFSET))(this, a1);
	}

	::System::Void ManualStart(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CARCONTROL_MANUALSTART_OFFSET))(this, a1, a2);
	}

	::System::Void ManualEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_MANUALEND_OFFSET))(this);
	}

	::System::Void ManualUpdate(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_MANUALUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void SetCarState(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CARCONTROL_SETCARSTATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_5_B6B60891A776E34D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_B6B60891A776E34D_OFFSET))(this, a1);
	}

	::System::Void Method_5_72441113E013E70D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_72441113E013E70D_OFFSET))(this, a1);
	}

	::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
	}

	::System::Void Method_5_CEB0AC426B3FC6F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_CEB0AC426B3FC6F6_OFFSET))(this, a1);
	}

	::System::Single Method_5_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_705AF43C01ED360A_OFFSET))(this);
	}

	::System::Single Method_5_5CCDFA1325D1189C(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_5CCDFA1325D1189C_OFFSET))(this, a1);
	}

	::System::Void Method_5_4C4796AC7F58C144(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_4C4796AC7F58C144_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_5_5CCB202047B26946(::RootMotion::IKJob::IKTransformRef a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_5CCB202047B26946_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_5_1AD013B50B95594F(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CARCONTROL_METHOD_5_1AD013B50B95594F_OFFSET))(this, a1, a2);
	}

	::System::Void SetIRICar(::Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AAA29E827EB555D_Class_1_4452B3A96D121692*))((::PBYTE)hIl2Cpp + CARCONTROL_SETIRICAR_OFFSET))(this, a1);
	}

	::System::Void UpdateLights()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_UPDATELIGHTS_OFFSET))(this);
	}

	::System::String* GenerateRandomPlateNumber()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARCONTROL_GENERATERANDOMPLATENUMBER_OFFSET))(this);
	}
};
