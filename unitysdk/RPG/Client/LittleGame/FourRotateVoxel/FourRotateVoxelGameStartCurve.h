#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2CDF619C23140440;
class Class_1_8385F95FFA7FAA1C;
class Class_3_912CC478F2B21832;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD50E6F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET UNITYSDK_OFFSET(0xD50AA20)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xD509990)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_135525C976152CB8_OFFSET UNITYSDK_OFFSET(0xD50EC50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_170F1EAD3E667A14_OFFSET UNITYSDK_OFFSET(0xD50DCC0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_27437E13743670DF_OFFSET UNITYSDK_OFFSET(0xD50D6F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xD50A1D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xD50EBD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0xD50F2F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_4DF3FD286ED1BA02_OFFSET UNITYSDK_OFFSET(0xD50E7D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_5AE9FE79570F1541_OFFSET UNITYSDK_OFFSET(0xD50ECE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0xD50AA30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xD50A960)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0xD50EFF0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7E832D0C2C340C33_OFFSET UNITYSDK_OFFSET(0xD509C20)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xD50A510)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C30AF7E71ED0169E_OFFSET UNITYSDK_OFFSET(0xD50F700)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_D54994197F28EEFC_OFFSET UNITYSDK_OFFSET(0xD509A10)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD50F4E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD50F400)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xD509CD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD509D40)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xD50F900)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0xD50FCD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET UNITYSDK_OFFSET(0xD50FD70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET UNITYSDK_OFFSET(0xD50FFB0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_TypeDefinitionIndex = 76361;

	class FourRotateVoxelGameStartCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single DelaySetAnimalColorTime; // 0x7C
		::System::Single StartOrthographicSize; // 0x80
		::System::Single TargetOrthographicSize; // 0x84
		::System::Single ZoomOutDuration; // 0x88
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x90
		::System::Single DelayRotate; // 0x98
		::System::Single DelayZoomInTime; // 0x9C
		::System::Single ZoomInDuration; // 0xA0
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA8
		::System::Single BlendToPlayerDuration; // 0xB0
		::UnityEngine::AnimationCurve* BlendToPlayerCurve; // 0xB8
		::System::Boolean OGJHABCCJHD; // 0xC0
		::System::Single ColorDuration; // 0xC4
		::System::Single ColorRadius; // 0xC8
		::System::Single RotateSpeed; // 0xCC
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xD0
		::UnityEngine::AnimationCurve* FinalRotateCurve; // 0xD8
		::System::Single OJMFLFEJEMO; // 0xE0
		::System::Single RandomSprayMaxDistance; // 0xE4
		::System::Single RandomSpraySpeed; // 0xE8
		::System::Single ColorLiquidMoveSpeed; // 0xEC
		::UnityEngine::Vector2 ColorLiquidRandomIntervalTime; // 0xF0
		::System::Single ColoringCameraMoveSpeed; // 0xF8
		::System::Single BBFDNJKIFKP; // 0xFC
		::System::Single NMIIBKJCAMH; // 0x100
		::System::Boolean IDJGFJIGCNA; // 0x104
		::System::Int32 CBNCOPOENPN; // 0x108
		::System::Single CFKGKLEPEAJ; // 0x10C
		::System::Nullable_1<::System::Single> EODJJNCHECO; // 0x110
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0x118
		::UnityEngine::Vector3 NJMCHCDFAPC; // 0x120
		::UnityEngine::Vector3 OKADADJIFAM; // 0x12C
		::UnityEngine::Vector3 KBJDEGEEJEI; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* INDPPAEIICN; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Transform*>* NGCEDPAKDIF; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Tuple_2<::UnityEngine::Vector3, ::RPG::Client::MonoEffect*>*>* ABNNDMNIBLC; // 0x158
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85*>* IIFKHPMPBNA; // 0x160
		::System::Collections::Generic::List_1<::System::Single>* IENCIIAABCJ; // 0x168
		::System::Single BACCIAAOJBB; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79*>* IGEIODIAEGP; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507*>* DHABOPLDDHD; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* KKDKIPAHBEO; // 0x188
		::System::Int32 CPMLLGNOOIH; // 0x190
		::System::Boolean OEKJAJNHEBM; // 0x194
		::System::Boolean GHEEEIPEFAK; // 0x195
		::UnityEngine::Vector3 AHGAHHFLANF; // 0x198
		::UnityEngine::Vector3 GDEIMGPKGML; // 0x1A4
		::System::Boolean KFACBCHEAEI; // 0x1B0
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* FIOONNCIFBA; // 0x1B8
		::System::Collections::Generic::List_1<::System::UInt32>* LGNFLEGGCIG; // 0x1C0
		::System::Boolean GCAJNHIBJHK; // 0x1C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__CTOR_OFFSET))(this);
		}

		::System::Single Method_6_124E7DAB85EAFECD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_124E7DAB85EAFECD_OFFSET))(this);
		}

		::System::Single Method_6_D54994197F28EEFC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_D54994197F28EEFC_OFFSET))(this);
		}

		::System::Void SetPlayerPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void StartCurve(::Class_1_2CDF619C23140440* a1, ::Class_3_912CC478F2B21832* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_912CC478F2B21832*, ::Class_1_8385F95FFA7FAA1C*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Int32 get_ZoomInStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET))(this);
		}

		::System::Void Method_6_5FB0DC4E8DAA3EC5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
		}

		::System::Void Method_6_27437E13743670DF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_27437E13743670DF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::System::Void Method_6_170F1EAD3E667A14(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_170F1EAD3E667A14_OFFSET))(this, a1);
		}

		::System::Void Method_6_626C719A884DEF9A(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_626C719A884DEF9A_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_4DF3FD286ED1BA02(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_4DF3FD286ED1BA02_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_5AE9FE79570F1541(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_5AE9FE79570F1541_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void ResetByInitialCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_6_135525C976152CB8()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_135525C976152CB8_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_C30AF7E71ED0169E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C30AF7E71ED0169E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_7E832D0C2C340C33()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7E832D0C2C340C33_OFFSET))(this);
		}

		::System::Void Method_6_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Void Method_6_4D9E1AC61B60D577()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_4D9E1AC61B60D577_OFFSET))(this);
		}

		::System::Int32 _StartCurve_b__30_0(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET))(this, a1, a2);
		}

		::System::Void __UpdateCameraTransform_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET))(this);
		}
	};
}
