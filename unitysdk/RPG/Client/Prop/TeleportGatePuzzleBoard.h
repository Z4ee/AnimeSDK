#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateCameraMode.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateLinkCurveInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateRelateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateType.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_0_16E4307DCC419505_425;
class Class_1_CB49A9A8DDA83A48;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Prop { class PuzzleCameraController; }
namespace RPG::Client::Prop { class TeleportGate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0x16116660)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16115DF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0x16116EF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_EXITTELEPORTCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x1610F220)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTENDPOINT_OFFSET UNITYSDK_OFFSET(0x161134F0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTSBYSRCANDTARGET_OFFSET UNITYSDK_OFFSET(0x16116450)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTS_OFFSET UNITYSDK_OFFSET(0x16110A40)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x16113810)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x16117C20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_057EC1AE4AD79114_OFFSET UNITYSDK_OFFSET(0x16117150)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_0B71C60A6B94C27E_OFFSET UNITYSDK_OFFSET(0x16113A10)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x161181F0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_39FEC17A8F811530_OFFSET UNITYSDK_OFFSET(0x16115820)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3CAD92CFB876DBF6_1_OFFSET UNITYSDK_OFFSET(0x16116350)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x16114F80)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_4C1EED43D4375BF1_OFFSET UNITYSDK_OFFSET(0x16114CD0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_5774A017AB29B9C4_OFFSET UNITYSDK_OFFSET(0x16116AE0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_63C9695FD446A3FB_OFFSET UNITYSDK_OFFSET(0x16117A60)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_66F5446EE62756C0_OFFSET UNITYSDK_OFFSET(0x16113930)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_69B2EE89B201424C_OFFSET UNITYSDK_OFFSET(0x161174D0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_87542624084AC5B0_OFFSET UNITYSDK_OFFSET(0x16115A20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16114F10)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x16114C50)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B6341494FC1F179D_OFFSET UNITYSDK_OFFSET(0x16117F30)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B85FADE27031C75C_OFFSET UNITYSDK_OFFSET(0x16117650)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C37465F702371348_OFFSET UNITYSDK_OFFSET(0x16116750)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C521AF86F7597260_OFFSET UNITYSDK_OFFSET(0x16116F80)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16116E50)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16116EA0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CB8EC282BE234712_OFFSET UNITYSDK_OFFSET(0x16117E60)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x161170F0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x16117FC0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_E69265148B895E7A_OFFSET UNITYSDK_OFFSET(0x16116C90)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x161156D0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F3427EDA868DBB19_OFFSET UNITYSDK_OFFSET(0x161156E0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F94014943DD919AB_OFFSET UNITYSDK_OFFSET(0x16115D10)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x161111E0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x161112E0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONGATESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1610FEA0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERENDMOVE_OFFSET UNITYSDK_OFFSET(0x16111070)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0x16113560)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONROTATEEND_OFFSET UNITYSDK_OFFSET(0x16111960)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0x16115080)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x161154A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TRYGATEROTATE_OFFSET UNITYSDK_OFFSET(0x16110290)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16118AC0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x161188B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGatePuzzleBoard_TypeDefinitionIndex = 74946;

	class TeleportGatePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4ED0);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4ED4);
		}
		static ::System::Int32* StaticGet_Field_6_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x4ED8);
		}
		// static const ::System::Boolean Field_6_3; // 0x0
		::Il2CppArray<::RPG::Client::Prop::TeleportGateInfo>* TeleportGates; // 0x48
		::Il2CppArray<::RPG::Client::Prop::TeleportGateRelateInfo>* TeleportGateRelateInfos; // 0x50
		::Il2CppArray<::RPG::Client::Prop::TeleportGateLinkCurveInfo>* TeleportGateLinkCurves; // 0x58
		::System::Single MaxRotateSpeed; // 0x60
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0x68
		::System::UInt32 OpenPropInteractID; // 0x70
		::System::UInt32 ClosePropInteractID; // 0x74
		::System::String* TeleportEffectPath; // 0x78
		::System::String* EnterTeleportEffectPath; // 0x80
		::System::String* ExitTeleportEffectPath; // 0x88
		::System::String* GateTeleportText; // 0x90
		::System::String* GateRotateText; // 0x98
		::System::Single DelayVisibleTimeAfterTeleport; // 0xA0
		::System::Single RaycastYOffset; // 0xA4
		::System::Single TeleportSpeed; // 0xA8
		::System::Single TeleportGateCameraOffsetDistance; // 0xAC
		::System::Single TeleportGateCameraOffsetHeight; // 0xB0
		::System::Single TeleportGateCameraBlendInTime; // 0xB4
		::System::Single TeleportCameraMaxFov; // 0xB8
		::UnityEngine::AnimationCurve* TeleportCameraFovCurve; // 0xC0
		::System::String* TelerportTriggerCustomString; // 0xC8
		::System::String* TeleportFinishTriggerCustomString; // 0xD0
		::System::Single EffectDelayTime; // 0xD8
		::RPG::Client::Prop::TeleportGateType GateType; // 0xDC
		::RPG::Client::Prop::TeleportGateCameraMode CameraMode; // 0xE0
		::System::String* ShrinkGateShowLinkEffectString; // 0xE8
		::System::String* ShrinkGateHideLinkEffectString; // 0xF0
		::UnityEngine::GameObject* TeleportProxyObject; // 0xF8
		::Il2CppArray<::System::Int32>* Field_6_32; // 0x100
		::Il2CppArray<::RPG::GameCore::TransformComponent*>* Field_6_33; // 0x108
		::Il2CppArray<::RPG::Client::Prop::TeleportGate*>* Field_6_34; // 0x110
		::Il2CppArray<::RPG::GameCore::PropComponent*>* Field_6_35; // 0x118
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::PropState, ::RPG::GameCore::PropState, ::System::UInt32>* Field_6_36; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* Field_6_37; // 0x128
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_CB49A9A8DDA83A48*>* Field_6_38; // 0x130
		::System::Int32 Field_6_39; // 0x138
		::RPG::Client::Prop::PuzzleCameraController* Field_6_40; // 0x140
		::System::Boolean Field_6_41; // 0x148
		::System::Int32 Field_6_42; // 0x14C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_66F5446EE62756C0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_66F5446EE62756C0_OFFSET))(this);
		}

		::System::Void Method_6_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_6_0B71C60A6B94C27E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_0B71C60A6B94C27E_OFFSET))(this, a1, a2);
		}

		::System::Void OnSetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONSETACTIVE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void GetTeleportPoints(::System::Int32 a1, ::System::Boolean& a2, ::System::Single& a3, ::BansheeGz::BGSpline::Components::BGCcMath*& a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&, ::System::Single&, ::BansheeGz::BGSpline::Components::BGCcMath*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Prop::TeleportGate* GetTeleportEndPoint(::System::Int32 a1)
		{
			return ((::RPG::Client::Prop::TeleportGate*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTENDPOINT_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* GetTeleportPointsBySrcAndTarget(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean& a3)
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTSBYSRCANDTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExitTeleportCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_EXITTELEPORTCAMERAMODE_OFFSET))(this, a1);
		}

		::System::Void OnPlayerStartMove(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERSTARTMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPlayerEndMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERENDMOVE_OFFSET))(this);
		}

		::System::Void OnGateStateChange(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONGATESTATECHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnRotateEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONROTATEEND_OFFSET))(this, a1);
		}

		::System::Void DisableAllTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISABLEALLTRIGGER_OFFSET))(this);
		}

		::System::Void EnableAllTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ENABLEALLTRIGGER_OFFSET))(this);
		}

		::System::Void OnEffectTriggerEnter(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnEffectTriggerExit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Void TryGateRotate(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TRYGATEROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_E69265148B895E7A(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_E69265148B895E7A_OFFSET))(this, a1);
		}

		::System::Void Method_6_4C1EED43D4375BF1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::Prop::TeleportGateType a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::TeleportGateType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_4C1EED43D4375BF1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_6_69B2EE89B201424C(::Class_1_CB49A9A8DDA83A48* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CB49A9A8DDA83A48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_69B2EE89B201424C_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_057EC1AE4AD79114(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::RPG::GameCore::PropState a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_057EC1AE4AD79114_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_B85FADE27031C75C(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B85FADE27031C75C_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_39FEC17A8F811530(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_39FEC17A8F811530_OFFSET))(this, a1, a2);
		}

		::Class_1_CB49A9A8DDA83A48* Method_6_63C9695FD446A3FB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Class_1_CB49A9A8DDA83A48*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_63C9695FD446A3FB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F94014943DD919AB(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F94014943DD919AB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_87542624084AC5B0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_87542624084AC5B0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_02B490C9189918DC(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_02B490C9189918DC_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState Method_6_CB8EC282BE234712(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CB8EC282BE234712_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState Method_6_B6341494FC1F179D(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B6341494FC1F179D_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_F3427EDA868DBB19(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F3427EDA868DBB19_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_D4E1804C25B5032C(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_D4E1804C25B5032C_OFFSET))(this, a1);
		}

		::System::Void Method_6_C521AF86F7597260(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C521AF86F7597260_OFFSET))(this, a1);
		}

		::System::Void Method_6_5774A017AB29B9C4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_5774A017AB29B9C4_OFFSET))(this, a1);
		}

		::System::Void Method_6_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Single Method_6_C37465F702371348(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C37465F702371348_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_3CAD92CFB876DBF6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3CAD92CFB876DBF6_OFFSET))(this);
		}

		::System::Void Method_6_3CAD92CFB876DBF6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3CAD92CFB876DBF6_1_OFFSET))(this);
		}

		::System::Void Method_6_E52C357E96F7A058(::Class_0_16E4307DCC419505_425* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_E52C357E96F7A058_OFFSET))(this, a1);
		}

		::System::Void Method_6_2566AD459572DFC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_2566AD459572DFC3_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}
	};
}
