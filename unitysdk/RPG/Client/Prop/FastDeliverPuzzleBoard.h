#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/FastDeliverPuzzleStep.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1161;
namespace RPG::Client::Prop { class FastDeliverPuzzleCameraController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DESTROYCAMARA_OFFSET UNITYSDK_OFFSET(0xDCA8BF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCA8F30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FINISHROTATESTEP_OFFSET UNITYSDK_OFFSET(0xDCA1440)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_GET_PUZZLESTEP_OFFSET UNITYSDK_OFFSET(0xDCAC720)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xDCA33B0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITDATA_OFFSET UNITYSDK_OFFSET(0xDCA1980)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCA1530)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xDCA83E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0xDCAB7E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCA3840)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISZERO_OFFSET UNITYSDK_OFFSET(0xDCA9B90)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_027D81190483B79F_OFFSET UNITYSDK_OFFSET(0xDCA9C00)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xDCA9270)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_0B583D287B1D1E72_OFFSET UNITYSDK_OFFSET(0xDCABD90)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_1352708442940A46_OFFSET UNITYSDK_OFFSET(0xDCAC4C0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xDCAB590)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_22D0ADB352880F38_OFFSET UNITYSDK_OFFSET(0xDCAB0C0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0xDCA7A10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xDCA9A00)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDCAB9A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xDCA6CA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xDCA3590)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xDCA6E30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xDCABAD0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0xDCAB2E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0xDCA7190)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_757507C4F0AFCAD2_OFFSET UNITYSDK_OFFSET(0xDCA5140)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xDCA3B80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xDCA3890)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xDCA8100)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xDCA3740)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_A977A1D96BC50369_OFFSET UNITYSDK_OFFSET(0xDCAB4A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xDCA4910)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_B005DDBE7172D6E5_OFFSET UNITYSDK_OFFSET(0xDCA7220)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_C521AF86F7597260_OFFSET UNITYSDK_OFFSET(0xDCEBD30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xDCAB170)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xDCAB850)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xDCAB070)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_E098C2C2038255DD_OFFSET UNITYSDK_OFFSET(0xDCA94A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_E67FFDAAD9BAA098_OFFSET UNITYSDK_OFFSET(0xDCA39A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0xDCEC120)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDCACB30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONPUZZLEPREFINISH_OFFSET UNITYSDK_OFFSET(0xDCAC080)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCA8E50)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEX_OFFSET UNITYSDK_OFFSET(0xDCA3BD0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEY_OFFSET UNITYSDK_OFFSET(0xDCA5260)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEZ_OFFSET UNITYSDK_OFFSET(0xDCA5F80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC730)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAVATARTELEPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC930)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETDOLLYZOOMSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC830)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROTATEPUZZLESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCACA30)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROUTEID_OFFSET UNITYSDK_OFFSET(0xDCAC470)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTAIM_OFFSET UNITYSDK_OFFSET(0xDCA7F10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCA1FF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCA9D90)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAIMFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC7B0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAVATARTELEPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC9B0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETDOLLYZOOMSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCAC8B0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETROTATEPUZZLESTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDCACAB0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UPDATEALLPARAMETER_OFFSET UNITYSDK_OFFSET(0xDCA1490)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDCEC3C0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDCEC280)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_0_OFFSET UNITYSDK_OFFSET(0xDCEC4D0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_1_OFFSET UNITYSDK_OFFSET(0xDCEC990)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_0_OFFSET UNITYSDK_OFFSET(0xDCEC9A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_1_OFFSET UNITYSDK_OFFSET(0xDCECBA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONHACKDEVICEPUZZLEFINISH_B__122_0_OFFSET UNITYSDK_OFFSET(0xDCECBB0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__TICKPUZZLE_B__105_1_OFFSET UNITYSDK_OFFSET(0xDCEC4C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleBoard_TypeDefinitionIndex = 78581;

	class FastDeliverPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::RPG::Client::Prop::FastDeliverPuzzleBoard** StaticGet_PlayingBoard()
		{
			return (::RPG::Client::Prop::FastDeliverPuzzleBoard**)Il2CppClass::FromTypeDefinitionIndex(FastDeliverPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x539D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FIIICPCKMGM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FastDeliverPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x539D8);
		}
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FastDeliverPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x539E0);
		}
		static ::System::Int32* StaticGet_NGHKDJDOOFG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FastDeliverPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		// static const ::System::Single HFIFIHKDMHA; // 0x0
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x48
		::UnityEngine::Vector3 CDJHEIGPBIA; // 0x50
		::UnityEngine::Vector3 JGKIHNHMJHN; // 0x5C
		::UnityEngine::Vector3 NLHOJAHIKLL; // 0x68
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x74
		::UnityEngine::Vector3 PEEEFFFLAMC; // 0x80
		::UnityEngine::Vector3 LFDKHCEFGHI; // 0x8C
		::UnityEngine::Vector3 EJPIJKMKEKC; // 0x98
		::System::Boolean KJOAPEAGGDI; // 0xA4
		::System::Single LKHDFMGGGGE; // 0xA8
		::System::Single FMAEENEHIPC; // 0xAC
		::System::Single LDOPJPLDKED; // 0xB0
		::Class_0_16E4307DCC419505_1161* KCNLDJFMGPL; // 0xB8
		::System::Single InitCameraDist; // 0xC0
		::System::Single CameraRotateLimitAngle; // 0xC4
		::System::Single CameraRotateUpAndDownLimitAngle; // 0xC8
		::System::Single CameraRandomAngle; // 0xCC
		::System::Single CameraRandomAngleCheck; // 0xD0
		::UnityEngine::Transform* InitCameraFocus; // 0xD8
		::System::Single CameraInitialOffsetThreshold; // 0xE0
		::System::Boolean IsSkipCameraAimAfterFinishPuzzle; // 0xE4
		::System::Boolean UseSlopingDirection; // 0xE5
		::System::Single SlopingThreshold; // 0xE8
		::System::Single SlopingDegree; // 0xEC
		::System::Single InitCameraFOV; // 0xF0
		::System::Single AimStepDollyZoomDuration; // 0xF4
		::UnityEngine::AnimationCurve* AimStepDollyZoomCurve; // 0xF8
		::System::Single PuzzleFinishStepDollyZoomDuration; // 0x100
		::UnityEngine::AnimationCurve* PuzzleFinishStepDollyZoomCurve; // 0x108
		::System::Single SecondPartDollyZoomDistRate; // 0x110
		::UnityEngine::AnimationCurve* AimBlendRotCenterCurve; // 0x118
		::System::Single AimBlendRotCenterDuration; // 0x120
		::System::Single AimRotateSpeed; // 0x124
		::System::Single PuzzleParticleDelayAppear; // 0x128
		::UnityEngine::GameObject* RotatePuzzleRoot; // 0x130
		::UnityEngine::Vector3 PuzzleInitEuler; // 0x138
		::UnityEngine::Vector3 PuzzleTargetEuler; // 0x144
		::System::Single CheckDuration; // 0x150
		::System::Single CheckTargetGap; // 0x154
		::System::Single CheckTargetPercentGap; // 0x158
		::UnityEngine::Vector3 CheckTargetGapVec; // 0x15C
		::System::Single PuzzleRootToPropDist; // 0x168
		::System::Single PuzzleRootToCameraDist; // 0x16C
		::System::Single PuzzleRootScale; // 0x170
		::System::Single PuzzleRotateSpeedX; // 0x174
		::System::Single PuzzleRotateSpeedY; // 0x178
		::System::Single PuzzleStickRotateSpeedX; // 0x17C
		::System::Single PuzzleStickRotateSpeedY; // 0x180
		::System::Int32 PuzzleTargetMultiX; // 0x184
		::System::Int32 PuzzleTargetMultiY; // 0x188
		::System::Int32 PuzzleTargetMultiZ; // 0x18C
		::UnityEngine::Vector2 PuzzleRotateLimitX; // 0x190
		::UnityEngine::Vector2 PuzzleRotateLimitY; // 0x198
		::UnityEngine::Vector2 PuzzleRotateLimitZ; // 0x1A0
		::System::Int32 RotateLimitType; // 0x1A8
		::System::Single PuzzlePreFinishRotationDuration; // 0x1AC
		::UnityEngine::AnimationCurve* PuzzlePreFinishRotationCurve; // 0x1B0
		::System::Single DelayDeliverTime; // 0x1B8
		::System::Single DeliverBetweenDist; // 0x1BC
		::System::Single AfterTransitionDelayCameraBlendTime; // 0x1C0
		::System::Single AfterTransitionCameraBlendTime; // 0x1C4
		::System::Single ThirdCameraMoveDuration; // 0x1C8
		::UnityEngine::AnimationCurve* ThirdCameraMoveCurve; // 0x1D0
		::System::Single ThirdCameraMoveDeltaDist; // 0x1D8
		::System::Boolean IsHackDevice; // 0x1DC
		::System::Boolean HasPuzzleFocusTarget; // 0x1DD
		::System::Boolean HasPuzzleAimFinish; // 0x1DE
		::System::Boolean KJKGBBIELNH; // 0x1DF
		::RPG::GameCore::PropInitPuzzle* BGLJBLDOEPD; // 0x1E0
		::System::Nullable_1<::UnityEngine::Vector3> HLKJEGFDLJL; // 0x1E8
		::System::Boolean KBEBIAHLICN; // 0x1F8
		::System::Boolean EDEAJIKHHOE; // 0x1F9
		::System::Boolean MAEINCJOGBD; // 0x1FA
		::System::Boolean NALJDAIDEOC; // 0x1FB
		::System::Single CKEHHCLKIPM; // 0x1FC
		::System::Single BPIOGLNKJIH; // 0x200
		::System::Single LFGHDINEKNB; // 0x204
		::UnityEngine::GameObject* DFIIFCOCDND; // 0x208
		::System::Boolean AGMNLKJBCFD; // 0x210
		::System::UInt32 OPHGEOGLJJM; // 0x214
		::System::Single CKLILEGGHGC; // 0x218
		::System::Single JKKHHNIKDPF; // 0x21C
		::UnityEngine::Quaternion BILJFNAPMLO; // 0x220
		::UnityEngine::Quaternion PFLNIDOEGBD; // 0x230
		::RPG::Client::Prop::FastDeliverPuzzleCameraController* OCOBMKLPDCN; // 0x240
		::System::Boolean CIFEPLFDHPM; // 0x248
		::RPG::Client::Prop::FastDeliverPuzzleStep DGNMBEDGOLL; // 0x24C
		::UnityEngine::Quaternion EACLBCKINAN; // 0x250
		::System::Action* HDEJLOJHPKI; // 0x260
		::System::Action* EAFHFPGEABI; // 0x268
		::System::Action* IFJOGBLAMMP; // 0x270
		::System::Action* GJCBMPAKDDM; // 0x278
		::System::Boolean OAILNGBLCHF; // 0x280
		::UnityEngine::Vector3 CANCEEJFCNC; // 0x284
		::UnityEngine::Vector3 NNHJHGFMGNB; // 0x290
		::System::Int32 NNCAJLGKKAK; // 0x29C
		::System::Int32 NKJKFPNJOGJ; // 0x2A0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MMLACHNFAON; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void FinishRotateStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_FINISHROTATESTEP_OFFSET))(this);
		}

		::System::Void UpdateAllParameter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UPDATEALLPARAMETER_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_6_A27D06F9481FAFDB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_A27D06F9481FAFDB_OFFSET))(this, a1);
		}

		::System::Void Method_6_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void InitData(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITDATA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_E67FFDAAD9BAA098(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_E67FFDAAD9BAA098_OFFSET))(this, a1);
		}

		::System::Void Method_6_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void RotateX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEX_OFFSET))(this, a1);
		}

		::System::Void Method_6_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_AA169839CB93802A_OFFSET))(this);
		}

		static ::System::Single Method_6_757507C4F0AFCAD2(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_757507C4F0AFCAD2_OFFSET))(a1, a2, a3);
		}

		::System::Void RotateY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEY_OFFSET))(this, a1);
		}

		::System::Void RotateZ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ROTATEZ_OFFSET))(this, a1);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_2BC55A66CB2B0118()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_2BC55A66CB2B0118_OFFSET))(this);
		}

		::System::Void StartAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_STARTAIM_OFFSET))(this);
		}

		::System::Void Method_6_B005DDBE7172D6E5(::System::Single& a1, ::System::Single& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_B005DDBE7172D6E5_OFFSET))(this, a1, a2);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITCAMERA_OFFSET))(this);
		}

		::System::Void InitVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_INITVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void DestroyCamara()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DESTROYCAMARA_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean IsZero(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISZERO_OFFSET))(a1);
		}

		::UnityEngine::Quaternion Method_6_027D81190483B79F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_027D81190483B79F_OFFSET))(this, a1, a2);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Single Method_6_22D0ADB352880F38(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_22D0ADB352880F38_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_A977A1D96BC50369(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_A977A1D96BC50369_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_6_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsEnablePuzzleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET))(this);
		}

		::System::Single Method_6_D64FD9A228A1C4E0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_D64FD9A228A1C4E0_OFFSET))(this);
		}

		::System::Void Method_6_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_6_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_6_56CE4AFC5339F746()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_56CE4AFC5339F746_OFFSET))(this);
		}

		::System::Void Method_6_0B583D287B1D1E72(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_0B583D287B1D1E72_OFFSET))(this, a1, a2);
		}

		::System::Void OnPuzzlePreFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONPUZZLEPREFINISH_OFFSET))(this);
		}

		::System::Void SetRouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROUTEID_OFFSET))(this, a1);
		}

		::System::Void Method_6_DE52BD42C4B0B772()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_DE52BD42C4B0B772_OFFSET))(this);
		}

		::System::Void Method_6_51DEC44B986280C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_51DEC44B986280C0_OFFSET))(this);
		}

		::System::Void Method_6_1352708442940A46(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_1352708442940A46_OFFSET))(this, a1);
		}

		::System::Void Method_6_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_0865E94460F11643_OFFSET))(this);
		}

		::RPG::Client::Prop::FastDeliverPuzzleStep get_PuzzleStep()
		{
			return ((::RPG::Client::Prop::FastDeliverPuzzleStep(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_GET_PUZZLESTEP_OFFSET))(this);
		}

		::System::Void SetAimFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAIMFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetAimFinishCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAIMFINISHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetDollyZoomStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETDOLLYZOOMSTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetDollyZoomStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETDOLLYZOOMSTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetAvatarTeleportCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETAVATARTELEPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetAvatarTeleportCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETAVATARTELEPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void SetRotatePuzzleStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_SETROTATEPUZZLESTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void UnsetRotatePuzzleStartCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_UNSETROTATEPUZZLESTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_3BCF0226A6CDC13B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_3BCF0226A6CDC13B_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_6_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_6_E098C2C2038255DD(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_E098C2C2038255DD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_C521AF86F7597260(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_C521AF86F7597260_OFFSET))(this, a1);
		}

		::System::Void Method_6_FD647A48096EB173()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD_METHOD_6_FD647A48096EB173_OFFSET))(this);
		}

		::System::Void _TickPuzzle_b__105_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__TICKPUZZLE_B__105_1_OFFSET))(this);
		}

		::System::Void _OnAimFinishImmediately_b__114_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_0_OFFSET))(this);
		}

		::System::Void _OnAimFinishImmediately_b__114_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISHIMMEDIATELY_B__114_1_OFFSET))(this);
		}

		::System::Void _OnAimFinish_b__115_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_0_OFFSET))(this);
		}

		::System::Void _OnAimFinish_b__115_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONAIMFINISH_B__115_1_OFFSET))(this);
		}

		::System::Void _OnHackDevicePuzzleFinish_b__122_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLEBOARD__ONHACKDEVICEPUZZLEFINISH_B__122_0_OFFSET))(this);
		}
	};
}
