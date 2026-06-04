#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/Class_1_4E7CD920416C7737_TestPlanesResults.h"
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

class Class_0_16E4307DCC419505_955;
class Class_1_AA5627556691B674;
class Class_1_D2B8D50DD9833CFC;
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class ICameraFightState; }
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4E7CD920416C7737_METHOD_1_01DC450235D2B1CE_OFFSET UNITYSDK_OFFSET(0xAF0EEF0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_07102D52E522A52C_OFFSET UNITYSDK_OFFSET(0xAF08540)
#define CLASS_1_4E7CD920416C7737_METHOD_1_07F47BD71D685D69_OFFSET UNITYSDK_OFFSET(0xAF0FC20)
#define CLASS_1_4E7CD920416C7737_METHOD_1_0E976279993A6463_OFFSET UNITYSDK_OFFSET(0xAF097B0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_0EED83C52D83728F_OFFSET UNITYSDK_OFFSET(0xAF10900)
#define CLASS_1_4E7CD920416C7737_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xAF06EF0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_131270D628598FC6_OFFSET UNITYSDK_OFFSET(0xAF0BE70)
#define CLASS_1_4E7CD920416C7737_METHOD_1_1408CDC50EE2C5B7_OFFSET UNITYSDK_OFFSET(0xAF0F9F0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_2B28C29732585CED_OFFSET UNITYSDK_OFFSET(0xAF07200)
#define CLASS_1_4E7CD920416C7737_METHOD_1_33012CEA52AB175A_OFFSET UNITYSDK_OFFSET(0xAF0BBF0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_345EF29602ABA39A_OFFSET UNITYSDK_OFFSET(0xAF106C0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_3636839047123195_OFFSET UNITYSDK_OFFSET(0xAF10C30)
#define CLASS_1_4E7CD920416C7737_METHOD_1_36E7A4EC9082B0F3_OFFSET UNITYSDK_OFFSET(0xAF0F4C0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_37EEC77C4F8C3E93_OFFSET UNITYSDK_OFFSET(0xAF0CC70)
#define CLASS_1_4E7CD920416C7737_METHOD_1_3C5307F598D88590_OFFSET UNITYSDK_OFFSET(0xAF08760)
#define CLASS_1_4E7CD920416C7737_METHOD_1_410582CDD4D1FEA3_OFFSET UNITYSDK_OFFSET(0xAF10330)
#define CLASS_1_4E7CD920416C7737_METHOD_1_4314555060268815_OFFSET UNITYSDK_OFFSET(0xAF07820)
#define CLASS_1_4E7CD920416C7737_METHOD_1_49C6583E97C558DC_OFFSET UNITYSDK_OFFSET(0xAF07500)
#define CLASS_1_4E7CD920416C7737_METHOD_1_4A0BE025F3ADB04A_OFFSET UNITYSDK_OFFSET(0xAF0A170)
#define CLASS_1_4E7CD920416C7737_METHOD_1_51EEE2F999A7092C_OFFSET UNITYSDK_OFFSET(0xAF0E2B0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_536E673ED0B916BA_OFFSET UNITYSDK_OFFSET(0xAF07040)
#define CLASS_1_4E7CD920416C7737_METHOD_1_54C4999AD8BA51B0_OFFSET UNITYSDK_OFFSET(0xAF07160)
#define CLASS_1_4E7CD920416C7737_METHOD_1_5F821FBEC78A26FB_OFFSET UNITYSDK_OFFSET(0xAF0FD00)
#define CLASS_1_4E7CD920416C7737_METHOD_1_63AF220513EAA1FC_OFFSET UNITYSDK_OFFSET(0xAF11280)
#define CLASS_1_4E7CD920416C7737_METHOD_1_6B567837359D7974_OFFSET UNITYSDK_OFFSET(0xAF104C0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_72788DF9FB018326_OFFSET UNITYSDK_OFFSET(0xAF0A900)
#define CLASS_1_4E7CD920416C7737_METHOD_1_75362892DB78D160_OFFSET UNITYSDK_OFFSET(0xAF08FC0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_78E0835F5F9ACC27_OFFSET UNITYSDK_OFFSET(0xAF080D0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0xAF0BAA0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_801971704576A210_OFFSET UNITYSDK_OFFSET(0xAF0A520)
#define CLASS_1_4E7CD920416C7737_METHOD_1_85BE21E91E0DF4EA_OFFSET UNITYSDK_OFFSET(0xAF0A110)
#define CLASS_1_4E7CD920416C7737_METHOD_1_86A00D265FB26CC3_OFFSET UNITYSDK_OFFSET(0xAF0A780)
#define CLASS_1_4E7CD920416C7737_METHOD_1_8ADA98900A3F8A09_OFFSET UNITYSDK_OFFSET(0xAF0CB90)
#define CLASS_1_4E7CD920416C7737_METHOD_1_92CE60A2D0EDB315_OFFSET UNITYSDK_OFFSET(0xAF0AA70)
#define CLASS_1_4E7CD920416C7737_METHOD_1_94DD251267B2C35C_OFFSET UNITYSDK_OFFSET(0xAF0D310)
#define CLASS_1_4E7CD920416C7737_METHOD_1_9B73B1CDD82C8499_OFFSET UNITYSDK_OFFSET(0xAF0F880)
#define CLASS_1_4E7CD920416C7737_METHOD_1_A33093C8E9E03E08_OFFSET UNITYSDK_OFFSET(0xAF0F070)
#define CLASS_1_4E7CD920416C7737_METHOD_1_A6A785EDA1001609_OFFSET UNITYSDK_OFFSET(0xAF114C0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_A7F6540F92D653BD_OFFSET UNITYSDK_OFFSET(0xAF08320)
#define CLASS_1_4E7CD920416C7737_METHOD_1_AA4B844A0C789EB2_OFFSET UNITYSDK_OFFSET(0xAF0BB40)
#define CLASS_1_4E7CD920416C7737_METHOD_1_B199648B35657B1C_OFFSET UNITYSDK_OFFSET(0xAF10990)
#define CLASS_1_4E7CD920416C7737_METHOD_1_B4685880D5A0C203_OFFSET UNITYSDK_OFFSET(0xAF0D9D0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_BD0AD131EE48698A_OFFSET UNITYSDK_OFFSET(0xAF0D800)
#define CLASS_1_4E7CD920416C7737_METHOD_1_BE905BB20CF31ED6_OFFSET UNITYSDK_OFFSET(0xAF10F00)
#define CLASS_1_4E7CD920416C7737_METHOD_1_C23DED92F69FE46E_OFFSET UNITYSDK_OFFSET(0xAF0FA60)
#define CLASS_1_4E7CD920416C7737_METHOD_1_DEBEF7B95160E077_OFFSET UNITYSDK_OFFSET(0xAF08910)
#define CLASS_1_4E7CD920416C7737_METHOD_1_E513579EB32C351F_OFFSET UNITYSDK_OFFSET(0xAF11500)
#define CLASS_1_4E7CD920416C7737_METHOD_1_E5320DFC32CDF79E_OFFSET UNITYSDK_OFFSET(0xAF0FD50)
#define CLASS_1_4E7CD920416C7737_METHOD_1_E59ECB57D51BDEE1_OFFSET UNITYSDK_OFFSET(0xAF09A50)
#define CLASS_1_4E7CD920416C7737_METHOD_1_E787D710A31A2BF6_OFFSET UNITYSDK_OFFSET(0xAF07F50)
#define CLASS_1_4E7CD920416C7737_METHOD_1_EA9DD40FB77BF9A6_OFFSET UNITYSDK_OFFSET(0xAF0B2E0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0xAF08AE0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_EEA74E0937BADBE9_OFFSET UNITYSDK_OFFSET(0xAF09F00)
#define CLASS_1_4E7CD920416C7737_METHOD_1_EEB199409B4C4EC9_OFFSET UNITYSDK_OFFSET(0xAF0E360)
#define CLASS_1_4E7CD920416C7737_METHOD_1_EF9172EB0556775E_OFFSET UNITYSDK_OFFSET(0xAF09910)
#define CLASS_1_4E7CD920416C7737_METHOD_1_F47D472826800AA5_1_OFFSET UNITYSDK_OFFSET(0xAF0A570)
#define CLASS_1_4E7CD920416C7737_METHOD_1_F47D472826800AA5_OFFSET UNITYSDK_OFFSET(0xAF09D00)
#define CLASS_1_4E7CD920416C7737_METHOD_1_F7A9367BB79090D6_OFFSET UNITYSDK_OFFSET(0xAF0D8F0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_F8FB1889CE21FE4C_OFFSET UNITYSDK_OFFSET(0xAF07DD0)
#define CLASS_1_4E7CD920416C7737_METHOD_1_FCF4FA6C9FB02227_OFFSET UNITYSDK_OFFSET(0xAF0FB90)
#define CLASS_1_4E7CD920416C7737__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF11550)

inline static constexpr unsigned int Class_1_4E7CD920416C7737_TypeDefinitionIndex = 65158;

class Class_1_4E7CD920416C7737 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E7CD920416C7737_TypeDefinitionIndex)->GetStaticField(0x35EC0);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E7CD920416C7737_TypeDefinitionIndex)->GetStaticField(0x35EC8);
	}
	// static const ::System::Int32 Field_1_2 = 0x384; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3E8; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x41A; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x44C; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x4B0; // 0x0
	// static const ::System::Int32 Field_1_7 = 0xFFFFFFFF; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_536E673ED0B916BA(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_536E673ED0B916BA_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_54C4999AD8BA51B0(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_54C4999AD8BA51B0_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_2B28C29732585CED(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_2B28C29732585CED_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_4314555060268815(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_4314555060268815_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_F8FB1889CE21FE4C(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_F8FB1889CE21FE4C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_49C6583E97C558DC(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_49C6583E97C558DC_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::AnimationCurve* Method_1_E787D710A31A2BF6(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_E787D710A31A2BF6_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_78E0835F5F9ACC27(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_78E0835F5F9ACC27_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_A7F6540F92D653BD(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_A7F6540F92D653BD_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_07102D52E522A52C(::RPG::MQuaternion a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::MQuaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_07102D52E522A52C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_3C5307F598D88590(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_3C5307F598D88590_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_DEBEF7B95160E077(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::TeamType a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_DEBEF7B95160E077_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_EC1B7452242AE25F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_75362892DB78D160(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_75362892DB78D160_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int32 Method_1_0E976279993A6463(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
	{
		return ((::System::Int32(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_0E976279993A6463_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::RPG::GameCore::VCameraConfig* Method_1_EF9172EB0556775E(::RPG::GameCore::VCameraConfig* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_EF9172EB0556775E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E59ECB57D51BDEE1(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_E59ECB57D51BDEE1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_F47D472826800AA5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_85BE21E91E0DF4EA(::RPG::GameCore::FloatCurve* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_85BE21E91E0DF4EA_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_EEA74E0937BADBE9(::RPG::GameCore::VCameraBlend* a1, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlend*, ::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_EEA74E0937BADBE9_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_4A0BE025F3ADB04A(::RPG::GameCore::VCameraBlendType a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::RPG::GameCore::VCameraBlendType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_4A0BE025F3ADB04A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F47D472826800AA5_1(::Cinemachine::CinemachineBrain* a1, ::RPG::GameCore::VCameraBlend* a2)
	{
		return ((::System::Void(*)(::Cinemachine::CinemachineBrain*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_F47D472826800AA5_1_OFFSET))(a1, a2);
	}

	static ::Cinemachine::CinemachineBlendDefinition_Style Method_1_801971704576A210(::RPG::GameCore::VCameraBlendType a1)
	{
		return ((::Cinemachine::CinemachineBlendDefinition_Style(*)(::RPG::GameCore::VCameraBlendType))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_801971704576A210_OFFSET))(a1);
	}

	static ::UnityEngine::AnimationCurve* Method_1_86A00D265FB26CC3(::System::String* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_86A00D265FB26CC3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_72788DF9FB018326(::Cinemachine::CinemachineBrain* a1, ::Class_0_16E4307DCC419505_955* a2)
	{
		return ((::System::Boolean(*)(::Cinemachine::CinemachineBrain*, ::Class_0_16E4307DCC419505_955*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_72788DF9FB018326_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Matrix4x4 Method_1_92CE60A2D0EDB315(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Matrix4x4 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_92CE60A2D0EDB315_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_EA9DD40FB77BF9A6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_EA9DD40FB77BF9A6_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::Class_1_4E7CD920416C7737_TestPlanesResults Method_1_AA4B844A0C789EB2(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::Class_1_4E7CD920416C7737_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_AA4B844A0C789EB2_OFFSET))(a1, a2);
	}

	static ::Class_1_4E7CD920416C7737_TestPlanesResults Method_1_33012CEA52AB175A(::Il2CppArray<::UnityEngine::Plane>* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3, ::System::Boolean a4)
	{
		return ((::Class_1_4E7CD920416C7737_TestPlanesResults(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_33012CEA52AB175A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_131270D628598FC6(::UnityEngine::Matrix4x4 a1, ::Il2CppArray<::UnityEngine::Plane>*& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_131270D628598FC6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8ADA98900A3F8A09(::UnityEngine::Plane& a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::UnityEngine::Plane&, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_8ADA98900A3F8A09_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_37EEC77C4F8C3E93(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4, ::System::Int32& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_37EEC77C4F8C3E93_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_94DD251267B2C35C(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_94DD251267B2C35C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_BD0AD131EE48698A(::Il2CppArray<::UnityEngine::Plane>*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_BD0AD131EE48698A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F7A9367BB79090D6(::Class_1_AA5627556691B674* a1)
	{
		return ((::System::Void(*)(::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_F7A9367BB79090D6_OFFSET))(a1);
	}

	static ::System::Void Method_1_B4685880D5A0C203(::RPG::GameCore::VCameraConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Nullable_1<::RPG::MVector3> a6, ::RPG::GameCore::GameEntity* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Nullable_1<::RPG::MVector3>, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_B4685880D5A0C203_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_51EEE2F999A7092C(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2)
	{
		return ((::System::Void(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_51EEE2F999A7092C_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::GameEntityList* Method_1_EEB199409B4C4EC9(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::VCameraConfig* a2, ::RPG::GameCore::TurnState a3, ::RPG::GameCore::TurnBasedGameMode* a4, ::RPG::GameCore::TaskContext* a5)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::VCameraConfig*, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_EEB199409B4C4EC9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_01DC450235D2B1CE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnState a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_01DC450235D2B1CE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A33093C8E9E03E08(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_A33093C8E9E03E08_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_36E7A4EC9082B0F3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_36E7A4EC9082B0F3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9B73B1CDD82C8499(::RPG::Client::CameraDataAndFlags* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_9B73B1CDD82C8499_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1408CDC50EE2C5B7(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_1408CDC50EE2C5B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_C23DED92F69FE46E(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_C23DED92F69FE46E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FCF4FA6C9FB02227(::RPG::Client::CameraDataAndFlags* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::RPG::Client::CameraDataAndFlags*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_FCF4FA6C9FB02227_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_07F47BD71D685D69(::RPG::GameCore::VCameraFreelook3rdConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::VCameraFreelook3rdConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_07F47BD71D685D69_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5F821FBEC78A26FB(::RPG::GameCore::VCameraState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::VCameraState))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_5F821FBEC78A26FB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_E5320DFC32CDF79E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_E5320DFC32CDF79E_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D2B8D50DD9833CFC* Method_1_410582CDD4D1FEA3(::UnityEngine::Camera* a1)
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_410582CDD4D1FEA3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6B567837359D7974(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_6B567837359D7974_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_345EF29602ABA39A(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_345EF29602ABA39A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_0EED83C52D83728F(::UnityEngine::Bounds& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_0EED83C52D83728F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B199648B35657B1C(::UnityEngine::Camera* a1, ::UnityEngine::Bounds& a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_B199648B35657B1C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3636839047123195(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Bounds& a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_3636839047123195_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_BE905BB20CF31ED6(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Bounds& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_BE905BB20CF31ED6_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_63AF220513EAA1FC(::UnityEngine::Camera* a1, ::Il2CppArray<::UnityEngine::Plane>* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_63AF220513EAA1FC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A6A785EDA1001609(::RPG::Client::ICameraFightState* a1)
	{
		return ((::System::Void(*)(::RPG::Client::ICameraFightState*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_A6A785EDA1001609_OFFSET))(a1);
	}

	static ::System::Void Method_1_E513579EB32C351F(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E7CD920416C7737_METHOD_1_E513579EB32C351F_OFFSET))(a1, a2);
	}
};
