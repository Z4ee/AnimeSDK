#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Enum_3_E2BB401879FE05E8.h"
#include "unitysdk/Enum_3_F674042AB3067BFB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_785;
class Class_1_2DAF4D0B64681D6A;
class Class_2_31D0855B68F74367;
class Class_2_4381F51A10516261;
class Class_2_46A7F03961ADD6EC;
class Class_2_5F64140FAB2210F3;
class Class_2_6968552DB576BBB3;
class Class_2_954470B5468267C8;
class Class_2_AD95DD998F7AF291_6;
class Class_2_D4C53B59CD34FFED;
class Class_2_F02C9DCBE9D88C7A;
class Class_5_DCFF91E03A93C03C;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::Cameras { class VCameraCustomTargetGroup; }
namespace MoleMole::Cameras { class VCameraTargetGroup; }
namespace MoleMole::Config { class ConfigHollowCameraBounce; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace MoleMole::Config { class ConfigHollowCameraStretchV2; }
namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace Share { class CVector2; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E5B7864412CDC074_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x121797D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_035FB05768996FEB_OFFSET UNITYSDK_OFFSET(0x12171CD0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_06D2228B483124DF_OFFSET UNITYSDK_OFFSET(0x12172FE0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_0C221FCA05A7E312_OFFSET UNITYSDK_OFFSET(0x12173740)
#define CLASS_1_E5B7864412CDC074_METHOD_1_114A195F2AEBF17C_OFFSET UNITYSDK_OFFSET(0x12172830)
#define CLASS_1_E5B7864412CDC074_METHOD_1_185A68C29CE4FCCF_OFFSET UNITYSDK_OFFSET(0x121799F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x12180A30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_20D6605E17B95057_OFFSET UNITYSDK_OFFSET(0x121827B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2258313D16F57989_OFFSET UNITYSDK_OFFSET(0x12181830)
#define CLASS_1_E5B7864412CDC074_METHOD_1_26F5E9E3F26BDCD6_OFFSET UNITYSDK_OFFSET(0x12180280)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0x12171A80)
#define CLASS_1_E5B7864412CDC074_METHOD_1_2FA6186936186DD5_OFFSET UNITYSDK_OFFSET(0x1217C1F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_32F2A54B76F4A075_OFFSET UNITYSDK_OFFSET(0x12181480)
#define CLASS_1_E5B7864412CDC074_METHOD_1_3834F838F36C05E4_OFFSET UNITYSDK_OFFSET(0x12178810)
#define CLASS_1_E5B7864412CDC074_METHOD_1_3B5E81E976A08A3C_OFFSET UNITYSDK_OFFSET(0x12175600)
#define CLASS_1_E5B7864412CDC074_METHOD_1_3C8ACECF8DED690A_OFFSET UNITYSDK_OFFSET(0x12170130)
#define CLASS_1_E5B7864412CDC074_METHOD_1_4334192989EA7BA7_OFFSET UNITYSDK_OFFSET(0x12178200)
#define CLASS_1_E5B7864412CDC074_METHOD_1_44A02C1F1C97E058_OFFSET UNITYSDK_OFFSET(0x1217E220)
#define CLASS_1_E5B7864412CDC074_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x12180CA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1217EA60)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5878AFA000AEB05A_OFFSET UNITYSDK_OFFSET(0x12182AC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_588C7CDA7B8F75A1_OFFSET UNITYSDK_OFFSET(0x1217CC00)
#define CLASS_1_E5B7864412CDC074_METHOD_1_5986658AFDADED88_OFFSET UNITYSDK_OFFSET(0x1217A050)
#define CLASS_1_E5B7864412CDC074_METHOD_1_606AE513BAFD876B_OFFSET UNITYSDK_OFFSET(0x12171590)
#define CLASS_1_E5B7864412CDC074_METHOD_1_61DC8545148AF227_OFFSET UNITYSDK_OFFSET(0x12172550)
#define CLASS_1_E5B7864412CDC074_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x12182A40)
#define CLASS_1_E5B7864412CDC074_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1217DB90)
#define CLASS_1_E5B7864412CDC074_METHOD_1_6FAB7040B8534316_OFFSET UNITYSDK_OFFSET(0x1217EB00)
#define CLASS_1_E5B7864412CDC074_METHOD_1_70196F49D984DD4B_OFFSET UNITYSDK_OFFSET(0x12180120)
#define CLASS_1_E5B7864412CDC074_METHOD_1_733115279ABD46B2_OFFSET UNITYSDK_OFFSET(0x121768A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_78955B0A1A661CC4_OFFSET UNITYSDK_OFFSET(0x121785A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_7EBE4E0D7A98E48B_OFFSET UNITYSDK_OFFSET(0x12174740)
#define CLASS_1_E5B7864412CDC074_METHOD_1_84B8ABF3C2EF60EE_OFFSET UNITYSDK_OFFSET(0x1217D5C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_8936CA62B2D7C6AE_OFFSET UNITYSDK_OFFSET(0x12174D80)
#define CLASS_1_E5B7864412CDC074_METHOD_1_89CDD394EF3A42C2_OFFSET UNITYSDK_OFFSET(0x12173820)
#define CLASS_1_E5B7864412CDC074_METHOD_1_8B6B88BB55BEE3B0_OFFSET UNITYSDK_OFFSET(0x12171BB0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x121828D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_9EF665C07CB5B066_OFFSET UNITYSDK_OFFSET(0x121719B0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A22F34C3EA0DE9C1_OFFSET UNITYSDK_OFFSET(0x12180710)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A3587E8D94134238_OFFSET UNITYSDK_OFFSET(0x121815F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x121758A0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A5F11439BBA4D407_OFFSET UNITYSDK_OFFSET(0x1217BC80)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A607957373336DE5_OFFSET UNITYSDK_OFFSET(0x12180BA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_A6185D969F0931D8_OFFSET UNITYSDK_OFFSET(0x12180E60)
#define CLASS_1_E5B7864412CDC074_METHOD_1_AE748D1621064ED1_OFFSET UNITYSDK_OFFSET(0x12172730)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x12182640)
#define CLASS_1_E5B7864412CDC074_METHOD_1_B489722BAF57AF73_OFFSET UNITYSDK_OFFSET(0x12175A30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_1_OFFSET UNITYSDK_OFFSET(0x121826C0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_OFFSET UNITYSDK_OFFSET(0x12176DC0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C273267F63D1B81B_OFFSET UNITYSDK_OFFSET(0x1217A820)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C33AA666DB3DE34D_OFFSET UNITYSDK_OFFSET(0x12179D50)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C411E5881DF297DE_OFFSET UNITYSDK_OFFSET(0x1217EA70)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x12180B90)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1217EA50)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C7E9988AD5E10B7A_OFFSET UNITYSDK_OFFSET(0x12171D30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x121826D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12181490)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x12181BD0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CE16865255EAFB07_OFFSET UNITYSDK_OFFSET(0x1217A620)
#define CLASS_1_E5B7864412CDC074_METHOD_1_CFD9A84212B388AA_OFFSET UNITYSDK_OFFSET(0x121786E0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0x12181910)
#define CLASS_1_E5B7864412CDC074_METHOD_1_D936A1A0B739706B_OFFSET UNITYSDK_OFFSET(0x12179270)
#define CLASS_1_E5B7864412CDC074_METHOD_1_DA8915F72DE34BAE_OFFSET UNITYSDK_OFFSET(0x121812E0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_DDE31FEAF2A25220_OFFSET UNITYSDK_OFFSET(0x1217AC10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_DEDF86E7A8BCE1CB_OFFSET UNITYSDK_OFFSET(0x12181ED0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E12CF800D66E5E44_OFFSET UNITYSDK_OFFSET(0x12181760)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E3AAC0A7E4293A11_OFFSET UNITYSDK_OFFSET(0x12176DD0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E3B10A51EB0F6A50_OFFSET UNITYSDK_OFFSET(0x12178F30)
#define CLASS_1_E5B7864412CDC074_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x12173810)
#define CLASS_1_E5B7864412CDC074_METHOD_1_EEF8998130F57BC0_OFFSET UNITYSDK_OFFSET(0x12171920)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x121812D0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x12182630)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12171BA0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F3A2343C2D2235E6_OFFSET UNITYSDK_OFFSET(0x121814E0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F3AA9A2F67D0417A_OFFSET UNITYSDK_OFFSET(0x12181680)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x12172DE0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1217DF10)
#define CLASS_1_E5B7864412CDC074_METHOD_1_F8294187DC3A14E6_OFFSET UNITYSDK_OFFSET(0x121786F0)
#define CLASS_1_E5B7864412CDC074_METHOD_1_FAA0BB64FC1D8FBA_OFFSET UNITYSDK_OFFSET(0x12173170)
#define CLASS_1_E5B7864412CDC074_METHOD_1_FD4F65CF7B15394A_OFFSET UNITYSDK_OFFSET(0x12181CA0)
#define CLASS_1_E5B7864412CDC074_ONDRAG_OFFSET UNITYSDK_OFFSET(0x12170470)
#define CLASS_1_E5B7864412CDC074__CTOR_OFFSET UNITYSDK_OFFSET(0x1216F480)

inline static constexpr unsigned int Class_1_E5B7864412CDC074_TypeDefinitionIndex = 87397;

class Class_1_E5B7864412CDC074 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::Cinemachine::CameraState Field_1_25; // 0x10
	::UnityEngine::Camera* Field_1_22; // 0xF8
	::Class_1_2DAF4D0B64681D6A* Field_1_9; // 0x100
	::MoleMole::UIHollowChessboard3DModelController* Field_1_16; // 0x108
	::Class_2_31D0855B68F74367* Field_1_44; // 0x110
	::Class_2_D4C53B59CD34FFED* Field_1_46; // 0x118
	::Class_2_4381F51A10516261* Field_1_37; // 0x120
	::MoleMole::Config::ConfigHollowChessboardCamera* Field_1_35; // 0x128
	::Class_2_AD95DD998F7AF291_6* Field_1_51; // 0x130
	::UnityEngine::GameObject* Field_1_21; // 0x138
	::System::Action* Field_1_10; // 0x140
	::Class_2_6968552DB576BBB3* Field_1_34; // 0x148
	::UnityEngine::GameObject* Field_1_12; // 0x150
	::System::Action_2<::System::Single, ::System::Single>* Field_1_2; // 0x158
	::Class_2_5F64140FAB2210F3* Field_1_33; // 0x160
	::Class_2_46A7F03961ADD6EC* Field_1_47; // 0x168
	::Class_2_954470B5468267C8* Field_1_45; // 0x170
	::MoleMole::Cameras::VCameraTargetGroup* Field_1_19; // 0x178
	::MoleMole::Cameras::VCameraCustomTargetGroup* Field_1_18; // 0x180
	::Class_2_F02C9DCBE9D88C7A* Field_1_40; // 0x188
	::UnityEngine::Camera* Field_1_23; // 0x190
	::MoleMole::Config::ConfigHollowCameraStretchV2* Field_1_38; // 0x198
	::UnityEngine::GameObject* Field_1_20; // 0x1A0
	::System::String* Field_1_17; // 0x1A8
	::UnityEngine::Vector3 Field_1_5; // 0x1B0
	::System::Single Field_1_14; // 0x1BC
	::UnityEngine::Vector3 Field_1_30; // 0x1C0
	::UnityEngine::Quaternion Field_1_29; // 0x1CC
	::UnityEngine::Vector3 Field_1_41; // 0x1DC
	::System::Single Field_1_28; // 0x1E8
	::UnityEngine::Vector3 Field_1_39; // 0x1EC
	::System::Single Field_1_13; // 0x1F8
	::UnityEngine::Vector3 Field_1_4; // 0x1FC
	::UnityEngine::Vector3 Field_1_24; // 0x208
	::System::Nullable_1<::System::Single> Field_1_6; // 0x214
	::System::Single Field_1_1; // 0x21C
	::UnityEngine::Vector3 Field_1_27; // 0x220
	::UnityEngine::Vector3 Field_1_31; // 0x22C
	::Foundation::Coroutine::CoroutineHandle Field_1_11; // 0x238
	::UnityEngine::Vector2 Field_1_36; // 0x23C
	::System::Boolean Field_1_26; // 0x244
	::System::Boolean Field_1_32; // 0x245
	::System::Boolean Field_1_42; // 0x246
	::System::Boolean Field_1_43; // 0x247

	::System::Void _ctor(::UnityEngine::Camera* a1, ::MoleMole::Config::ConfigHollowChessboardCamera* a2, ::MoleMole::UIHollowChessboard3DModelController* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::MoleMole::Config::ConfigHollowChessboardCamera*, ::MoleMole::UIHollowChessboard3DModelController*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnDrag(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Vector2 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_ONDRAG_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_8B6B88BB55BEE3B0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_8B6B88BB55BEE3B0_OFFSET))(this);
	}

	::System::Void Method_1_035FB05768996FEB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_035FB05768996FEB_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7E9988AD5E10B7A(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C7E9988AD5E10B7A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_114A195F2AEBF17C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_114A195F2AEBF17C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F55212E77440B167_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_89CDD394EF3A42C2(::Class_5_DCFF91E03A93C03C* a1, ::Share::CVector2* a2, ::System::Single a3, ::MoleMole::UICameraAtom& a4, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a5, ::UnityEngine::Vector2 a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::Share::CVector2*, ::System::Single, ::MoleMole::UICameraAtom&, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_89CDD394EF3A42C2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_3B5E81E976A08A3C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_3B5E81E976A08A3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_B489722BAF57AF73(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Action* a5, ::System::Boolean a6, ::System::Nullable_1<::System::Single> a7)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*, ::System::Boolean, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B489722BAF57AF73_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_733115279ABD46B2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_733115279ABD46B2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Camera* Method_1_BCFC75DE0278F431()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_OFFSET))(this);
	}

	::System::Void Method_1_E3AAC0A7E4293A11(::UnityEngine::Vector3 a1, ::System::Action_1<::UnityEngine::Vector3>* a2, ::System::Action* a3, ::System::String* a4, ::System::Boolean a5, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> a6, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a7, ::Share::CVector2* a8, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a9, ::Enum_3_F674042AB3067BFB a10, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a11, ::Enum_3_E2BB401879FE05E8 a12)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::Enum_3_F674042AB3067BFB, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::Enum_3_E2BB401879FE05E8))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E3AAC0A7E4293A11_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::UnityEngine::Vector3 Method_1_78955B0A1A661CC4(::Class_0_16E4307DCC419505_785* a1, ::System::Single a2, ::MoleMole::UICameraAtom& a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_785*, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_78955B0A1A661CC4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Action_2<::System::Single, ::System::Single>* Method_1_CFD9A84212B388AA()
	{
		return ((::System::Action_2<::System::Single, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CFD9A84212B388AA_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_F8294187DC3A14E6(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F8294187DC3A14E6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3834F838F36C05E4(::MoleMole::Config::ConfigHollowCameraStretchV2* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Boolean a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Boolean a7, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a8, ::System::Boolean a9)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_3834F838F36C05E4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_D936A1A0B739706B(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_D936A1A0B739706B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Share::GridDir Method_1_EEF8998130F57BC0(::UnityEngine::Vector2 a1)
	{
		return ((::Share::GridDir(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_EEF8998130F57BC0_OFFSET))(this, a1);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_E3B10A51EB0F6A50(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigHollowCameraStretchV2* a2, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a3, ::Share::CVector2* a4, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E3B10A51EB0F6A50_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_DDE31FEAF2A25220(::Enum_3_E2BB401879FE05E8 a1, ::System::Action* a2, ::System::Action* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::Action*, ::System::Action*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_DDE31FEAF2A25220_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A5F11439BBA4D407(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::String* a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A5F11439BBA4D407_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_84B8ABF3C2EF60EE(::Enum_3_E2BB401879FE05E8 a1, ::System::Action* a2, ::System::Action* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector2 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::Action*, ::System::Action*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_84B8ABF3C2EF60EE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_4334192989EA7BA7(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::Boolean a3, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean> a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean, ::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::System::Boolean>, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_4334192989EA7BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_7EBE4E0D7A98E48B(::Class_0_16E4307DCC419505_785* a1, ::MoleMole::UICameraAtom& a2, ::UnityEngine::Bounds& a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_0_16E4307DCC419505_785*, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_7EBE4E0D7A98E48B_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_C273267F63D1B81B(::UnityEngine::Vector2 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C273267F63D1B81B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_C411E5881DF297DE(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C411E5881DF297DE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_5986658AFDADED88(::Class_5_DCFF91E03A93C03C* a1, ::MoleMole::UICameraAtom a2, ::MoleMole::Config::ConfigHollowCameraStretchV2* a3, ::UnityEngine::Vector3 a4, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a5, ::Share::CVector2* a6, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::MoleMole::UICameraAtom, ::MoleMole::Config::ConfigHollowCameraStretchV2*, ::UnityEngine::Vector3, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5986658AFDADED88_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Single Method_1_CE16865255EAFB07(::MoleMole::Config::ConfigHollowCameraStretchV2* a1)
	{
		return ((::System::Single(*)(::MoleMole::Config::ConfigHollowCameraStretchV2*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CE16865255EAFB07_OFFSET))(a1);
	}

	::System::Void Method_1_70196F49D984DD4B(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_70196F49D984DD4B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_6FAB7040B8534316(::Class_5_DCFF91E03A93C03C* a1, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a2, ::System::Single a3, ::MoleMole::UICameraAtom& a4, ::UnityEngine::Vector2 a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_5_DCFF91E03A93C03C*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_6FAB7040B8534316_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_A22F34C3EA0DE9C1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A22F34C3EA0DE9C1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_61DC8545148AF227()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_61DC8545148AF227_OFFSET))(this);
	}

	::System::Single Method_1_9EF665C07CB5B066(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_9EF665C07CB5B066_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A607957373336DE5(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A607957373336DE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_A6185D969F0931D8(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A6185D969F0931D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_2FA6186936186DD5(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::String* a4, ::System::Boolean a5, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> a6, ::Share::CVector2* a7, ::System::Boolean a8, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell> a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Action* a12)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::String*, ::System::Boolean, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::Share::CVector2*, ::System::Boolean, ::System::Nullable_1<::MoleMole::HollowChessboard::HollowCell>, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2FA6186936186DD5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_1_0C221FCA05A7E312(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Func_1<::System::ValueTuple_2<::System::Single, ::System::Single>>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_0C221FCA05A7E312_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_588C7CDA7B8F75A1(::Enum_3_E2BB401879FE05E8 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Boolean a4, ::System::Single a5, ::UnityEngine::AnimationCurve* a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::UnityEngine::Vector3, ::System::Action*, ::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_588C7CDA7B8F75A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_26F5E9E3F26BDCD6(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_26F5E9E3F26BDCD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DA8915F72DE34BAE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_DA8915F72DE34BAE_OFFSET))(this);
	}

	::System::Void Method_1_32F2A54B76F4A075(::System::Action_2<::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_32F2A54B76F4A075_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F3A2343C2D2235E6(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Action* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Action*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F3A2343C2D2235E6_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_8936CA62B2D7C6AE(::UnityEngine::Vector3 a1, ::System::Single a2, ::MoleMole::UICameraAtom& a3, ::UnityEngine::Bounds& a4, ::UnityEngine::Vector2 a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::UICameraAtom&, ::UnityEngine::Bounds&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_8936CA62B2D7C6AE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_1_A3587E8D94134238(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_A3587E8D94134238_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E12CF800D66E5E44(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_E12CF800D66E5E44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2258313D16F57989(::System::Int32 a1, ::System::Func_1<::UnityEngine::Vector3>* a2, ::UnityEngine::Quaternion a3, ::System::UInt32 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_1<::UnityEngine::Vector3>*, ::UnityEngine::Quaternion, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_2258313D16F57989_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_185A68C29CE4FCCF(::System::Boolean a1, ::Class_5_DCFF91E03A93C03C* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_5_DCFF91E03A93C03C*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_185A68C29CE4FCCF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D56C1A4C75B97C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_D56C1A4C75B97C47_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C8ACECF8DED690A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_3C8ACECF8DED690A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FD4F65CF7B15394A(::UnityEngine::Vector3 a1, ::System::Nullable_1<::System::Single> a2, ::System::Nullable_1<::System::Single> a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::System::Single>, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_FD4F65CF7B15394A_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Rect Method_1_F3AA9A2F67D0417A()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F3AA9A2F67D0417A_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_44A02C1F1C97E058(::Class_0_16E4307DCC419505_785* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Class_0_16E4307DCC419505_785*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_44A02C1F1C97E058_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DEDF86E7A8BCE1CB(::Enum_3_E2BB401879FE05E8 a1, ::System::String* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E2BB401879FE05E8, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_DEDF86E7A8BCE1CB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_BCFC75DE0278F431_1()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_BCFC75DE0278F431_1_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	static ::System::Boolean Method_1_20D6605E17B95057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_20D6605E17B95057_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_06D2228B483124DF(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_06D2228B483124DF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_AE748D1621064ED1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2, ::MoleMole::UICameraAtom a3, ::UnityEngine::Camera* a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector2, ::MoleMole::UICameraAtom, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_AE748D1621064ED1_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5878AFA000AEB05A(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_5878AFA000AEB05A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FAA0BB64FC1D8FBA(::UnityEngine::Vector3 a1, ::MoleMole::Config::ConfigHollowCameraBounce* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::ConfigHollowCameraBounce*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_FAA0BB64FC1D8FBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_606AE513BAFD876B(::UnityEngine::AnimationCurve* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_606AE513BAFD876B_OFFSET))(this, a1, a2);
	}

	::MoleMole::UICameraAtom Method_1_C33AA666DB3DE34D()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5B7864412CDC074_METHOD_1_C33AA666DB3DE34D_OFFSET))(this);
	}
};
