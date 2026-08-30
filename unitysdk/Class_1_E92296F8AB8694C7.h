#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_E92296F8AB8694C7_TestPlanesResults.h"
#include "unitysdk/RPG/GameCore/CameraScreenScopeMode.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1051;
class Class_1_63DA08310CA44C51;
class Class_1_AA5627556691B674;
class Class_1_D2B8D50DD9833CFC;
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::GameCore { class CRPVirtualCameraConfigList; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E92296F8AB8694C7_METHOD_1_01DC450235D2B1CE_OFFSET UNITYSDK_OFFSET(0x1640BCE0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_039B14E9DF496733_OFFSET UNITYSDK_OFFSET(0x1640DF00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_07102D52E522A52C_OFFSET UNITYSDK_OFFSET(0x16404BE0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_07F47BD71D685D69_OFFSET UNITYSDK_OFFSET(0x1640CA60)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_0C946AEA054FD8C6_OFFSET UNITYSDK_OFFSET(0x1640E1D0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_0DEC83FF6E4079F5_OFFSET UNITYSDK_OFFSET(0x16406400)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_0E976279993A6463_OFFSET UNITYSDK_OFFSET(0x16405E50)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_0EED83C52D83728F_OFFSET UNITYSDK_OFFSET(0x1640D740)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_10350C90939883F9_OFFSET UNITYSDK_OFFSET(0x164039B0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0x164033A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_131270D628598FC6_OFFSET UNITYSDK_OFFSET(0x16408C00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_1408CDC50EE2C5B7_OFFSET UNITYSDK_OFFSET(0x1640C830)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_242F98DC77740AFC_OFFSET UNITYSDK_OFFSET(0x16406240)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_2B28C29732585CED_OFFSET UNITYSDK_OFFSET(0x164036B0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_2BF8BE5EDDC41C52_OFFSET UNITYSDK_OFFSET(0x164069B0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_33012CEA52AB175A_OFFSET UNITYSDK_OFFSET(0x16408980)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_335668BA1B025B1A_OFFSET UNITYSDK_OFFSET(0x1640EB90)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_345EF29602ABA39A_OFFSET UNITYSDK_OFFSET(0x1640D500)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_3636839047123195_OFFSET UNITYSDK_OFFSET(0x1640DA70)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_36E7A4EC9082B0F3_OFFSET UNITYSDK_OFFSET(0x1640C2B0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_37EEC77C4F8C3E93_OFFSET UNITYSDK_OFFSET(0x16409A00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_3C5307F598D88590_OFFSET UNITYSDK_OFFSET(0x16404E00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_410582CDD4D1FEA3_OFFSET UNITYSDK_OFFSET(0x1640D170)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_4314555060268815_OFFSET UNITYSDK_OFFSET(0x16403D00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_51EEE2F999A7092C_OFFSET UNITYSDK_OFFSET(0x1640B0A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_536E673ED0B916BA_OFFSET UNITYSDK_OFFSET(0x164034F0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0x16403610)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_5F821FBEC78A26FB_OFFSET UNITYSDK_OFFSET(0x1640CB40)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_6693FC6406F40F7F_OFFSET UNITYSDK_OFFSET(0x164063A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_6B567837359D7974_OFFSET UNITYSDK_OFFSET(0x1640D300)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_6FCED8F27478B7C8_OFFSET UNITYSDK_OFFSET(0x1640A760)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_72788DF9FB018326_OFFSET UNITYSDK_OFFSET(0x16407620)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_75362892DB78D160_OFFSET UNITYSDK_OFFSET(0x16405660)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_78E0835F5F9ACC27_OFFSET UNITYSDK_OFFSET(0x16404700)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x16408830)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_801971704576A210_OFFSET UNITYSDK_OFFSET(0x16407200)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_85BE21E91E0DF4EA_OFFSET UNITYSDK_OFFSET(0x16406C00)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_8ADA98900A3F8A09_OFFSET UNITYSDK_OFFSET(0x16409920)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_8DF9B9F4896A4725_OFFSET UNITYSDK_OFFSET(0x1640E820)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_8E8985C81765DAE6_OFFSET UNITYSDK_OFFSET(0x1640C670)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_91F952E97A36FBFC_OFFSET UNITYSDK_OFFSET(0x1640A680)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_92CE60A2D0EDB315_OFFSET UNITYSDK_OFFSET(0x16407800)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_94DD251267B2C35C_OFFSET UNITYSDK_OFFSET(0x1640A0A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_95277B2F939B9381_OFFSET UNITYSDK_OFFSET(0x16406C60)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_A33093C8E9E03E08_OFFSET UNITYSDK_OFFSET(0x1640BE60)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_A6A785EDA1001609_OFFSET UNITYSDK_OFFSET(0x1640E140)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_AA4B844A0C789EB2_OFFSET UNITYSDK_OFFSET(0x164088D0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_B199648B35657B1C_OFFSET UNITYSDK_OFFSET(0x1640D7D0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_BD0AD131EE48698A_OFFSET UNITYSDK_OFFSET(0x1640A590)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_BE905BB20CF31ED6_OFFSET UNITYSDK_OFFSET(0x1640DB80)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_C23DED92F69FE46E_OFFSET UNITYSDK_OFFSET(0x1640C8A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_C8AFEAAB2CF3D1D3_OFFSET UNITYSDK_OFFSET(0x16407460)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_D62892CDC4D3BC51_OFFSET UNITYSDK_OFFSET(0x16404950)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_D89D86E66CC891C4_OFFSET UNITYSDK_OFFSET(0x16404270)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_DEBEF7B95160E077_OFFSET UNITYSDK_OFFSET(0x16404FB0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_E05AD8B3E187BB28_OFFSET UNITYSDK_OFFSET(0x164060F0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_E2CCE505A4A75656_OFFSET UNITYSDK_OFFSET(0x164045A0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_E513579EB32C351F_OFFSET UNITYSDK_OFFSET(0x1640E180)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_E5320DFC32CDF79E_OFFSET UNITYSDK_OFFSET(0x1640CB90)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_E787D710A31A2BF6_OFFSET UNITYSDK_OFFSET(0x16404420)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_EA9DD40FB77BF9A6_OFFSET UNITYSDK_OFFSET(0x16408070)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0x16405180)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_EEB199409B4C4EC9_OFFSET UNITYSDK_OFFSET(0x1640B150)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_EF9172EB0556775E_OFFSET UNITYSDK_OFFSET(0x16405FB0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_F47D472826800AA5_1_OFFSET UNITYSDK_OFFSET(0x16407250)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_F47D472826800AA5_OFFSET UNITYSDK_OFFSET(0x164067B0)
#define CLASS_1_E92296F8AB8694C7_METHOD_1_FCF4FA6C9FB02227_OFFSET UNITYSDK_OFFSET(0x1640C9D0)
#define CLASS_1_E92296F8AB8694C7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1640EEB0)

inline static constexpr unsigned int Class_1_E92296F8AB8694C7_TypeDefinitionIndex = 69659;

class Class_1_E92296F8AB8694C7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_OLNGIAKCIFM()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E92296F8AB8694C7_TypeDefinitionIndex)->GetStaticField(0x429A0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_JBDNOODOMBL()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E92296F8AB8694C7_TypeDefinitionIndex)->GetStaticField(0x429A8);
	}
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CGPJGMAAHBL()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E92296F8AB8694C7_TypeDefinitionIndex)->GetStaticField(0x429B0);
	}
	// static const ::System::Int32 IDOIMMONNKK = 0x384; // 0x0
	// static const ::System::Int32 KCNEPCKOAJB = 0x3E8; // 0x0
	// static const ::System::Int32 CMGIGFEBMKN = 0x41A; // 0x0
	// static const ::System::Int32 KEHBDAHLPLI = 0x44C; // 0x0
	// static const ::System::Int32 AECJKJCOFNB = 0x4B0; // 0x0
	// static const ::System::Int32 PLLAHJLGDIH = 0xFFFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_536E673ED0B916BA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_536E673ED0B916BA_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_2B28C29732585CED(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_2B28C29732585CED_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4314555060268815(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_4314555060268815_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_D89D86E66CC891C4(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_D89D86E66CC891C4_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_10350C90939883F9(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_10350C90939883F9_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_E787D710A31A2BF6(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_E787D710A31A2BF6_OFFSET))(a1);
	}

	static ::Class_1_63DA08310CA44C51* Method_1_E2CCE505A4A75656()
	{
		return ((::Class_1_63DA08310CA44C51*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_E2CCE505A4A75656_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_78E0835F5F9ACC27(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_78E0835F5F9ACC27_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_D62892CDC4D3BC51(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_D62892CDC4D3BC51_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_07102D52E522A52C(::RPG::MQuaternion a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::MQuaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_07102D52E522A52C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_3C5307F598D88590(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_3C5307F598D88590_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_DEBEF7B95160E077(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_DEBEF7B95160E077_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_EC1B7452242AE25F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_75362892DB78D160(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_75362892DB78D160_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_0E976279993A6463(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_0E976279993A6463_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_EF9172EB0556775E(::RPG::GameCore::VCameraConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_EF9172EB0556775E_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::CRPVirtualCameraConfigList* Method_1_E05AD8B3E187BB28(::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::CRPVirtualCameraConfigList*(*)(::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_E05AD8B3E187BB28_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_242F98DC77740AFC(::RPG::GameCore::CRPVirtualCameraConfigList* a1, ::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfigList*, ::System::Func_2<::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_242F98DC77740AFC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6693FC6406F40F7F(::RPG::GameCore::CRPVirtualCameraConfigList* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CRPVirtualCameraConfigList*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_6693FC6406F40F7F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0DEC83FF6E4079F5(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_1051* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_1051*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_0DEC83FF6E4079F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_F47D472826800AA5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_85BE21E91E0DF4EA(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_85BE21E91E0DF4EA_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_2BF8BE5EDDC41C52(::RPG::GameCore::VCameraBlend* a1, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlend*, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_2BF8BE5EDDC41C52_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_95277B2F939B9381(::RPG::GameCore::VCameraBlendType a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlendType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_95277B2F939B9381_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5_1(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_F47D472826800AA5_1_OFFSET))(a1, a2);
	}

	static ::Cinemachine::CinemachineBlendDefinition_Style Method_1_801971704576A210(::RPG::GameCore::VCameraBlendType a1)
	{
		return ((::Cinemachine::CinemachineBlendDefinition_Style(*)(::RPG::GameCore::VCameraBlendType))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_801971704576A210_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_C8AFEAAB2CF3D1D3(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_C8AFEAAB2CF3D1D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_72788DF9FB018326(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_1051* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_1051*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_72788DF9FB018326_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Matrix4x4 Method_1_92CE60A2D0EDB315(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_92CE60A2D0EDB315_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_EA9DD40FB77BF9A6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_EA9DD40FB77BF9A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::Class_1_E92296F8AB8694C7_TestPlanesResults Method_1_AA4B844A0C789EB2(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::Class_1_E92296F8AB8694C7_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_AA4B844A0C789EB2_OFFSET))(a1, a2);
	}

	static ::Class_1_E92296F8AB8694C7_TestPlanesResults Method_1_33012CEA52AB175A(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4)
	{
		return ((::Class_1_E92296F8AB8694C7_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_33012CEA52AB175A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_131270D628598FC6(::UnityEngine::Matrix4x4 a1, ::Il2CppArray<::UnityEngine::Plane>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_131270D628598FC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ADA98900A3F8A09(::UnityEngine::Plane& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::UnityEngine::Plane&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_8ADA98900A3F8A09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_37EEC77C4F8C3E93(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4, ::System::Int32& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_37EEC77C4F8C3E93_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_94DD251267B2C35C(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_94DD251267B2C35C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BD0AD131EE48698A(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_BD0AD131EE48698A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_91F952E97A36FBFC(::Class_1_AA5627556691B674* a1)
	{
		return ((::System::Void(*)(::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_91F952E97A36FBFC_OFFSET))(a1);
	}

	static ::System::Void Method_1_6FCED8F27478B7C8(::RPG::GameCore::VCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::RPG::MVector3> a6, ::RPG::GameCore::GameEntity* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::MVector3>, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_6FCED8F27478B7C8_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_51EEE2F999A7092C(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_51EEE2F999A7092C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_EEB199409B4C4EC9(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TurnState a3, ::RPG::GameCore::TurnBasedGameMode* a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_EEB199409B4C4EC9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_01DC450235D2B1CE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_01DC450235D2B1CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A33093C8E9E03E08(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_A33093C8E9E03E08_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_36E7A4EC9082B0F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_36E7A4EC9082B0F3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8E8985C81765DAE6(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_8E8985C81765DAE6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1408CDC50EE2C5B7(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_1408CDC50EE2C5B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C23DED92F69FE46E(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_C23DED92F69FE46E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FCF4FA6C9FB02227(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_FCF4FA6C9FB02227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07F47BD71D685D69(::RPG::GameCore::VCameraFreelook3rdConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraFreelook3rdConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_07F47BD71D685D69_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5F821FBEC78A26FB(::RPG::GameCore::VCameraState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_5F821FBEC78A26FB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_E5320DFC32CDF79E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_E5320DFC32CDF79E_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D2B8D50DD9833CFC* Method_1_410582CDD4D1FEA3(::UnityEngine::Camera* a1)
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_410582CDD4D1FEA3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B567837359D7974(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_6B567837359D7974_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_345EF29602ABA39A(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_345EF29602ABA39A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0EED83C52D83728F(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_0EED83C52D83728F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B199648B35657B1C(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_B199648B35657B1C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3636839047123195(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_3636839047123195_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BE905BB20CF31ED6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_BE905BB20CF31ED6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_039B14E9DF496733(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_039B14E9DF496733_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6A785EDA1001609(::RPG::Client::ICameraFightState* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ICameraFightState*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_A6A785EDA1001609_OFFSET))(a1);
	}

	static ::System::Void Method_1_E513579EB32C351F(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_E513579EB32C351F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0C946AEA054FD8C6(::UnityEngine::Camera* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::CameraScreenScopeMode a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CameraScreenScopeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_0C946AEA054FD8C6_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_8DF9B9F4896A4725(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::CameraScreenScopeMode a6, ::System::Boolean a7)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CameraScreenScopeMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_8DF9B9F4896A4725_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_335668BA1B025B1A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E92296F8AB8694C7_METHOD_1_335668BA1B025B1A_OFFSET))(a1, a2, a3, a4);
	}
};
