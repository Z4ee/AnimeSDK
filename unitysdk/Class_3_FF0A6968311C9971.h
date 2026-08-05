#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Class_3_FF0A6968311C9971_Struct_2_8FA3148BBF6A5F8F.h"
#include "unitysdk/Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A.h"
#include "unitysdk/Class_3_FF0A6968311C9971_Struct_2_A95FF042258407EB.h"
#include "unitysdk/Enum_3_49722073307230E6.h"
#include "unitysdk/FluffyUnderware/Curvy/OrientationAxisEnum.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/Struct_2_1FECD91D0D96D615.h"
#include "unitysdk/Struct_2_59B75B1187A36D41_2.h"
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
class Class_3_9CA249C88E9804C6;
class Class_3_AF7A56E03A4D3952;
class Class_3_C93CC3D2C2AC4067;
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
namespace UnityEngine { class Transform; }

#define CLASS_3_FF0A6968311C9971_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1662F940)
#define CLASS_3_FF0A6968311C9971_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1662FF00)
#define CLASS_3_FF0A6968311C9971_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1662FDA0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_0245CE3914B024F3_OFFSET UNITYSDK_OFFSET(0x16640760)
#define CLASS_3_FF0A6968311C9971_METHOD_3_03048DC9BCA3A1B1_OFFSET UNITYSDK_OFFSET(0x16639450)
#define CLASS_3_FF0A6968311C9971_METHOD_3_073D02112DF8EA32_OFFSET UNITYSDK_OFFSET(0x166402A0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_0D37E0C23B8D8BEA_OFFSET UNITYSDK_OFFSET(0x16647560)
#define CLASS_3_FF0A6968311C9971_METHOD_3_0D386D2E50D5FBAE_OFFSET UNITYSDK_OFFSET(0x16634380)
#define CLASS_3_FF0A6968311C9971_METHOD_3_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0x166387A0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x1663A460)
#define CLASS_3_FF0A6968311C9971_METHOD_3_13C32F2616EE1448_OFFSET UNITYSDK_OFFSET(0x16643B10)
#define CLASS_3_FF0A6968311C9971_METHOD_3_147D4C144AD62F87_1_OFFSET UNITYSDK_OFFSET(0x1663B000)
#define CLASS_3_FF0A6968311C9971_METHOD_3_147D4C144AD62F87_OFFSET UNITYSDK_OFFSET(0x16633FB0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_15C7B4FB9CC78FD2_OFFSET UNITYSDK_OFFSET(0x166302B0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_1697CFF1EE439655_OFFSET UNITYSDK_OFFSET(0x16634400)
#define CLASS_3_FF0A6968311C9971_METHOD_3_1A338819DAD6689E_OFFSET UNITYSDK_OFFSET(0x16640980)
#define CLASS_3_FF0A6968311C9971_METHOD_3_1BDCE7278D1CBE6C_OFFSET UNITYSDK_OFFSET(0x16643060)
#define CLASS_3_FF0A6968311C9971_METHOD_3_1F4A3B8AFCE307CC_OFFSET UNITYSDK_OFFSET(0x16633130)
#define CLASS_3_FF0A6968311C9971_METHOD_3_23B1B1E3F9A4D4CD_OFFSET UNITYSDK_OFFSET(0x1663B3D0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_245C714485554CFE_OFFSET UNITYSDK_OFFSET(0x16642F80)
#define CLASS_3_FF0A6968311C9971_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x166434B0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_2729A79C2B12F6AB_OFFSET UNITYSDK_OFFSET(0x16642580)
#define CLASS_3_FF0A6968311C9971_METHOD_3_2F6ECAEAC085A4A8_OFFSET UNITYSDK_OFFSET(0x16637320)
#define CLASS_3_FF0A6968311C9971_METHOD_3_316E286670A75F9E_OFFSET UNITYSDK_OFFSET(0x16645710)
#define CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x1662F360)
#define CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x16646020)
#define CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1663CBE0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_33C4580736D2212B_OFFSET UNITYSDK_OFFSET(0x1663FA80)
#define CLASS_3_FF0A6968311C9971_METHOD_3_3599DEE0FD554A00_OFFSET UNITYSDK_OFFSET(0x16635DF0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_37585C44025476F4_OFFSET UNITYSDK_OFFSET(0x1663EF90)
#define CLASS_3_FF0A6968311C9971_METHOD_3_39B6A6C04C60B5B3_OFFSET UNITYSDK_OFFSET(0x16642C80)
#define CLASS_3_FF0A6968311C9971_METHOD_3_3D52830B9B1686B0_OFFSET UNITYSDK_OFFSET(0x1663CB00)
#define CLASS_3_FF0A6968311C9971_METHOD_3_3F8290FED8FB09C2_OFFSET UNITYSDK_OFFSET(0x16635F00)
#define CLASS_3_FF0A6968311C9971_METHOD_3_416E747C79251AD2_OFFSET UNITYSDK_OFFSET(0x16641020)
#define CLASS_3_FF0A6968311C9971_METHOD_3_46B98E3BEE918F5B_OFFSET UNITYSDK_OFFSET(0x16637060)
#define CLASS_3_FF0A6968311C9971_METHOD_3_48984EF8178C5E0E_OFFSET UNITYSDK_OFFSET(0x16630980)
#define CLASS_3_FF0A6968311C9971_METHOD_3_49CF98CAD120A4FE_OFFSET UNITYSDK_OFFSET(0x166401E0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_4F934196753710D2_OFFSET UNITYSDK_OFFSET(0x16634F20)
#define CLASS_3_FF0A6968311C9971_METHOD_3_500BDD1E218E20AB_OFFSET UNITYSDK_OFFSET(0x1663C9A0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_52510BD88B41746B_OFFSET UNITYSDK_OFFSET(0x16645EB0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_527FF7FABB19D708_1_OFFSET UNITYSDK_OFFSET(0x1663FF90)
#define CLASS_3_FF0A6968311C9971_METHOD_3_527FF7FABB19D708_OFFSET UNITYSDK_OFFSET(0x16633560)
#define CLASS_3_FF0A6968311C9971_METHOD_3_55C674E40B5FF6A8_OFFSET UNITYSDK_OFFSET(0x16630260)
#define CLASS_3_FF0A6968311C9971_METHOD_3_56598A8DA968C4AD_OFFSET UNITYSDK_OFFSET(0x1663C100)
#define CLASS_3_FF0A6968311C9971_METHOD_3_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0x16630F20)
#define CLASS_3_FF0A6968311C9971_METHOD_3_5908FBC7610A8A8A_OFFSET UNITYSDK_OFFSET(0x1663A0A0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_5C06843F1F58E1F2_OFFSET UNITYSDK_OFFSET(0x1663BBB0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_5EB8FB5EC9256F6E_OFFSET UNITYSDK_OFFSET(0x166337B0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_61D7C642543F3916_OFFSET UNITYSDK_OFFSET(0x166426C0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_688B2A8EC3C1A14D_OFFSET UNITYSDK_OFFSET(0x16642100)
#define CLASS_3_FF0A6968311C9971_METHOD_3_6930767EF7BD8337_OFFSET UNITYSDK_OFFSET(0x16638DD0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0x166311E0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_6ABD57738B145AA8_OFFSET UNITYSDK_OFFSET(0x166442F0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_1_OFFSET UNITYSDK_OFFSET(0x16636D00)
#define CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_2_OFFSET UNITYSDK_OFFSET(0x16640700)
#define CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_3_OFFSET UNITYSDK_OFFSET(0x16647500)
#define CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_OFFSET UNITYSDK_OFFSET(0x16636C90)
#define CLASS_3_FF0A6968311C9971_METHOD_3_73553E1737061228_OFFSET UNITYSDK_OFFSET(0x16631C20)
#define CLASS_3_FF0A6968311C9971_METHOD_3_7381FB9FF384BD6A_OFFSET UNITYSDK_OFFSET(0x166347B0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_7CCA6FA729BF57AE_OFFSET UNITYSDK_OFFSET(0x16638F10)
#define CLASS_3_FF0A6968311C9971_METHOD_3_7DFE9E46521F3AF1_OFFSET UNITYSDK_OFFSET(0x16638D70)
#define CLASS_3_FF0A6968311C9971_METHOD_3_7EDC490C928301D9_OFFSET UNITYSDK_OFFSET(0x16642FE0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_824A8F47AB1FFEFB_OFFSET UNITYSDK_OFFSET(0x166438C0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1662F6C0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8653BF5E3E51C876_OFFSET UNITYSDK_OFFSET(0x16635180)
#define CLASS_3_FF0A6968311C9971_METHOD_3_86E72231BD6EB376_OFFSET UNITYSDK_OFFSET(0x16637920)
#define CLASS_3_FF0A6968311C9971_METHOD_3_87771AD07F0F7D15_OFFSET UNITYSDK_OFFSET(0x16645360)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8844ECD88794AABE_OFFSET UNITYSDK_OFFSET(0x1663A4D0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_89DA04E9FA142523_OFFSET UNITYSDK_OFFSET(0x16646CE0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8AAAE50F156B6255_OFFSET UNITYSDK_OFFSET(0x166373E0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8D22865A7E6A3D58_OFFSET UNITYSDK_OFFSET(0x166307F0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8F697642FBF3BDA7_1_OFFSET UNITYSDK_OFFSET(0x16646130)
#define CLASS_3_FF0A6968311C9971_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x16638710)
#define CLASS_3_FF0A6968311C9971_METHOD_3_950F3CB497B80D61_OFFSET UNITYSDK_OFFSET(0x16631CC0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_9B65FB1AD2C06A2E_OFFSET UNITYSDK_OFFSET(0x16646DE0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_A92249F7EC9585D4_OFFSET UNITYSDK_OFFSET(0x16633860)
#define CLASS_3_FF0A6968311C9971_METHOD_3_AC53873B4E15FB56_OFFSET UNITYSDK_OFFSET(0x16638FD0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_ACB38D2084B08FEA_OFFSET UNITYSDK_OFFSET(0x16643160)
#define CLASS_3_FF0A6968311C9971_METHOD_3_ACB490BEE39DEBFC_OFFSET UNITYSDK_OFFSET(0x16639940)
#define CLASS_3_FF0A6968311C9971_METHOD_3_AD826B25465D0838_OFFSET UNITYSDK_OFFSET(0x16645A90)
#define CLASS_3_FF0A6968311C9971_METHOD_3_B1B953293A345F29_OFFSET UNITYSDK_OFFSET(0x166465E0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_B4186F9233C7A8EA_OFFSET UNITYSDK_OFFSET(0x1663B460)
#define CLASS_3_FF0A6968311C9971_METHOD_3_B8DB3ACAFE8F5C63_OFFSET UNITYSDK_OFFSET(0x166338F0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_B92C201D8A952035_OFFSET UNITYSDK_OFFSET(0x1663C410)
#define CLASS_3_FF0A6968311C9971_METHOD_3_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x16630780)
#define CLASS_3_FF0A6968311C9971_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x16635CD0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_BAF2D37E75F524BE_OFFSET UNITYSDK_OFFSET(0x1663A250)
#define CLASS_3_FF0A6968311C9971_METHOD_3_BC6406D2C67CDE5A_OFFSET UNITYSDK_OFFSET(0x16636140)
#define CLASS_3_FF0A6968311C9971_METHOD_3_C4C9164268F72139_OFFSET UNITYSDK_OFFSET(0x16635530)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16635D60)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x16638680)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x16643830)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x16644260)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0x16645E20)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0x166461C0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16634ED0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_CC943AA70AE776C1_OFFSET UNITYSDK_OFFSET(0x16646200)
#define CLASS_3_FF0A6968311C9971_METHOD_3_D0EC10BACB5DC7D3_OFFSET UNITYSDK_OFFSET(0x1663C380)
#define CLASS_3_FF0A6968311C9971_METHOD_3_D40AEACBF23D3511_OFFSET UNITYSDK_OFFSET(0x16630E00)
#define CLASS_3_FF0A6968311C9971_METHOD_3_D5FDAA18A4572918_OFFSET UNITYSDK_OFFSET(0x166334A0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_D8FBDEE3B8B2C139_OFFSET UNITYSDK_OFFSET(0x16642940)
#define CLASS_3_FF0A6968311C9971_METHOD_3_DC407F13C8F8D585_OFFSET UNITYSDK_OFFSET(0x16636E70)
#define CLASS_3_FF0A6968311C9971_METHOD_3_E45785348CC14D7F_OFFSET UNITYSDK_OFFSET(0x16633370)
#define CLASS_3_FF0A6968311C9971_METHOD_3_E4EBE897F36D692D_OFFSET UNITYSDK_OFFSET(0x16630AD0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_E5C5445AC3855739_OFFSET UNITYSDK_OFFSET(0x16638810)
#define CLASS_3_FF0A6968311C9971_METHOD_3_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x1663CCF0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_EFFDD7682B6EBE68_OFFSET UNITYSDK_OFFSET(0x16647610)
#define CLASS_3_FF0A6968311C9971_METHOD_3_F4A5CA6866FB1516_OFFSET UNITYSDK_OFFSET(0x16639A80)
#define CLASS_3_FF0A6968311C9971_METHOD_3_FDB04AA2FC8C2F18_OFFSET UNITYSDK_OFFSET(0x16637CC0)
#define CLASS_3_FF0A6968311C9971_METHOD_3_FF886D7D5435E08C_OFFSET UNITYSDK_OFFSET(0x16630E60)
#define CLASS_3_FF0A6968311C9971_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1662F5C0)
#define CLASS_3_FF0A6968311C9971_START_OFFSET UNITYSDK_OFFSET(0x1662F280)
#define CLASS_3_FF0A6968311C9971_UPDATE_OFFSET UNITYSDK_OFFSET(0x16630080)
#define CLASS_3_FF0A6968311C9971__CCTOR_OFFSET UNITYSDK_OFFSET(0x16630240)
#define CLASS_3_FF0A6968311C9971__CTOR_OFFSET UNITYSDK_OFFSET(0x166301E0)

inline static constexpr unsigned int Class_3_FF0A6968311C9971_TypeDefinitionIndex = 77708;

class Class_3_FF0A6968311C9971 : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Class_3_FF0A6968311C9971** StaticGet_Field_3_1()
	{
		return (::Class_3_FF0A6968311C9971**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF0A6968311C9971_TypeDefinitionIndex)->GetStaticField(0x4CAD0);
	}
	static ::System::Single* StaticGet_Field_3_22()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF0A6968311C9971_TypeDefinitionIndex)->GetStaticField(0x11C90);
	}
	static ::System::Single* StaticGet_Field_3_21()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF0A6968311C9971_TypeDefinitionIndex)->GetStaticField(0x11C94);
	}
	static ::System::Single* StaticGet_Field_3_23()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF0A6968311C9971_TypeDefinitionIndex)->GetStaticField(0x11C98);
	}
	static ::System::UInt32* StaticGet_Field_3_16()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_FF0A6968311C9971_TypeDefinitionIndex)->GetStaticField(0x11C9C);
	}
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_EEDD869A38892817>* Field_3_7; // 0x20
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_5AFE997A29C5CC8E>* Field_3_0; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_27; // 0x30
	::Nap::NapECS::EcsFilter* Field_3_20; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_3_15; // 0x40
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_6A83F663CE355337>* Field_3_5; // 0x48
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_724ED1539B434FD1>* Field_3_11; // 0x50
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_59BB5B1187A75668>* Field_3_4; // 0x58
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_1FECD91D0D96D615>* Field_3_9; // 0x60
	::System::Collections::Generic::List_1<::Class_1_C874A3981BDAA3B2*>* Field_3_14; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_92DA5310F390EF4D<::System::UInt32>>* Field_3_8; // 0x70
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_59B75B1187A36D41_2>* Field_3_10; // 0x78
	::Unity::Collections::ManagedBlockQueue_1<::Struct_2_EAB16E85919A63B8>* Field_3_6; // 0x80
	::Unity::Jobs::JobHandle Field_3_13; // 0x88
	::System::Boolean Field_3_18; // 0x98
	::Class_3_FF0A6968311C9971_Struct_2_A95FF042258407EB Field_3_17; // 0x99
	::System::Boolean Field_3_19; // 0x9A
	::System::Boolean Field_3_12; // 0x9B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_ONDESTROY_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_LATEUPDATE_OFFSET))(this);
	}

	::System::Void FixedUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_FIXEDUPDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_55C674E40B5FF6A8(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_55C674E40B5FF6A8_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_15C7B4FB9CC78FD2(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_15C7B4FB9CC78FD2_OFFSET))(a1, a2);
	}

	static ::Class_3_FF0A6968311C9971* Method_3_D40AEACBF23D3511()
	{
		return ((::Class_3_FF0A6968311C9971*(*)())((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_D40AEACBF23D3511_OFFSET))();
	}

	::System::Void Method_3_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_3_FF886D7D5435E08C(::Class_3_AF7A56E03A4D3952* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::System::Int32, ::System::Int32, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_FF886D7D5435E08C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_56E8ED155DF34A44_OFFSET))(this);
	}

	static ::System::Void Method_3_950F3CB497B80D61(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_950F3CB497B80D61_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_527FF7FABB19D708_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_147D4C144AD62F87(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_147D4C144AD62F87_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_1697CFF1EE439655(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_1697CFF1EE439655_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_73553E1737061228(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_73553E1737061228_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8653BF5E3E51C876(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8653BF5E3E51C876_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_3599DEE0FD554A00(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_3599DEE0FD554A00_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_BC6406D2C67CDE5A(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_BC6406D2C67CDE5A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_7381FB9FF384BD6A(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_7381FB9FF384BD6A_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_OFFSET))(a1);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_1(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_DC407F13C8F8D585(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_DC407F13C8F8D585_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2F6ECAEAC085A4A8(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_2F6ECAEAC085A4A8_OFFSET))(a1);
	}

	static ::System::Void Method_3_8AAAE50F156B6255(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8AAAE50F156B6255_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_E5C5445AC3855739(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_E5C5445AC3855739_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7DFE9E46521F3AF1(::Class_3_AF7A56E03A4D3952* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_7DFE9E46521F3AF1_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveType Method_3_6930767EF7BD8337(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a2)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveType(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_6930767EF7BD8337_OFFSET))(a1, a2);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_7CCA6FA729BF57AE(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_7CCA6FA729BF57AE_OFFSET))(a1, a2);
	}

	static ::System::String* Method_3_AC53873B4E15FB56(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::String*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_AC53873B4E15FB56_OFFSET))(a1);
	}

	::System::Void Method_3_0D386D2E50D5FBAE(::System::String* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_0D386D2E50D5FBAE_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_03048DC9BCA3A1B1(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_03048DC9BCA3A1B1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5908FBC7610A8A8A(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_5908FBC7610A8A8A_OFFSET))(a1, a2);
	}

	::System::Void Method_3_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_D5FDAA18A4572918(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_D5FDAA18A4572918_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E4EBE897F36D692D(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_E4EBE897F36D692D_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_B9EC3F44C1BFC5EF(::Class_2_56E52A077EEA0DC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56E52A077EEA0DC0*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_C4C9164268F72139(::FluffyUnderware::Curvy::CurvySplineSegment* a1)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_C4C9164268F72139_OFFSET))(a1);
	}

	static ::System::Void Method_3_B4186F9233C7A8EA(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6, ::Class_1_C874A3981BDAA3B2* a7)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_B4186F9233C7A8EA_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_3_5C06843F1F58E1F2(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::UnityEngine::Vector3& a3, ::UnityEngine::Vector3& a4, ::UnityEngine::Vector3& a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_5C06843F1F58E1F2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_3_48984EF8178C5E0E(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_49722073307230E6 a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_49722073307230E6, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_48984EF8178C5E0E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_500BDD1E218E20AB(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_500BDD1E218E20AB_OFFSET))(a1);
	}

	::System::Void Method_3_3D52830B9B1686B0(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_9CA249C88E9804C6* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Class_3_9CA249C88E9804C6*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_3D52830B9B1686B0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_8D22865A7E6A3D58(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_49722073307230E6 a2, ::MoleMole::Battle::CurveMove_GamePlayIndex a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Enum_3_49722073307230E6, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8D22865A7E6A3D58_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_3_37585C44025476F4(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_9CA249C88E9804C6* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Class_3_9CA249C88E9804C6*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_37585C44025476F4_OFFSET))(a1, a2, a3, a4);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_1F4A3B8AFCE307CC(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_1F4A3B8AFCE307CC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_2(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_2_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_0245CE3914B024F3(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Boolean(*)(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_0245CE3914B024F3_OFFSET))(a1);
	}

	::System::Void Method_3_A92249F7EC9585D4(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_49722073307230E6 a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Enum_3_49722073307230E6, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_A92249F7EC9585D4_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Quaternion Method_3_1A338819DAD6689E(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::UnityEngine::Quaternion a5)
	{
		return ((::UnityEngine::Quaternion(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_1A338819DAD6689E_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_416E747C79251AD2(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::Class_1_C874A3981BDAA3B2* a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_416E747C79251AD2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_61D7C642543F3916(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Vector3 a2, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Vector3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_61D7C642543F3916_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_073D02112DF8EA32(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment*& a3, ::System::Boolean& a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_073D02112DF8EA32_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_7EDC490C928301D9(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::MonoFollowJointMoveElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::MoleMole::MonoFollowJointMoveElement*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_7EDC490C928301D9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_FDB04AA2FC8C2F18(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_FDB04AA2FC8C2F18_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_3_8844ECD88794AABE(::FluffyUnderware::Curvy::CurvySplineSegment* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8844ECD88794AABE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_56598A8DA968C4AD(::UnityEngine::Quaternion a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_56598A8DA968C4AD_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	static ::System::Single Method_3_1BDCE7278D1CBE6C(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3, ::FluffyUnderware::Curvy::CurvySplineSegment* a4)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_1BDCE7278D1CBE6C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_86E72231BD6EB376(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_86E72231BD6EB376_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::OrientationAxisEnum Method_3_D0EC10BACB5DC7D3(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::FluffyUnderware::Curvy::OrientationAxisEnum(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_D0EC10BACB5DC7D3_OFFSET))(a1);
	}

	static ::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection Method_3_ACB38D2084B08FEA(::Class_3_FF0A6968311C9971_Struct_2_8FA3148BBF6A5F8F& a1)
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection(*)(::Class_3_FF0A6968311C9971_Struct_2_8FA3148BBF6A5F8F&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_ACB38D2084B08FEA_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
	}

	static ::System::Void Method_3_D8FBDEE3B8B2C139(::Class_3_AF7A56E03A4D3952* a1, ::UnityEngine::Quaternion a2, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType a3, ::System::Boolean a4, ::Class_1_C874A3981BDAA3B2* a5)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::UnityEngine::Quaternion, ::MoleMole::Battle::CurveMoveComponent_Config_MoveType, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_D8FBDEE3B8B2C139_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Battle::CurveMove_GamePlayIndex Method_3_824A8F47AB1FFEFB(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_CurvySplineIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_GamePlayIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_824A8F47AB1FFEFB_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_B92C201D8A952035(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_B92C201D8A952035_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_46B98E3BEE918F5B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2, ::FluffyUnderware::Curvy::CurvySplineSegment* a3)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_46B98E3BEE918F5B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_13C32F2616EE1448(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_13C32F2616EE1448_OFFSET))(a1);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_ACB490BEE39DEBFC(::FluffyUnderware::Curvy::CurvySpline* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySpline*, ::MoleMole::Battle::CurveMove_GamePlayIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_ACB490BEE39DEBFC_OFFSET))(a1, a2);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_3_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	static ::System::Void Method_3_147D4C144AD62F87_1(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_147D4C144AD62F87_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6ABD57738B145AA8(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Void(*)(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_6ABD57738B145AA8_OFFSET))(a1);
	}

	::System::Void Method_3_3F8290FED8FB09C2(::Unity::Jobs::JobHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_3F8290FED8FB09C2_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_316E286670A75F9E(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_AF7A56E03A4D3952* a2, ::Class_3_09C6D749A1B6BB3E* a3)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_AF7A56E03A4D3952*, ::Class_3_09C6D749A1B6BB3E*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_316E286670A75F9E_OFFSET))(a1, a2, a3);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_49CF98CAD120A4FE(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_49CF98CAD120A4FE_OFFSET))(a1, a2);
	}

	::System::Void Method_3_245C714485554CFE(::Class_3_9CA249C88E9804C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_9CA249C88E9804C6*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_245C714485554CFE_OFFSET))(this, a1);
	}

	::System::Void Method_3_AD826B25465D0838(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_AD826B25465D0838_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
	}

	static ::System::Single Method_3_52510BD88B41746B(::Class_3_AF7A56E03A4D3952* a1)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_52510BD88B41746B_OFFSET))(a1);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	static ::MoleMole::Battle::CurveMove_CurvySplineIndex Method_3_5EB8FB5EC9256F6E(::FluffyUnderware::Curvy::CurvySpline* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::MoleMole::Battle::CurveMove_CurvySplineIndex(*)(::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_5EB8FB5EC9256F6E_OFFSET))(a1, a2);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET))(this);
	}

	static ::System::Void Method_3_2729A79C2B12F6AB(::Class_3_AF7A56E03A4D3952* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_2729A79C2B12F6AB_OFFSET))(a1, a2);
	}

	::System::Void Method_3_8F697642FBF3BDA7_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_8F697642FBF3BDA7_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_4F934196753710D2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_4F934196753710D2_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_87771AD07F0F7D15(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A& a1)
	{
		return ((::System::Boolean(*)(::Class_3_FF0A6968311C9971_Struct_2_913E676D20C0200A&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_87771AD07F0F7D15_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
	}

	::System::Void Method_3_CC943AA70AE776C1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_CC943AA70AE776C1_OFFSET))(this, a1);
	}

	::System::Void Method_3_23B1B1E3F9A4D4CD(::Class_3_AF7A56E03A4D3952* a1, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952*, ::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_23B1B1E3F9A4D4CD_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_F4A5CA6866FB1516(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_AF7A56E03A4D3952* a2, ::System::Boolean a3, ::Class_1_C874A3981BDAA3B2* a4)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_F4A5CA6866FB1516_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_BAF2D37E75F524BE(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_BAF2D37E75F524BE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_39B6A6C04C60B5B3(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_AF7A56E03A4D3952* a2, ::System::Boolean a3, ::Class_1_C874A3981BDAA3B2* a4)
	{
		return ((::System::Void(*)(::Class_3_C93CC3D2C2AC4067*, ::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_39B6A6C04C60B5B3_OFFSET))(a1, a2, a3, a4);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_33C4580736D2212B(::Class_3_AF7A56E03A4D3952* a1, ::System::Single a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_33C4580736D2212B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_3_E45785348CC14D7F(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::System::Single(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_E45785348CC14D7F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9B65FB1AD2C06A2E(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2, ::Class_1_C874A3981BDAA3B2* a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean, ::Class_1_C874A3981BDAA3B2*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_9B65FB1AD2C06A2E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_724D2338ACD3E8A3_3(::Class_3_FF0A6968311C9971* a1)
	{
		return ((::System::Void(*)(::Class_3_FF0A6968311C9971*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_724D2338ACD3E8A3_3_OFFSET))(a1);
	}

	::System::Void Method_3_0D37E0C23B8D8BEA(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_0D37E0C23B8D8BEA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_B1B953293A345F29(::Class_3_AF7A56E03A4D3952* a1, ::MoleMole::Battle::CurveMove_GamePlayIndex a2, ::System::Boolean a3, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode a4, ::System::Boolean a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::MoleMole::Battle::CurveMove_GamePlayIndex, ::System::Boolean, ::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_B1B953293A345F29_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::FluffyUnderware::Curvy::CurvySplineSegment* Method_3_527FF7FABB19D708_1(::Class_3_AF7A56E03A4D3952* a1, ::FluffyUnderware::Curvy::CurvySplineSegment* a2)
	{
		return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::Class_3_AF7A56E03A4D3952*, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_527FF7FABB19D708_1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_89DA04E9FA142523(::Class_3_AF7A56E03A4D3952* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_89DA04E9FA142523_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EFFDD7682B6EBE68(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_EFFDD7682B6EBE68_OFFSET))(a1);
	}

	static ::System::Void Method_3_B8DB3ACAFE8F5C63(::Class_3_AF7A56E03A4D3952* a1, ::Enum_3_49722073307230E6 a2, ::MoleMole::Battle::CurveMove_CurvySplineIndex a3)
	{
		return ((::System::Void(*)(::Class_3_AF7A56E03A4D3952*, ::Enum_3_49722073307230E6, ::MoleMole::Battle::CurveMove_CurvySplineIndex))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_B8DB3ACAFE8F5C63_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_688B2A8EC3C1A14D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3& a6, ::UnityEngine::Quaternion& a7)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_3_FF0A6968311C9971_METHOD_3_688B2A8EC3C1A14D_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
