#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_2.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_01A1C5D2E69C14A4.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_7.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_509;
class Class_3_9D59A2B00711B552_2;
class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x18C8ABD0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_0343B264224D9212_OFFSET UNITYSDK_OFFSET(0x18C8B9B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_0CFE5F25BEFC2C07_1_OFFSET UNITYSDK_OFFSET(0x18C8E5A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_0CFE5F25BEFC2C07_OFFSET UNITYSDK_OFFSET(0x18C8DB80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_183F22661DEB7953_OFFSET UNITYSDK_OFFSET(0x18C8DF50)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_1_OFFSET UNITYSDK_OFFSET(0x18C8DD80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0x18C8AF80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET UNITYSDK_OFFSET(0x18C8B930)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x18C8D1A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x18C8BCB0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_2AE3D1298C9AE68B_OFFSET UNITYSDK_OFFSET(0x18C8B1E0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x18C8C390)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3A1244509872D5C2_OFFSET UNITYSDK_OFFSET(0x18C8C780)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x18C8B750)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3D1D38106B4F16A7_OFFSET UNITYSDK_OFFSET(0x18C8D830)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_45AED3430F904283_OFFSET UNITYSDK_OFFSET(0x18C8D700)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_1_OFFSET UNITYSDK_OFFSET(0x18C8B4E0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_OFFSET UNITYSDK_OFFSET(0x18C8C840)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_53B6AEE14389886F_OFFSET UNITYSDK_OFFSET(0x18C8BA20)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_5CDCE28D79065330_OFFSET UNITYSDK_OFFSET(0x18C8D1D0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x18C8E1A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x18C8CF10)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_8A2B45860DC4AF1E_OFFSET UNITYSDK_OFFSET(0x18C8C080)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET UNITYSDK_OFFSET(0x18C8E490)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x18C8D290)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET UNITYSDK_OFFSET(0x18C8D6A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18C8CE80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET UNITYSDK_OFFSET(0x18C8AF30)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x18C8CAC0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_B181D8DDC3AFEFD4_OFFSET UNITYSDK_OFFSET(0x18C8CB90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x18C8D7B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x18C8D110)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET UNITYSDK_OFFSET(0x18C8B150)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x18C8D910)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET UNITYSDK_OFFSET(0x18C8C610)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x18C8BD90)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18C8D190)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x18C8D500)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x18C8E7A0)
#define CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x18C8AA30)
#define CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C8AC20)
#define CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET UNITYSDK_OFFSET(0x18C8ACB0)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_TypeDefinitionIndex = 53433;

class Class_3_AF7A56E03A4D3952 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::Boolean* StaticGet_Field_3_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF7A56E03A4D3952_TypeDefinitionIndex)->GetStaticField(0xC540);
	}
	static ::Enum_3_CE3B674D22BBFC73* StaticGet_Field_3_0()
	{
		return (::Enum_3_CE3B674D22BBFC73*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF7A56E03A4D3952_TypeDefinitionIndex)->GetStaticField(0xC544);
	}
	// static const ::System::Int32 Field_3_67 = 0x32; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_2>* Field_3_12; // 0x48
	::UnityEngine::Rigidbody* Field_3_33; // 0x50
	::UnityEngine::Transform* Field_3_8; // 0x58
	::UnityEngine::AnimationCurve* Field_3_11; // 0x60
	::Struct_2_01A1C5D2E69C14A4 Field_3_15; // 0x68
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig* Field_3_10; // 0x88
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_13; // 0x90
	::Il2CppArray<::System::String*>* Field_3_63; // 0x98
	::UnityEngine::Transform* Field_3_32; // 0xA0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_509*>* Field_3_61; // 0xA8
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_52; // 0xB0
	::System::Object* Field_3_26; // 0xB8
	::Struct_2_7734F33592BF49F6_7 Field_3_19; // 0xC0
	::System::Collections::Generic::List_1<::Class_3_9D59A2B00711B552_2*>* Field_3_18; // 0xE0
	::MoleMole::Battle::CurveMoveComponent_Config* Field_3_6; // 0xE8
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_59; // 0xF0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_53; // 0xF8
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_509*>* Field_3_62; // 0x100
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_54; // 0x108
	::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 Field_3_20; // 0x110
	::UnityEngine::Vector3 Field_3_39; // 0x114
	::System::Nullable_1<::System::Single> Field_3_47; // 0x120
	::System::Single Field_3_31; // 0x128
	::System::Single Field_3_45; // 0x12C
	::UnityEngine::Vector3 Field_3_37; // 0x130
	::System::Single Field_3_21; // 0x13C
	::MoleMole::Battle::CurveMoveComponent_Config_MoveType Field_3_34; // 0x140
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_35; // 0x144
	::System::Single Field_3_24; // 0x148
	::UnityEngine::Vector3 Field_3_58; // 0x14C
	::UnityEngine::Vector3 Field_3_42; // 0x158
	::UnityEngine::Vector3 Field_3_38; // 0x164
	::UnityEngine::Quaternion Field_3_41; // 0x170
	::System::Boolean Field_3_60; // 0x180
	::System::Boolean Field_3_9; // 0x181
	::System::Boolean Field_3_27; // 0x182
	::System::Boolean Field_3_17; // 0x183
	::UnityEngine::Vector3 Field_3_46; // 0x184
	::UnityEngine::Quaternion Field_3_49; // 0x190
	::UnityEngine::Quaternion Field_3_23; // 0x1A0
	::UnityEngine::Vector3 Field_3_16; // 0x1B0
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_29; // 0x1BC
	::System::Int32 Field_3_48; // 0x1C0
	::UnityEngine::Quaternion Field_3_40; // 0x1C4
	::Enum_3_CE3B674D22BBFC73 Field_3_7; // 0x1D4
	::System::Boolean Field_3_55; // 0x1D8
	::System::Boolean Field_3_5; // 0x1D9
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_28; // 0x1DC
	::System::Single Field_3_44; // 0x1E0
	::System::Single Field_3_22; // 0x1E4
	::Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A Field_3_51; // 0x1E8
	::UnityEngine::Vector3 Field_3_57; // 0x1F0
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_3_4; // 0x1FC
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_30; // 0x200
	::System::Nullable_1<::Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9> Field_3_14; // 0x204
	::UnityEngine::Vector3 Field_3_43; // 0x21C
	::UnityEngine::Vector3 Field_3_56; // 0x228
	::System::Single Field_3_25; // 0x234
	::Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29 Field_3_50; // 0x238
	::UnityEngine::Vector3 Field_3_36; // 0x23C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_AEFF5CC7FD61CA78(::MoleMole::Battle::CurveMoveComponent_TriggerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET))(this, a1);
	}

	::System::Single Method_3_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_OFFSET))(this);
	}

	::System::Single Method_3_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3ABD0165571B5EF8_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_53B6AEE14389886F()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_53B6AEE14389886F_OFFSET))(this);
	}

	::System::Void Method_3_2A99139D13C42A50(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_2A99139D13C42A50_OFFSET))(this, a1);
	}

	::System::Void Method_3_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_3_DFD49FDE07F1A120(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET))(this, a1);
	}

	::System::Single Method_3_3A1244509872D5C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3A1244509872D5C2_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Single Method_3_B181D8DDC3AFEFD4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_B181D8DDC3AFEFD4_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_3_0343B264224D9212()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_0343B264224D9212_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_2AE3D1298C9AE68B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_2AE3D1298C9AE68B_OFFSET))(this);
	}

	::System::Boolean Method_3_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_7A4DA50406643EC6_OFFSET))(this);
	}

	static ::Class_3_AF7A56E03A4D3952* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AF7A56E03A4D3952*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Void Method_3_95EAF395E6F95EA4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_95EAF395E6F95EA4_OFFSET))(this, a1);
	}

	::System::Void Method_3_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Single Method_3_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET))(this);
	}

	::System::Void Method_3_9FF9293B31203D6F(::MoleMole::Battle::CurveMoveComponent_Config* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_45AED3430F904283(::MoleMole::Battle::CurveMoveComponent_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_45AED3430F904283_OFFSET))(this, a1);
	}

	::System::Void Method_3_BCCEF225A11BDA90(::Struct_2_01A1C5D2E69C14A4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_01A1C5D2E69C14A4))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_3_3D1D38106B4F16A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3D1D38106B4F16A7_OFFSET))(this, a1);
	}

	::System::Void Method_3_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_0CFE5F25BEFC2C07()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_0CFE5F25BEFC2C07_OFFSET))(this);
	}

	::System::Single Method_3_19F951B38D2C86E3_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_1_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_3_D0EE81B3FDA3E65D()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET))(this);
	}

	::System::Single Method_3_183F22661DEB7953()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_183F22661DEB7953_OFFSET))(this);
	}

	::System::Single Method_3_5CDCE28D79065330()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_5CDCE28D79065330_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	::System::Void Method_3_8A2B45860DC4AF1E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_8A2B45860DC4AF1E_OFFSET))(this, a1);
	}

	::System::Single Method_3_4E8F0BC023C1E72A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_958CD41C79BEFBD0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_0CFE5F25BEFC2C07_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_0CFE5F25BEFC2C07_1_OFFSET))(this);
	}

	::System::Single Method_3_4E8F0BC023C1E72A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_1_OFFSET))(this);
	}

	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Method_3_1CF853AC8F764434()
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}
};
