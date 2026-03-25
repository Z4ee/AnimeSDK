#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8385F95FFA7FAA1C;
class Class_1_867B6CE75953535A_1;
class Class_3_D6E9A038FA23103A;
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

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x9A25650)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET UNITYSDK_OFFSET(0x9A22040)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x9A267C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0x9A211F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x9A258E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x9A21F80)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_360BA532B6A47F61_OFFSET UNITYSDK_OFFSET(0x9A25840)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_3DD9DCB0DF5E67A1_OFFSET UNITYSDK_OFFSET(0x9A24850)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x9A257C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9A21950)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0x9A25B90)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x9A21400)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_583407A37EA614AA_OFFSET UNITYSDK_OFFSET(0x9A22050)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_6B51BAC14C8AC028_OFFSET UNITYSDK_OFFSET(0x9A25F50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_753586FE4A87B433_OFFSET UNITYSDK_OFFSET(0x9A21270)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_9A99B25922C65F46_OFFSET UNITYSDK_OFFSET(0x9A24CE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x9A267B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x9A21AE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x9A26820)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A25D60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x9A25C90)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x9A214C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0x9A21530)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A26160)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0x9A26520)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___IFIXBASEPROXY_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x9A26830)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET UNITYSDK_OFFSET(0x9A265C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET UNITYSDK_OFFSET(0x9A26780)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_TypeDefinitionIndex = 62536;

	class FourRotateVoxelGameStartCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x50
		::System::Single DelaySetAnimalColorTime; // 0x54
		::System::Single StartOrthographicSize; // 0x58
		::System::Single TargetOrthographicSize; // 0x5C
		::System::Single ZoomOutDuration; // 0x60
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x68
		::System::Single DelayRotate; // 0x70
		::System::Single DelayZoomInTime; // 0x74
		::System::Single ZoomInDuration; // 0x78
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0x80
		::System::Single BlendToPlayerDuration; // 0x88
		::UnityEngine::AnimationCurve* BlendToPlayerCurve; // 0x90
		::System::Boolean Field_6_12; // 0x98
		::System::Single ColorDuration; // 0x9C
		::System::Single ColorRadius; // 0xA0
		::System::Single RotateSpeed; // 0xA4
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xA8
		::UnityEngine::AnimationCurve* FinalRotateCurve; // 0xB0
		::System::Single Field_6_18; // 0xB8
		::System::Single RandomSprayMaxDistance; // 0xBC
		::System::Single RandomSpraySpeed; // 0xC0
		::System::Single ColorLiquidMoveSpeed; // 0xC4
		::UnityEngine::Vector2 ColorLiquidRandomIntervalTime; // 0xC8
		::System::Single ColoringCameraMoveSpeed; // 0xD0
		::System::Single Field_6_24; // 0xD4
		::System::Single Field_6_25; // 0xD8
		::System::Boolean Field_6_26; // 0xDC
		::System::Int32 Field_6_27; // 0xE0
		::System::Single Field_6_28; // 0xE4
		::Cinemachine::CinemachineVirtualCamera* Field_6_29; // 0xE8
		::UnityEngine::Vector3 Field_6_30; // 0xF0
		::UnityEngine::Vector3 Field_6_31; // 0xFC
		::UnityEngine::Vector3 Field_6_32; // 0x108
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_6_33; // 0x118
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Transform*>* Field_6_34; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Tuple_2<::UnityEngine::Vector3, ::RPG::Client::MonoEffect*>*>* Field_6_35; // 0x128
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85*>* Field_6_36; // 0x130
		::System::Collections::Generic::List_1<::System::Single>* Field_6_37; // 0x138
		::System::Single Field_6_38; // 0x140
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79*>* Field_6_39; // 0x148
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507*>* Field_6_40; // 0x150
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_6_41; // 0x158
		::System::Int32 Field_6_42; // 0x160
		::System::Boolean Field_6_43; // 0x164
		::System::Boolean Field_6_44; // 0x165
		::UnityEngine::Vector3 Field_6_45; // 0x168
		::UnityEngine::Vector3 Field_6_46; // 0x174
		::System::Boolean Field_6_47; // 0x180
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_6_48; // 0x188
		::System::Collections::Generic::List_1<::System::UInt32>* Field_6_49; // 0x190
		::System::Boolean Field_6_50; // 0x198

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__CTOR_OFFSET))(this);
		}

		::System::Single Method_6_124E7DAB85EAFECD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_124E7DAB85EAFECD_OFFSET))(this);
		}

		::System::Single Method_6_753586FE4A87B433()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_753586FE4A87B433_OFFSET))(this);
		}

		::System::Void SetPlayerPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void StartCurve(::Class_1_867B6CE75953535A_1* a1, ::Class_3_D6E9A038FA23103A* a2, ::Class_1_8385F95FFA7FAA1C* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_D6E9A038FA23103A*, ::Class_1_8385F95FFA7FAA1C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Int32 get_ZoomInStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET))(this);
		}

		::System::Void Method_6_583407A37EA614AA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_583407A37EA614AA_OFFSET))(this, a1);
		}

		::System::Void Method_6_3DD9DCB0DF5E67A1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_3DD9DCB0DF5E67A1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::System::Void Method_6_9A99B25922C65F46(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_9A99B25922C65F46_OFFSET))(this, a1);
		}

		::System::Void Method_6_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_2DC57A98C12C3B08_OFFSET))(this, a1);
		}

		::System::Void Method_6_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_1947BC35B7A7FCB8_OFFSET))(this);
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

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_6_360BA532B6A47F61()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_360BA532B6A47F61_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_6_6B51BAC14C8AC028(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_6B51BAC14C8AC028_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_57DCB1CE056E3F2A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_57DCB1CE056E3F2A_OFFSET))(this);
		}

		::System::Void Method_6_DF2A78D8DB25ED05()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_DF2A78D8DB25ED05_OFFSET))(this);
		}

		::System::Void Method_6_558C6AE12602A241()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_558C6AE12602A241_OFFSET))(this);
		}

		::System::Int32 _StartCurve_b__30_0(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET))(this, a, b);
		}

		::System::Void __UpdateCameraTransform_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET))(this);
		}

		::System::Void Method_6_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Void Method_6_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_6_F7300E87EC49A206()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_F7300E87EC49A206_OFFSET))(this);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___IFIXBASEPROXY_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}
	};
}
