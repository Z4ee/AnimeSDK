#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8C9DCC241B1CB1E_Enum_3_DA1171F297D2E5CC.h"
#include "unitysdk/Class_1_A8C9DCC241B1CB1E_Struct_2_066F79011AD57EF8.h"
#include "unitysdk/Class_1_A8C9DCC241B1CB1E_Struct_2_43734151E3B931C8.h"
#include "unitysdk/Enum_3_259E81F297BD0CD1.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_3.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Array; }
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0250D52800ED8EFB_OFFSET UNITYSDK_OFFSET(0xE4E40F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_06F2B31AE63FF939_OFFSET UNITYSDK_OFFSET(0xE4E5DC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0BE913F94ECC2B4A_OFFSET UNITYSDK_OFFSET(0xE4DFD70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0CD5C98F33CDD2B7_1_OFFSET UNITYSDK_OFFSET(0xE4E8EE0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0CD5C98F33CDD2B7_OFFSET UNITYSDK_OFFSET(0xE4DF4A0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0DD029CB43957F2C_OFFSET UNITYSDK_OFFSET(0xE4E94E0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0EC723229F2155F6_OFFSET UNITYSDK_OFFSET(0xE4E66C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_1_OFFSET UNITYSDK_OFFSET(0xE4E0B70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_2_OFFSET UNITYSDK_OFFSET(0xE4E3F60)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_OFFSET UNITYSDK_OFFSET(0xE4E0960)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_10867B69EFBCA83E_1_OFFSET UNITYSDK_OFFSET(0xE4E3E70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_10867B69EFBCA83E_OFFSET UNITYSDK_OFFSET(0xE4DF410)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_114640939C6C7CB3_OFFSET UNITYSDK_OFFSET(0xE4E9890)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_11DB6989C5753AC9_OFFSET UNITYSDK_OFFSET(0xE4E4F70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_181C60B2ED879E1B_OFFSET UNITYSDK_OFFSET(0xE4E4350)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_194B3A312318E87E_OFFSET UNITYSDK_OFFSET(0xE4E1180)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_1_OFFSET UNITYSDK_OFFSET(0xE4E0DF0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_2_OFFSET UNITYSDK_OFFSET(0xE4E17F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_3_OFFSET UNITYSDK_OFFSET(0xE4E20B0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_4_OFFSET UNITYSDK_OFFSET(0xE4E2950)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_5_OFFSET UNITYSDK_OFFSET(0xE4E5B40)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_6_OFFSET UNITYSDK_OFFSET(0xE4E6CB0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_7_OFFSET UNITYSDK_OFFSET(0xE4E9710)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_8_OFFSET UNITYSDK_OFFSET(0xE4E9AA0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_OFFSET UNITYSDK_OFFSET(0xE4DF8B0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2025DD35291324CA_OFFSET UNITYSDK_OFFSET(0xE4E75F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_216F2D1EDDCD7E5D_OFFSET UNITYSDK_OFFSET(0xE4DF760)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_244486F131336ADC_OFFSET UNITYSDK_OFFSET(0xE4E2BD0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2681CDA00CA39F_OFFSET UNITYSDK_OFFSET(0xE4E1470)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2D4037ABF72FAC_1_OFFSET UNITYSDK_OFFSET(0xE4E8210)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2D4037ABF72FAC_OFFSET UNITYSDK_OFFSET(0xE4E5D00)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2CDF77691AC08DE9_OFFSET UNITYSDK_OFFSET(0xE4E9A00)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2D131943F229C128_OFFSET UNITYSDK_OFFSET(0xE4E64C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EED001F3AB271F9_OFFSET UNITYSDK_OFFSET(0xE4E9580)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EEFBF32DE201A4C_1_OFFSET UNITYSDK_OFFSET(0xE4E1F10)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EEFBF32DE201A4C_OFFSET UNITYSDK_OFFSET(0xE4E19D0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3F2F02D8DC52A787_1_OFFSET UNITYSDK_OFFSET(0xE4E4870)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3F2F02D8DC52A787_OFFSET UNITYSDK_OFFSET(0xE4E0AF0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_414619A8535DF3F5_OFFSET UNITYSDK_OFFSET(0xE4E6D80)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_47E09ABA15A05E7B_OFFSET UNITYSDK_OFFSET(0xE4E0040)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_495C2C3DBC55920D_OFFSET UNITYSDK_OFFSET(0xE4E6760)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_496989DF316BF169_1_OFFSET UNITYSDK_OFFSET(0xE4E8C70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_496989DF316BF169_OFFSET UNITYSDK_OFFSET(0xE4E80C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4B72DE7620C42895_OFFSET UNITYSDK_OFFSET(0xE4E7E60)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4CD8274CBBC07FDA_OFFSET UNITYSDK_OFFSET(0xE4E8360)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4DE530A7F5AC3C83_OFFSET UNITYSDK_OFFSET(0xE4E5380)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_1_OFFSET UNITYSDK_OFFSET(0xE4E4990)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_2_OFFSET UNITYSDK_OFFSET(0xE4E0F60)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_OFFSET UNITYSDK_OFFSET(0xE4E4790)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_58CA15E0AAB9E008_1_OFFSET UNITYSDK_OFFSET(0xE4E69E0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_58CA15E0AAB9E008_OFFSET UNITYSDK_OFFSET(0xE4E5690)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_5C5E879DFAFE06C7_OFFSET UNITYSDK_OFFSET(0xE4E3370)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_5DA109C60798AEDF_OFFSET UNITYSDK_OFFSET(0xE4E7720)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_65AA567D8110DF21_OFFSET UNITYSDK_OFFSET(0xE4E50B0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_6F6DA84AD57EF450_OFFSET UNITYSDK_OFFSET(0xE4E8D20)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_74CFB596EC7BBEE7_OFFSET UNITYSDK_OFFSET(0xE4E8660)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_78789D5ED1D841A5_OFFSET UNITYSDK_OFFSET(0xE4E9BD0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0xE4DFFB0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_821C1C1AA9B9E7BB_OFFSET UNITYSDK_OFFSET(0xE4E1AC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_82493A5F1641844D_OFFSET UNITYSDK_OFFSET(0xE4E5440)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_82DCD4603E72B47F_OFFSET UNITYSDK_OFFSET(0xE4E89B0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_1_OFFSET UNITYSDK_OFFSET(0xE4E6B40)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_2_OFFSET UNITYSDK_OFFSET(0xE4E7580)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_OFFSET UNITYSDK_OFFSET(0xE4E3EF0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_856E9580BF994E0B_OFFSET UNITYSDK_OFFSET(0xE4E8A60)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_8AE0D3C6E9D726C2_OFFSET UNITYSDK_OFFSET(0xE4E9300)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_8CC7E2708F4091FD_OFFSET UNITYSDK_OFFSET(0xE4E00A0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9029E83BC00E3103_OFFSET UNITYSDK_OFFSET(0xE4E9B80)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_90393D6C25AA22AD_OFFSET UNITYSDK_OFFSET(0xE4E6BB0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_948335CFD427FFB7_OFFSET UNITYSDK_OFFSET(0xE4E4E20)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_959EA7F0CFC6F442_OFFSET UNITYSDK_OFFSET(0xE4E85D0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_10_OFFSET UNITYSDK_OFFSET(0xE4E7670)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_11_OFFSET UNITYSDK_OFFSET(0xE4E8160)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_12_OFFSET UNITYSDK_OFFSET(0xE4E5C10)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_13_OFFSET UNITYSDK_OFFSET(0xE4E9030)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_14_OFFSET UNITYSDK_OFFSET(0xE4E93A0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_15_OFFSET UNITYSDK_OFFSET(0xE4E9440)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_16_OFFSET UNITYSDK_OFFSET(0xE4E0EC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_17_OFFSET UNITYSDK_OFFSET(0xE4E97F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_1_OFFSET UNITYSDK_OFFSET(0xE4E3440)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_2_OFFSET UNITYSDK_OFFSET(0xE4E48F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_3_OFFSET UNITYSDK_OFFSET(0xE4E4D80)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_4_OFFSET UNITYSDK_OFFSET(0xE4E52E0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_5_OFFSET UNITYSDK_OFFSET(0xE4E2A20)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_6_OFFSET UNITYSDK_OFFSET(0xE4E5F70)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_7_OFFSET UNITYSDK_OFFSET(0xE4E2180)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_8_OFFSET UNITYSDK_OFFSET(0xE4DF990)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_9_OFFSET UNITYSDK_OFFSET(0xE4E6930)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_OFFSET UNITYSDK_OFFSET(0xE4E18C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CC92B02767ACFC2_OFFSET UNITYSDK_OFFSET(0xE4E4230)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A383F8D02147EAEF_OFFSET UNITYSDK_OFFSET(0xE4E5CB0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A6263B04DA59DCF9_OFFSET UNITYSDK_OFFSET(0xE4E78D0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A64E42DA627D76D8_OFFSET UNITYSDK_OFFSET(0xE4E6430)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AAABB086BCE4614F_OFFSET UNITYSDK_OFFSET(0xE4E4170)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_ADAAAF55D03F6671_OFFSET UNITYSDK_OFFSET(0xE4E1070)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AEAB2AEA745F774F_1_OFFSET UNITYSDK_OFFSET(0xE4E74C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AEAB2AEA745F774F_OFFSET UNITYSDK_OFFSET(0xE4E13B0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AFC4242440B0B88F_OFFSET UNITYSDK_OFFSET(0xE4E2000)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B3A58706D62F8AF5_OFFSET UNITYSDK_OFFSET(0xE4DFA40)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B7803B8053514C39_OFFSET UNITYSDK_OFFSET(0xE4E6120)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B88D67C78D2EEBD4_OFFSET UNITYSDK_OFFSET(0xE4E3DC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BB93185F652D8E8B_OFFSET UNITYSDK_OFFSET(0xE4E34E0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BC3D63492246CA32_OFFSET UNITYSDK_OFFSET(0xE4E5030)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BDFF3F06E8F14287_OFFSET UNITYSDK_OFFSET(0xE4E6570)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BE4E469CC6DA73F5_OFFSET UNITYSDK_OFFSET(0xE4E1700)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BF93C93F570E4D30_1_OFFSET UNITYSDK_OFFSET(0xE4DF640)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BF93C93F570E4D30_OFFSET UNITYSDK_OFFSET(0xE4DF0C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_C3B113AF6205EF51_OFFSET UNITYSDK_OFFSET(0xE4E6020)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_C4762792007850BF_OFFSET UNITYSDK_OFFSET(0xE4E22D0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_CF37793862AFC924_OFFSET UNITYSDK_OFFSET(0xE4E7DA0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D268B5E2292ACADA_OFFSET UNITYSDK_OFFSET(0xE4E8E60)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D4CFB147AD7BE715_OFFSET UNITYSDK_OFFSET(0xE4E4A90)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D8F8C1DD3B73FCF3_OFFSET UNITYSDK_OFFSET(0xE4E2AC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D968D043370E234B_OFFSET UNITYSDK_OFFSET(0xE4E4AE0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_DBFE4D20F170C902_OFFSET UNITYSDK_OFFSET(0xE4E2220)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_DF56406496D42172_OFFSET UNITYSDK_OFFSET(0xE4E90E0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E04AEA547228FCF4_OFFSET UNITYSDK_OFFSET(0xE4E0D00)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E6CADB9E09328A57_OFFSET UNITYSDK_OFFSET(0xE4E8AF0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E97045667027FD62_OFFSET UNITYSDK_OFFSET(0xE4E57F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_EDB3A59FAE662702_OFFSET UNITYSDK_OFFSET(0xE4DF370)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F08183F245BCB533_OFFSET UNITYSDK_OFFSET(0xE4DF5F0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F550E8100D12365B_OFFSET UNITYSDK_OFFSET(0xE4E1960)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F97578C9480A711E_OFFSET UNITYSDK_OFFSET(0xE4E8BB0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F9C276D90C2CEF73_1_OFFSET UNITYSDK_OFFSET(0xE4E7CC0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F9C276D90C2CEF73_OFFSET UNITYSDK_OFFSET(0xE4E2B10)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FBF8F8068FB3B509_OFFSET UNITYSDK_OFFSET(0xE4E1C80)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FC3817E00FDD36DA_OFFSET UNITYSDK_OFFSET(0xE4E82C0)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FE6F4179580F60F9_OFFSET UNITYSDK_OFFSET(0xE4E2640)
#define CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FFD07A9E0F80F7E4_OFFSET UNITYSDK_OFFSET(0xE4DF1E0)

inline static constexpr unsigned int Class_1_A8C9DCC241B1CB1E_TypeDefinitionIndex = 62100;

class Class_1_A8C9DCC241B1CB1E : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 Method_1_BF93C93F570E4D30(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BF93C93F570E4D30_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EDB3A59FAE662702(::UnityEngine::Renderer* a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_EDB3A59FAE662702_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_10867B69EFBCA83E_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_0CD5C98F33CDD2B7(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0CD5C98F33CDD2B7_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F08183F245BCB533(::Enum_3_259E81F297BD0CD1 a1, ::Enum_3_259E81F297BD0CD1 a2)
	{
		return ((::System::Boolean(*)(::Enum_3_259E81F297BD0CD1, ::Enum_3_259E81F297BD0CD1))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F08183F245BCB533_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_BF93C93F570E4D30_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BF93C93F570E4D30_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_B3A58706D62F8AF5(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Single(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B3A58706D62F8AF5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_0BE913F94ECC2B4A(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0BE913F94ECC2B4A_OFFSET))(a1);
	}

	static ::System::Single Method_1_47E09ABA15A05E7B(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_47E09ABA15A05E7B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_100C89922FD6B9B8(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_3F2F02D8DC52A787(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3F2F02D8DC52A787_OFFSET))(a1);
	}

	static ::System::Void Method_1_100C89922FD6B9B8_1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E04AEA547228FCF4(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E04AEA547228FCF4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_1_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_8CC7E2708F4091FD(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::Class_1_A8C9DCC241B1CB1E_Enum_3_DA1171F297D2E5CC a3)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::Class_1_A8C9DCC241B1CB1E_Enum_3_DA1171F297D2E5CC))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_8CC7E2708F4091FD_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_ADAAAF55D03F6671(::Il2CppArray<::System::Single>* a1)
	{
		return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_ADAAAF55D03F6671_OFFSET))(a1);
	}

	static ::MoleMole::Vector2Int Method_1_194B3A312318E87E(::MoleMole::HollowChessPieceSizeType a1)
	{
		return ((::MoleMole::Vector2Int(*)(::MoleMole::HollowChessPieceSizeType))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_194B3A312318E87E_OFFSET))(a1);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> Method_1_AEAB2AEA745F774F(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AEAB2AEA745F774F_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_2A2681CDA00CA39F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2681CDA00CA39F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_2(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F550E8100D12365B(::System::Double a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F550E8100D12365B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_3EEFBF32DE201A4C(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EEFBF32DE201A4C_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_821C1C1AA9B9E7BB(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_821C1C1AA9B9E7BB_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FBF8F8068FB3B509(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FBF8F8068FB3B509_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector2 Method_1_3EEFBF32DE201A4C_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EEFBF32DE201A4C_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_AFC4242440B0B88F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AFC4242440B0B88F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_3(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_DBFE4D20F170C902(::System::UInt32& a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_DBFE4D20F170C902_OFFSET))(a1, a2, a3);
	}

	static ::System::Nullable_1<::System::Single> Method_1_C4762792007850BF(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_C4762792007850BF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_4(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_4_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_BE4E469CC6DA73F5(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BE4E469CC6DA73F5_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D8F8C1DD3B73FCF3(::UnityEngine::LayerMask a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::LayerMask, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D8F8C1DD3B73FCF3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F9C276D90C2CEF73(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F9C276D90C2CEF73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_OFFSET))(a1, a2);
	}

	static ::Share::GridDir Method_1_5C5E879DFAFE06C7(::Enum_3_4608E37A1B3D374A_3 a1)
	{
		return ((::Share::GridDir(*)(::Enum_3_4608E37A1B3D374A_3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_5C5E879DFAFE06C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BB93185F652D8E8B(::System::Double a1, ::System::Double a2, ::System::Double a3, ::System::Double a4, ::System::Nullable_1<::System::Double>& a5, ::System::Nullable_1<::System::Double>& a6, ::System::Nullable_1<::System::Double>& a7)
	{
		return ((::System::Void(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BB93185F652D8E8B_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::UnityEngine::Vector3 Method_1_10867B69EFBCA83E_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_10867B69EFBCA83E_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_832FA1F2C8BEE05F(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0250D52800ED8EFB(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0250D52800ED8EFB_OFFSET))(a1);
	}

	static ::System::Single Method_1_AAABB086BCE4614F(::System::Single a1, ::Class_1_A8C9DCC241B1CB1E_Struct_2_066F79011AD57EF8& a2)
	{
		return ((::System::Single(*)(::System::Single, ::Class_1_A8C9DCC241B1CB1E_Struct_2_066F79011AD57EF8&))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AAABB086BCE4614F_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_9CC92B02767ACFC2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CC92B02767ACFC2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_181C60B2ED879E1B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_181C60B2ED879E1B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_56013A1299E78069(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_3F2F02D8DC52A787_1(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3F2F02D8DC52A787_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_2(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_2_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_56013A1299E78069_1(::System::Single a1, ::UnityEngine::Keyframe a2, ::UnityEngine::Keyframe a3)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_D4CFB147AD7BE715(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D4CFB147AD7BE715_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_3(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_3_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_948335CFD427FFB7(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_948335CFD427FFB7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_11DB6989C5753AC9(::System::Byte& a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_11DB6989C5753AC9_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_BC3D63492246CA32(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BC3D63492246CA32_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_65AA567D8110DF21(::UnityEngine::Material* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_65AA567D8110DF21_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_4(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_4_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_4DE530A7F5AC3C83(::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection a1)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4DE530A7F5AC3C83_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_82493A5F1641844D(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_82493A5F1641844D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_5(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58CA15E0AAB9E008(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_58CA15E0AAB9E008_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_E97045667027FD62(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E97045667027FD62_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_5(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_5_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_A383F8D02147EAEF(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A383F8D02147EAEF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A2D4037ABF72FAC(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2D4037ABF72FAC_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationCurve* Method_1_06F2B31AE63FF939(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_06F2B31AE63FF939_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_6(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_7(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_7_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_C3B113AF6205EF51(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_C3B113AF6205EF51_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B7803B8053514C39(::UnityEngine::Renderer* a1, ::UnityEngine::Camera* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B7803B8053514C39_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_8(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_8_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_A64E42DA627D76D8(::System::Random* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Random*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A64E42DA627D76D8_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_2D131943F229C128(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2D131943F229C128_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Quaternion Method_1_BDFF3F06E8F14287(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_BDFF3F06E8F14287_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0EC723229F2155F6(::System::UInt64 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0EC723229F2155F6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_495C2C3DBC55920D(::System::Double a1, ::System::Double a2, ::System::Double a3, ::System::Nullable_1<::System::Double>& a4, ::System::Nullable_1<::System::Double>& a5)
	{
		return ((::System::Void(*)(::System::Double, ::System::Double, ::System::Double, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_495C2C3DBC55920D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_9(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_58CA15E0AAB9E008_1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_58CA15E0AAB9E008_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_832FA1F2C8BEE05F_1(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_1_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_90393D6C25AA22AD(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_90393D6C25AA22AD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_6(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_6_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_B88D67C78D2EEBD4(::System::Double a1)
	{
		return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_B88D67C78D2EEBD4_OFFSET))(a1);
	}

	static ::System::Single Method_1_216F2D1EDDCD7E5D(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_216F2D1EDDCD7E5D_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Void Method_1_414619A8535DF3F5(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_414619A8535DF3F5_OFFSET))(a1, a2, a3);
	}

	static ::System::ValueTuple_2<::System::String*, ::System::String*> Method_1_AEAB2AEA745F774F_1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_AEAB2AEA745F774F_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_832FA1F2C8BEE05F_2(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_832FA1F2C8BEE05F_2_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_2025DD35291324CA(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2025DD35291324CA_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_10(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_10_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5DA109C60798AEDF(::UnityEngine::ParticleSystem* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_5DA109C60798AEDF_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_A6263B04DA59DCF9(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_A6263B04DA59DCF9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_CF37793862AFC924(::System::UInt16& a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt16&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_CF37793862AFC924_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_100C89922FD6B9B8_2(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_100C89922FD6B9B8_2_OFFSET))(a1, a2);
	}

	static ::System::Nullable_1<::System::Single> Method_1_4B72DE7620C42895(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4B72DE7620C42895_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_56013A1299E78069_2(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_56013A1299E78069_2_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Keyframe Method_1_496989DF316BF169(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::Keyframe(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_496989DF316BF169_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_11(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2A2D4037ABF72FAC_1(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2A2D4037ABF72FAC_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC3817E00FDD36DA(::System::Nullable_1<::System::Double>& a1)
	{
		return ((::System::Void(*)(::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FC3817E00FDD36DA_OFFSET))(a1);
	}

	static ::System::Void Method_1_4CD8274CBBC07FDA(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_4CD8274CBBC07FDA_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_959EA7F0CFC6F442(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_959EA7F0CFC6F442_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_74CFB596EC7BBEE7(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_74CFB596EC7BBEE7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_82DCD4603E72B47F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_82DCD4603E72B47F_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_856E9580BF994E0B(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_856E9580BF994E0B_OFFSET))(a1);
	}

	static ::System::Void Method_1_E6CADB9E09328A57(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_E6CADB9E09328A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F97578C9480A711E(::System::UInt64& a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt64&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F97578C9480A711E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Keyframe Method_1_496989DF316BF169_1(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::Keyframe(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_496989DF316BF169_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_6F6DA84AD57EF450(::UnityEngine::Vector2 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_6F6DA84AD57EF450_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_12(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_12_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D268B5E2292ACADA(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D268B5E2292ACADA_OFFSET))(a1);
	}

	static ::UnityEngine::GameObject* Method_1_0CD5C98F33CDD2B7_1(::UnityEngine::GameObject* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0CD5C98F33CDD2B7_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_13(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_13_OFFSET))(a1, a2);
	}

	static ::UnityEngine::AnimationClip* Method_1_DF56406496D42172(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::UnityEngine::AnimationClip*(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_DF56406496D42172_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8AE0D3C6E9D726C2(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_8AE0D3C6E9D726C2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_14(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_14_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_15(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_15_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_244486F131336ADC(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_244486F131336ADC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0DD029CB43957F2C(::System::UInt16 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_0DD029CB43957F2C_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Vector3 Method_1_3EED001F3AB271F9(::UnityEngine::Vector3 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_3EED001F3AB271F9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_16(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_16_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_7(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9CA085A47EEC897C_17(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9CA085A47EEC897C_17_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_F9C276D90C2CEF73_1(::UnityEngine::Keyframe a1, ::UnityEngine::Keyframe a2)
	{
		return ((::System::Single(*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_F9C276D90C2CEF73_1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_114640939C6C7CB3(::UnityEngine::Renderer* a1, ::UnityEngine::Camera* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Renderer*, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_114640939C6C7CB3_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2CDF77691AC08DE9(::System::Byte a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_2CDF77691AC08DE9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1D62D1F63289ABC5_8(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_1D62D1F63289ABC5_8_OFFSET))(a1, a2);
	}

	static ::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_D968D043370E234B(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_D968D043370E234B_OFFSET))(a1);
	}

	static ::System::Single Method_1_FFD07A9E0F80F7E4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FFD07A9E0F80F7E4_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9029E83BC00E3103(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_9029E83BC00E3103_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_78789D5ED1D841A5(::System::Single a1, ::UnityEngine::Keyframe a2, ::UnityEngine::Keyframe a3, ::System::Nullable_1<::System::Double>& a4, ::System::Nullable_1<::System::Double>& a5, ::System::Nullable_1<::System::Double>& a6)
	{
		return ((::System::Void(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&, ::System::Nullable_1<::System::Double>&))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_78789D5ED1D841A5_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Nullable_1<::System::Single> Method_1_FE6F4179580F60F9(::System::Single a1, ::UnityEngine::Keyframe a2, ::UnityEngine::Keyframe a3)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CLASS_1_A8C9DCC241B1CB1E_METHOD_1_FE6F4179580F60F9_OFFSET))(a1, a2, a3);
	}
};
