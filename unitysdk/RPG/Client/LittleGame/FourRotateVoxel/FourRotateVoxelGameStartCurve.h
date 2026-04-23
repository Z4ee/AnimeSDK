#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D11CE62B2BEC69E;
class Class_1_8385F95FFA7FAA1C;
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

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA6D1B70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET UNITYSDK_OFFSET(0xA6CE180)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xA6D3440)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_124E7DAB85EAFECD_OFFSET UNITYSDK_OFFSET(0xA6CD150)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xA6CD8E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_360BA532B6A47F61_OFFSET UNITYSDK_OFFSET(0xA6D20D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_3DD9DCB0DF5E67A1_OFFSET UNITYSDK_OFFSET(0xA6D0D80)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xA6D2050)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_4DF3FD286ED1BA02_OFFSET UNITYSDK_OFFSET(0xA6D1C50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_558C6AE12602A241_OFFSET UNITYSDK_OFFSET(0xA6D27B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0xA6CD360)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_5AE9FE79570F1541_OFFSET UNITYSDK_OFFSET(0xA6D2170)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xA6CE0C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_753586FE4A87B433_OFFSET UNITYSDK_OFFSET(0xA6CD1D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7EDA82E1A56BE1B3_OFFSET UNITYSDK_OFFSET(0xA6CE190)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xA6CDC60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_9A99B25922C65F46_OFFSET UNITYSDK_OFFSET(0xA6D1210)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C30AF7E71ED0169E_OFFSET UNITYSDK_OFFSET(0xA6D2BA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0xA6D2480)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA6D34A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6D3400)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA6D2990)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA6D28B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xA6CD420)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xA6CD490)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D2DA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0xA6D3170)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___IFIXBASEPROXY_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA6D34E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET UNITYSDK_OFFSET(0xA6D3210)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET UNITYSDK_OFFSET(0xA6D33D0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_TypeDefinitionIndex = 70546;

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
		::System::Boolean Field_6_12; // 0xC0
		::System::Single ColorDuration; // 0xC4
		::System::Single ColorRadius; // 0xC8
		::System::Single RotateSpeed; // 0xCC
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xD0
		::UnityEngine::AnimationCurve* FinalRotateCurve; // 0xD8
		::System::Single Field_6_18; // 0xE0
		::System::Single RandomSprayMaxDistance; // 0xE4
		::System::Single RandomSpraySpeed; // 0xE8
		::System::Single ColorLiquidMoveSpeed; // 0xEC
		::UnityEngine::Vector2 ColorLiquidRandomIntervalTime; // 0xF0
		::System::Single ColoringCameraMoveSpeed; // 0xF8
		::System::Single Field_6_24; // 0xFC
		::System::Single Field_6_25; // 0x100
		::System::Boolean Field_6_26; // 0x104
		::System::Int32 Field_6_27; // 0x108
		::System::Single Field_6_28; // 0x10C
		::System::Nullable_1<::System::Single> Field_6_29; // 0x110
		::Cinemachine::CinemachineVirtualCamera* Field_6_30; // 0x118
		::UnityEngine::Vector3 Field_6_31; // 0x120
		::UnityEngine::Vector3 Field_6_32; // 0x12C
		::UnityEngine::Vector3 Field_6_33; // 0x138
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_6_34; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Transform*>* Field_6_35; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Tuple_2<::UnityEngine::Vector3, ::RPG::Client::MonoEffect*>*>* Field_6_36; // 0x158
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_5D38E0A9AA20AF85*>* Field_6_37; // 0x160
		::System::Collections::Generic::List_1<::System::Single>* Field_6_38; // 0x168
		::System::Single Field_6_39; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_ECBBC12D5E0FDD79*>* Field_6_40; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameStartCurve_Class_1_7F261685B3D20507*>* Field_6_41; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* Field_6_42; // 0x188
		::System::Int32 Field_6_43; // 0x190
		::System::Boolean Field_6_44; // 0x194
		::System::Boolean Field_6_45; // 0x195
		::UnityEngine::Vector3 Field_6_46; // 0x198
		::UnityEngine::Vector3 Field_6_47; // 0x1A4
		::System::Boolean Field_6_48; // 0x1B0
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_6_49; // 0x1B8
		::System::Collections::Generic::List_1<::System::UInt32>* Field_6_50; // 0x1C0
		::System::Boolean Field_6_51; // 0x1C8

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

		::System::Void StartCurve(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2, ::Class_1_8385F95FFA7FAA1C* a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*, ::Class_1_8385F95FFA7FAA1C*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Int32 get_ZoomInStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET))(this);
		}

		::System::Void Method_6_7EDA82E1A56BE1B3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7EDA82E1A56BE1B3_OFFSET))(this, a1);
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

		::System::Void Method_6_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C7BF9C1E6A78DCAB_OFFSET))(this);
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

		::UnityEngine::Vector3 Method_6_C30AF7E71ED0169E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_C30AF7E71ED0169E_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_6_57DCB1CE056E3F2A()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_57DCB1CE056E3F2A_OFFSET))(this);
		}

		::System::Void Method_6_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_7FBAA229ED524F8E_OFFSET))(this);
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

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 __iFixBaseProxy_get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___IFIXBASEPROXY_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}
	};
}
