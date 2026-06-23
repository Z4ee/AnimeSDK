#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_36C53D9EA9D387DA_Struct_2_8FA3148BBF6A5F8F.h"
#include "unitysdk/Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A.h"
#include "unitysdk/Class_3_36C53D9EA9D387DA_Struct_2_A95FF042258407EB.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Enum_3_FBFD6F7304B717CB.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/Struct_2_1FECD91D0D96D615.h"
#include "unitysdk/Struct_2_59B75B1187A36D41.h"
#include "unitysdk/Struct_2_59BB5B1187A75668.h"
#include "unitysdk/Struct_2_5AFE997A29C5CC8E.h"
#include "unitysdk/Struct_2_6A83F663CE355337.h"
#include "unitysdk/Struct_2_724ED1539B434FD1.h"
#include "unitysdk/Struct_2_92DA5310F390EF4D.h"
#include "unitysdk/Struct_2_EAB16E85919A63B8.h"
#include "unitysdk/Struct_2_EEDD869A38892817.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C874A3981BDAA3B2;
class Class_2_56E52A077EEA0DC0;
class Class_3_09C6D749A1B6BB3E;
class Class_3_757A5862D4BBEE41;
class Class_3_AF7A56E03A4D3952;
class Class_3_DFD5D1FDB9D2A4AC;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole { class MonoFollowJointMoveElement; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_36C53D9EA9D387DA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x17FB6C20)
#define CLASS_3_36C53D9EA9D387DA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x17FB71F0)
#define CLASS_3_36C53D9EA9D387DA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17FB7090)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_0245CE3914B024F3_OFFSET UNITYSDK_OFFSET(0x17FC0D80)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_03048DC9BCA3A1B1_OFFSET UNITYSDK_OFFSET(0x17FBFC90)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_06A32D8FC244C7A0_OFFSET UNITYSDK_OFFSET(0x17FC6850)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_073D02112DF8EA32_OFFSET UNITYSDK_OFFSET(0x17FBA340)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_098BDC7D15678F1B_OFFSET UNITYSDK_OFFSET(0x17FC9FC0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_0D37E0C23B8D8BEA_OFFSET UNITYSDK_OFFSET(0x17FC9F10)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_0D386D2E50D5FBAE_OFFSET UNITYSDK_OFFSET(0x17FC0D00)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x17FBEDD0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x17FBEC60)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_147D4C144AD62F87_1_OFFSET UNITYSDK_OFFSET(0x17FCC050)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_147D4C144AD62F87_OFFSET UNITYSDK_OFFSET(0x17FC0930)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_17B09E527DBC8AD0_OFFSET UNITYSDK_OFFSET(0x17FCA370)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_1BDCE7278D1CBE6C_OFFSET UNITYSDK_OFFSET(0x17FB92C0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_1F4A3B8AFCE307CC_OFFSET UNITYSDK_OFFSET(0x17FBBA50)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_23B1B1E3F9A4D4CD_OFFSET UNITYSDK_OFFSET(0x17FCAB80)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_245C714485554CFE_OFFSET UNITYSDK_OFFSET(0x17FC9350)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_245F32FDB3998DFC_OFFSET UNITYSDK_OFFSET(0x17FC3910)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x17FCB570)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_2729A79C2B12F6AB_OFFSET UNITYSDK_OFFSET(0x17FB94F0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_291D463BB1648C58_OFFSET UNITYSDK_OFFSET(0x17FC1080)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_2C3A4BC5C18F358E_OFFSET UNITYSDK_OFFSET(0x17FB8F90)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_2E3E0393D24EE844_OFFSET UNITYSDK_OFFSET(0x17FB9630)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_2F6ECAEAC085A4A8_OFFSET UNITYSDK_OFFSET(0x17FC7820)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_316E286670A75F9E_OFFSET UNITYSDK_OFFSET(0x17FC78E0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x17FB6650)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x17FC6740)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x17FC12F0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_33C4580736D2212B_OFFSET UNITYSDK_OFFSET(0x17FB9E40)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_3599DEE0FD554A00_OFFSET UNITYSDK_OFFSET(0x17FCB8F0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_37585C44025476F4_OFFSET UNITYSDK_OFFSET(0x17FC3BF0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_39B6A6C04C60B5B3_OFFSET UNITYSDK_OFFSET(0x17FC63C0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_3D52830B9B1686B0_OFFSET UNITYSDK_OFFSET(0x17FC0FA0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_3F8290FED8FB09C2_OFFSET UNITYSDK_OFFSET(0x17FCB330)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_46B98E3BEE918F5B_OFFSET UNITYSDK_OFFSET(0x17FC93B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_49CF98CAD120A4FE_OFFSET UNITYSDK_OFFSET(0x17FC7760)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_500BDD1E218E20AB_OFFSET UNITYSDK_OFFSET(0x17FCA210)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_52510BD88B41746B_OFFSET UNITYSDK_OFFSET(0x17FBB020)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_527FF7FABB19D708_1_OFFSET UNITYSDK_OFFSET(0x17FBF1E0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_527FF7FABB19D708_OFFSET UNITYSDK_OFFSET(0x17FB7560)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_55C674E40B5FF6A8_OFFSET UNITYSDK_OFFSET(0x17FCBB40)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_56598A8DA968C4AD_OFFSET UNITYSDK_OFFSET(0x17FC5190)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x17FBDF60)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_5908FBC7610A8A8A_OFFSET UNITYSDK_OFFSET(0x17FBD240)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_5C06843F1F58E1F2_OFFSET UNITYSDK_OFFSET(0x17FC4C40)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_5EB8FB5EC9256F6E_OFFSET UNITYSDK_OFFSET(0x17FCBA90)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_613B4D4B1B11DA9D_OFFSET UNITYSDK_OFFSET(0x17FC9DC0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x17FBE220)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_6AFD4F472B6E21B5_OFFSET UNITYSDK_OFFSET(0x17FB9D70)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_6D06C81D57703B51_OFFSET UNITYSDK_OFFSET(0x17FBEBC0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_1_OFFSET UNITYSDK_OFFSET(0x17FC38B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_2_OFFSET UNITYSDK_OFFSET(0x17FC7600)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_3_OFFSET UNITYSDK_OFFSET(0x17FCD880)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x17FBECD0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_7381FB9FF384BD6A_OFFSET UNITYSDK_OFFSET(0x17FBCB20)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_73FDEFF1E5C241FD_OFFSET UNITYSDK_OFFSET(0x17FB7D30)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_780C3CDFCABAB0B0_OFFSET UNITYSDK_OFFSET(0x17FC6FD0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_7D731D40152A28E2_OFFSET UNITYSDK_OFFSET(0x17FC88D0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_7DFE9E46521F3AF1_OFFSET UNITYSDK_OFFSET(0x17FC6F70)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_7EDC490C928301D9_OFFSET UNITYSDK_OFFSET(0x17FC66C0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_84E4D65DFC681E1D_OFFSET UNITYSDK_OFFSET(0x17FC96D0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x17FB69A0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8653BF5E3E51C876_OFFSET UNITYSDK_OFFSET(0x17FBEE40)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_86E72231BD6EB376_OFFSET UNITYSDK_OFFSET(0x17FBB6C0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_88208561C1BAA5AA_OFFSET UNITYSDK_OFFSET(0x17FBBCF0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8844ECD88794AABE_OFFSET UNITYSDK_OFFSET(0x17FC54B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_89DA04E9FA142523_OFFSET UNITYSDK_OFFSET(0x17FB7C30)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8AAAE50F156B6255_OFFSET UNITYSDK_OFFSET(0x17FBB190)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8D22865A7E6A3D58_OFFSET UNITYSDK_OFFSET(0x17FC9C30)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8F697642FBF3BDA7_1_OFFSET UNITYSDK_OFFSET(0x17FC6330)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x17FBED40)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_950F3CB497B80D61_OFFSET UNITYSDK_OFFSET(0x17FCC420)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_9B65FB1AD2C06A2E_OFFSET UNITYSDK_OFFSET(0x17FBA7A0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_A2CD2A2CB00FD598_OFFSET UNITYSDK_OFFSET(0x17FCA710)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_A34FAD7A3FD7AD04_OFFSET UNITYSDK_OFFSET(0x17FC0180)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_A92249F7EC9585D4_OFFSET UNITYSDK_OFFSET(0x17FCAAF0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_AC53873B4E15FB56_OFFSET UNITYSDK_OFFSET(0x17FB77B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_ACB38D2084B08FEA_OFFSET UNITYSDK_OFFSET(0x17FC5FE0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_AD826B25465D0838_OFFSET UNITYSDK_OFFSET(0x17FCAF10)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_B4186F9233C7A8EA_OFFSET UNITYSDK_OFFSET(0x17FC44B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x17FC76F0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x17FCB2A0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_BAF2D37E75F524BE_OFFSET UNITYSDK_OFFSET(0x17FB8D80)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_BC6406D2C67CDE5A_OFFSET UNITYSDK_OFFSET(0x17FBD3F0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_C4C9164268F72139_OFFSET UNITYSDK_OFFSET(0x17FBF430)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17FBFC00)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x17FC08E0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x17FC4420)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x17FC7570)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x17FC7660)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x17FCBA00)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17FBFBC0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_CAECAD009B52B514_OFFSET UNITYSDK_OFFSET(0x17FBBC30)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_D0EC10BACB5DC7D3_OFFSET UNITYSDK_OFFSET(0x17FC5420)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_D40AEACBF23D3511_OFFSET UNITYSDK_OFFSET(0x17FC9670)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_D6559074E018F2FC_OFFSET UNITYSDK_OFFSET(0x17FC8A10)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_D8FBDEE3B8B2C139_OFFSET UNITYSDK_OFFSET(0x17FC9040)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_DC407F13C8F8D585_OFFSET UNITYSDK_OFFSET(0x17FBAE30)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_DF5F22F7DA20AD13_OFFSET UNITYSDK_OFFSET(0x17FC7C50)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_E45785348CC14D7F_OFFSET UNITYSDK_OFFSET(0x17FB93C0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_E6EE9DE7FAC1CC48_OFFSET UNITYSDK_OFFSET(0x17FC31B0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x17FC1400)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_EFFDD7682B6EBE68_OFFSET UNITYSDK_OFFSET(0x17FCAC10)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_F21457242A1A6D37_OFFSET UNITYSDK_OFFSET(0x17FCBB90)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_F4A5CA6866FB1516_OFFSET UNITYSDK_OFFSET(0x17FC02D0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_FDB04AA2FC8C2F18_OFFSET UNITYSDK_OFFSET(0x17FBC0A0)
#define CLASS_3_36C53D9EA9D387DA_METHOD_3_FF886D7D5435E08C_OFFSET UNITYSDK_OFFSET(0x17FBCA60)
#define CLASS_3_36C53D9EA9D387DA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17FB68A0)
#define CLASS_3_36C53D9EA9D387DA_START_OFFSET UNITYSDK_OFFSET(0x17FB6570)
#define CLASS_3_36C53D9EA9D387DA_UPDATE_OFFSET UNITYSDK_OFFSET(0x17FB7370)
#define CLASS_3_36C53D9EA9D387DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FB7540)
#define CLASS_3_36C53D9EA9D387DA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB74E0)

inline static constexpr unsigned int Class_3_36C53D9EA9D387DA_TypeDefinitionIndex = 69835;

class Class_3_36C53D9EA9D387DA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_36C53D9EA9D387DA** StaticGet_Field_3_0()
	{
		return (::Class_3_36C53D9EA9D387DA**)Il2CppClass::FromTypeDefinitionIndex(Class_3_36C53D9EA9D387DA_TypeDefinitionIndex)->GetStaticField(0x322F0);
	}
	static ::System::Single* StaticGet_Field_3_19()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_36C53D9EA9D387DA_TypeDefinitionIndex)->GetStaticField(0xC040);
	}
	static ::System::Single* StaticGet_Field_3_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_36C53D9EA9D387DA_TypeDefinitionIndex)->GetStaticField(0xC044);
	}
	static ::System::Single* StaticGet_Field_3_20()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_36C53D9EA9D387DA_TypeDefinitionIndex)->GetStaticField(0xC048);
	}
	static ::System::UInt32* StaticGet_Field_3_17()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_36C53D9EA9D387DA_TypeDefinitionIndex)->GetStaticField(0xC04C);
	}
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_724ED1539B434FD1>* Field_3_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_10; // 0x28
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_6A83F663CE355337>* Field_3_4; // 0x30
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_5AFE997A29C5CC8E>* Field_3_1; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>* Field_3_9; // 0x40
	::Nap::NapECS::EcsFilter* Field_3_22; // 0x48
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_1FECD91D0D96D615>* Field_3_8; // 0x50
	::System::Collections::Generic::List_1<::Class_1_C874A3981BDAA3B2*>* Field_3_11; // 0x58
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_59BB5B1187A75668>* Field_3_5; // 0x60
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_EAB16E85919A63B8>* Field_3_3; // 0x68
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_EEDD869A38892817>* Field_3_2; // 0x70
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_59B75B1187A36D41>* Field_3_7; // 0x78
	::Nap::NapECS::EcsFilter* Field_3_21; // 0x80
	::Unity::Jobs::JobHandle Field_3_12; // 0x88
	::System::Boolean Field_3_14; // 0x98
	::System::Boolean Field_3_13; // 0x99
	::System::Boolean Field_3_15; // 0x9A
	::Class_3_36C53D9EA9D387DA_Struct_2_A95FF042258407EB Field_3_16; // 0x9B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_UPDATE_OFFSET))(this);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_527FF7FABB19D708_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_AC53873B4E15FB56(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_AC53873B4E15FB56_OFFSET))(a1);
	}

	static ::System::Void Method_3_89DA04E9FA142523(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_89DA04E9FA142523_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BAF2D37E75F524BE(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_BAF2D37E75F524BE_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_3_1BDCE7278D1CBE6C(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3, ::FluffyUnderware::Curvy::CurvySplineSegment* a4)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_1BDCE7278D1CBE6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_2729A79C2B12F6AB(::Class_3_AF7A56E03A4D3952* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_2729A79C2B12F6AB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2E3E0393D24EE844(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_FBFD6F7304B717CB a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_FBFD6F7304B717CB, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_2E3E0393D24EE844_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_33C4580736D2212B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_33C4580736D2212B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B65FB1AD2C06A2E(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::Class_1_C874A3981BDAA3B2* a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_9B65FB1AD2C06A2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_8AAAE50F156B6255(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8AAAE50F156B6255_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_7381FB9FF384BD6A(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_7381FB9FF384BD6A_OFFSET))(a1);
	}

	static ::System::Void Method_3_5908FBC7610A8A8A(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_5908FBC7610A8A8A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_BC6406D2C67CDE5A(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_BC6406D2C67CDE5A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_56E8ED155DF34A44_OFFSET))(this);
	}

	static ::System::Void Method_3_86E72231BD6EB376(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_86E72231BD6EB376_OFFSET))(a1);
	}

	::System::Void Method_3_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8653BF5E3E51C876(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8653BF5E3E51C876_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_FF886D7D5435E08C(::Class_3_AF7A56E03A4D3952* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::Int32, ::System::Int32, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_FF886D7D5435E08C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_03048DC9BCA3A1B1(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_03048DC9BCA3A1B1_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	static ::System::Void Method_3_147D4C144AD62F87(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_147D4C144AD62F87_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_0245CE3914B024F3(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Boolean(*)(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_0245CE3914B024F3_OFFSET))(a1);
	}

	::System::Void Method_3_3D52830B9B1686B0(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_757A5862D4BBEE41* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Class_3_757A5862D4BBEE41*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_3D52830B9B1686B0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6D06C81D57703B51(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_6D06C81D57703B51_OFFSET))(this, a1);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	static ::System::Void Method_3_E6EE9DE7FAC1CC48(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2, ::System::Boolean a3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a4, ::System::Boolean a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_E6EE9DE7FAC1CC48_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_1(::Class_3_36C53D9EA9D387DA* a1)
	{
		return ((::System::Void(*)(::Class_3_36C53D9EA9D387DA*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_1_OFFSET))(a1);
	}

	static ::System::Void Method_3_245F32FDB3998DFC(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3 a2, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_245F32FDB3998DFC_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Void Method_3_B4186F9233C7A8EA(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6, ::Class_1_C874A3981BDAA3B2* a7)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_B4186F9233C7A8EA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_3_52510BD88B41746B(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_52510BD88B41746B_OFFSET))(a1);
	}

	static ::System::Void Method_3_073D02112DF8EA32(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment*& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_073D02112DF8EA32_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection Method_3_ACB38D2084B08FEA(::Class_3_36C53D9EA9D387DA_Struct_2_8FA3148BBF6A5F8F& a1)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection(*)(::Class_3_36C53D9EA9D387DA_Struct_2_8FA3148BBF6A5F8F&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_ACB38D2084B08FEA_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_C4C9164268F72139(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_C4C9164268F72139_OFFSET))(a1);
	}

	::System::Void Method_3_8F697642FBF3BDA7_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8F697642FBF3BDA7_1_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_39B6A6C04C60B5B3(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AF7A56E03A4D3952* a2, ::System::Boolean a3, ::Class_1_C874A3981BDAA3B2* a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_39B6A6C04C60B5B3_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET))(this);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_6AFD4F472B6E21B5(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_6AFD4F472B6E21B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_06A32D8FC244C7A0(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_06A32D8FC244C7A0_OFFSET))(a1);
	}

	static ::System::Void Method_3_7DFE9E46521F3AF1(::Class_3_AF7A56E03A4D3952* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_7DFE9E46521F3AF1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_780C3CDFCABAB0B0(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_780C3CDFCABAB0B0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_2(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_56E52A077EEA0DC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56E52A077EEA0DC0*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_49CF98CAD120A4FE(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_49CF98CAD120A4FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2F6ECAEAC085A4A8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_2F6ECAEAC085A4A8_OFFSET))(a1);
	}

	static ::System::Void Method_3_316E286670A75F9E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AF7A56E03A4D3952* a2, ::Class_3_09C6D749A1B6BB3E* a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AF7A56E03A4D3952*, ::Class_3_09C6D749A1B6BB3E*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_316E286670A75F9E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_DF5F22F7DA20AD13(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::Class_1_C874A3981BDAA3B2* a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_DF5F22F7DA20AD13_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Quaternion Method_3_D6559074E018F2FC(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Quaternion a5)
	{
		return ((::UnityEngine::Quaternion(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_D6559074E018F2FC_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_3_DC407F13C8F8D585(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_DC407F13C8F8D585_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_37585C44025476F4(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_757A5862D4BBEE41* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_757A5862D4BBEE41*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_37585C44025476F4_OFFSET))(a1, a2, a3, a4);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum Method_3_D0EC10BACB5DC7D3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_D0EC10BACB5DC7D3_OFFSET))(a1);
	}

	static ::Class_3_36C53D9EA9D387DA* Method_3_D40AEACBF23D3511()
	{
		return ((::Class_3_36C53D9EA9D387DA*(*)())((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_D40AEACBF23D3511_OFFSET))();
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_84E4D65DFC681E1D(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_84E4D65DFC681E1D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_8D22865A7E6A3D58(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_FBFD6F7304B717CB a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Enum_3_FBFD6F7304B717CB, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8D22865A7E6A3D58_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_613B4D4B1B11DA9D(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_FBFD6F7304B717CB a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_FBFD6F7304B717CB, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_613B4D4B1B11DA9D_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_0D37E0C23B8D8BEA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_0D37E0C23B8D8BEA_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_098BDC7D15678F1B(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_098BDC7D15678F1B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_73FDEFF1E5C241FD(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_73FDEFF1E5C241FD_OFFSET))(a1);
	}

	::System::Void Method_3_A2CD2A2CB00FD598(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_A2CD2A2CB00FD598_OFFSET))(this, a1);
	}

	::System::Void Method_3_A92249F7EC9585D4(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_FBFD6F7304B717CB a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Enum_3_FBFD6F7304B717CB, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_A92249F7EC9585D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_23B1B1E3F9A4D4CD(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_23B1B1E3F9A4D4CD_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_EFFDD7682B6EBE68(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_EFFDD7682B6EBE68_OFFSET))(a1);
	}

	static ::System::Single Method_3_46B98E3BEE918F5B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_46B98E3BEE918F5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_8844ECD88794AABE(::FluffyUnderware::Curvy::CurvySplineSegment* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_8844ECD88794AABE_OFFSET))(a1, a2);
	}

	::System::Void Method_3_7EDC490C928301D9(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::MonoFollowJointMoveElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::MoleMole::MonoFollowJointMoveElement*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_7EDC490C928301D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AD826B25465D0838(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_AD826B25465D0838_OFFSET))(this, a1);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_88208561C1BAA5AA(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_88208561C1BAA5AA_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_3F8290FED8FB09C2(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_3F8290FED8FB09C2_OFFSET))(this, a1);
	}

	::System::Void Method_3_3599DEE0FD554A00(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_3599DEE0FD554A00_OFFSET))(this, a1);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_85377D41FEE05B66_OFFSET))(this);
	}

	static ::System::Void Method_3_D8FBDEE3B8B2C139(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Quaternion a2, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a3, ::System::Boolean a4, ::Class_1_C874A3981BDAA3B2* a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_D8FBDEE3B8B2C139_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_5EB8FB5EC9256F6E(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_5EB8FB5EC9256F6E_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_527FF7FABB19D708_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_56598A8DA968C4AD(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_56598A8DA968C4AD_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_55C674E40B5FF6A8(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_55C674E40B5FF6A8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5C06843F1F58E1F2(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_5C06843F1F58E1F2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_3_17B09E527DBC8AD0(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Boolean(*)(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_17B09E527DBC8AD0_OFFSET))(a1);
	}

	static ::System::Void Method_3_F21457242A1A6D37(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_F21457242A1A6D37_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_147D4C144AD62F87_1(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_147D4C144AD62F87_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_950F3CB497B80D61(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_950F3CB497B80D61_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2C3A4BC5C18F358E(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_2C3A4BC5C18F358E_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType Method_3_7D731D40152A28E2(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a2)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_7D731D40152A28E2_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_1F4A3B8AFCE307CC(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_1F4A3B8AFCE307CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_724D2338ACD3E8A3_3_OFFSET))(a1);
	}

	::System::Void Method_3_0D386D2E50D5FBAE(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_0D386D2E50D5FBAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_291D463BB1648C58(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_291D463BB1648C58_OFFSET))(this, a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_A34FAD7A3FD7AD04(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_A34FAD7A3FD7AD04_OFFSET))(a1, a2);
	}

	::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FDB04AA2FC8C2F18(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_FDB04AA2FC8C2F18_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_245C714485554CFE(::Class_3_757A5862D4BBEE41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_757A5862D4BBEE41*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_245C714485554CFE_OFFSET))(this, a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_CAECAD009B52B514(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_CAECAD009B52B514_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_500BDD1E218E20AB(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_36C53D9EA9D387DA_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_500BDD1E218E20AB_OFFSET))(a1);
	}

	static ::System::Single Method_3_E45785348CC14D7F(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_E45785348CC14D7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_F4A5CA6866FB1516(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_AF7A56E03A4D3952* a2, ::System::Boolean a3, ::Class_1_C874A3981BDAA3B2* a4)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_36C53D9EA9D387DA_METHOD_3_F4A5CA6866FB1516_OFFSET))(a1, a2, a3, a4);
	}
};
