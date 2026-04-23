#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateCameraMode.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateLinkCurveInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateRelateInfo.h"
#include "unitysdk/RPG/Client/Prop/TeleportGateType.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_0_16E4307DCC419505_382;
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

#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xAEECAD0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEEC3A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ENABLEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xAEED360)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_EXITTELEPORTCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAEE57B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTENDPOINT_OFFSET UNITYSDK_OFFSET(0xAEE9BF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTSBYSRCANDTARGET_OFFSET UNITYSDK_OFFSET(0xAEEC940)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_GETTELEPORTPOINTS_OFFSET UNITYSDK_OFFSET(0xAEE70D0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEE9F20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0xAEEB470)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_057EC1AE4AD79114_OFFSET UNITYSDK_OFFSET(0xAEED610)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_0B71C60A6B94C27E_OFFSET UNITYSDK_OFFSET(0xAEEA100)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_0EF345F8F1CF4181_OFFSET UNITYSDK_OFFSET(0xAEEE480)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_2759BEB287BA573A_OFFSET UNITYSDK_OFFSET(0xAEEBD00)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_28A4492C9A87F8C6_OFFSET UNITYSDK_OFFSET(0xAEEBDF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0xAEEC860)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xAEEE6C0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_4A2FCCA8D75109E9_OFFSET UNITYSDK_OFFSET(0xAEEDF50)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_5774A017AB29B9C4_OFFSET UNITYSDK_OFFSET(0xAEECF80)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_66F5446EE62756C0_OFFSET UNITYSDK_OFFSET(0xAEEA010)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_69B2EE89B201424C_OFFSET UNITYSDK_OFFSET(0xAEEDA00)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_87542624084AC5B0_OFFSET UNITYSDK_OFFSET(0xAEEBF60)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAEEB400)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_994F4CE0B0CACF79_OFFSET UNITYSDK_OFFSET(0xAEEB230)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xAEEB1B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B5A9902B61D08ADD_OFFSET UNITYSDK_OFFSET(0xAEEDB80)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B6341494FC1F179D_OFFSET UNITYSDK_OFFSET(0xAEEE3E0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C37465F702371348_OFFSET UNITYSDK_OFFSET(0xAEECBD0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_C521AF86F7597260_OFFSET UNITYSDK_OFFSET(0xAEED400)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xAEED2C0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAEED310)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CB8EC282BE234712_OFFSET UNITYSDK_OFFSET(0xAEEE310)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0xAEED180)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_D49D4C04CB5F23A5_OFFSET UNITYSDK_OFFSET(0xAEEE0B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0xAEED5B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAEEBCF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F94014943DD919AB_OFFSET UNITYSDK_OFFSET(0xAEEC290)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xAEE7870)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONEFFECTTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xAEE7970)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONGATESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xAEE6530)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERENDMOVE_OFFSET UNITYSDK_OFFSET(0xAEE76F0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONPLAYERSTARTMOVE_OFFSET UNITYSDK_OFFSET(0xAEE9C70)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONROTATEEND_OFFSET UNITYSDK_OFFSET(0xAEE7FF0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xAEEB550)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEEBA90)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_TRYGATEROTATE_OFFSET UNITYSDK_OFFSET(0xAEE69B0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEEEF20)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAEEED90)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEEF0A0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEEEFB0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_ONSETACTIVE_OFFSET UNITYSDK_OFFSET(0xAEEEFC0)
#define RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xAEEF030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGatePuzzleBoard_TypeDefinitionIndex = 72399;

	class TeleportGatePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Int32* StaticGet_Field_6_40()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x45C0);
		}
		static ::System::Int32* StaticGet_Field_6_39()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x45C4);
		}
		static ::System::Int32* StaticGet_Field_6_38()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TeleportGatePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x45C8);
		}
		// static const ::System::Boolean Field_6_37; // 0x0
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
		::Il2CppArray<::System::Int32>* Field_6_28; // 0x100
		::Il2CppArray<::RPG::GameCore::TransformComponent*>* Field_6_29; // 0x108
		::Il2CppArray<::RPG::Client::Prop::TeleportGate*>* Field_6_30; // 0x110
		::Il2CppArray<::RPG::GameCore::PropComponent*>* Field_6_31; // 0x118
		::RPG::Client::TwoKeyDictionary_3<::RPG::GameCore::PropState, ::RPG::GameCore::PropState, ::System::UInt32>* Field_6_32; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::Int32>*>* Field_6_33; // 0x128
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::Class_1_CB49A9A8DDA83A48*>* Field_6_34; // 0x130
		::System::Int32 Field_6_35; // 0x138
		::RPG::Client::Prop::PuzzleCameraController* Field_6_36; // 0x140
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

		::System::Void Method_6_CCAAE56E08561869(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CCAAE56E08561869_OFFSET))(this, a1);
		}

		::System::Void Method_6_994F4CE0B0CACF79(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::Client::Prop::TeleportGateType a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::RPG::Client::Prop::TeleportGateType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_994F4CE0B0CACF79_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void Method_6_B5A9902B61D08ADD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B5A9902B61D08ADD_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_28A4492C9A87F8C6(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_28A4492C9A87F8C6_OFFSET))(this, a1, a2);
		}

		::Class_1_CB49A9A8DDA83A48* Method_6_4A2FCCA8D75109E9(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Class_1_CB49A9A8DDA83A48*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_4A2FCCA8D75109E9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F94014943DD919AB(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F94014943DD919AB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_87542624084AC5B0(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_87542624084AC5B0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_D49D4C04CB5F23A5(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_D49D4C04CB5F23A5_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState Method_6_CB8EC282BE234712(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_CB8EC282BE234712_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropState Method_6_B6341494FC1F179D(::System::Int32 a1)
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_B6341494FC1F179D_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_2759BEB287BA573A(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_2759BEB287BA573A_OFFSET))(this, a1);
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

		::System::Void Method_6_01109DD29CB4D216()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_01109DD29CB4D216_OFFSET))(this);
		}

		::System::Void Method_6_3E522F4B992303E1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_3E522F4B992303E1_OFFSET))(this);
		}

		::System::Void Method_6_0EF345F8F1CF4181(::Class_0_16E4307DCC419505_382* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_0EF345F8F1CF4181_OFFSET))(this, a1);
		}

		::System::Void Method_6_489E0B827662C211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_489E0B827662C211_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_OnSetActive(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_ONSETACTIVE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TELEPORTGATEPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
