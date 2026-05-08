#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9.h"
#include "unitysdk/Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_3.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/CurveMove_CurvySplineIndex.h"
#include "unitysdk/MoleMole/Battle/CurveMove_GamePlayIndex.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_7734F33592BF49F6_6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_473;
class Class_3_9D59A2B00711B552_1;
class Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Battle { class CurveMoveComponent_Config; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_3_AF7A56E03A4D3952_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1665F630)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_1_OFFSET UNITYSDK_OFFSET(0x16662CF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_OFFSET UNITYSDK_OFFSET(0x16660EE0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET UNITYSDK_OFFSET(0x1665FAF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET UNITYSDK_OFFSET(0x16661960)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_260F3D7EF517C399_1_OFFSET UNITYSDK_OFFSET(0x166629B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_260F3D7EF517C399_OFFSET UNITYSDK_OFFSET(0x16662670)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x16663060)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_2AE3D1298C9AE68B_OFFSET UNITYSDK_OFFSET(0x16660500)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3A1244509872D5C2_OFFSET UNITYSDK_OFFSET(0x16661990)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x16660170)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_3D1D38106B4F16A7_OFFSET UNITYSDK_OFFSET(0x16662360)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4782879F3DC3D87E_OFFSET UNITYSDK_OFFSET(0x16660800)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_1_OFFSET UNITYSDK_OFFSET(0x16661A50)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_OFFSET UNITYSDK_OFFSET(0x1665FB70)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_53B6AEE14389886F_OFFSET UNITYSDK_OFFSET(0x16661E80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_595E641DF1B4387D_OFFSET UNITYSDK_OFFSET(0x16661750)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_5CDCE28D79065330_OFFSET UNITYSDK_OFFSET(0x16660440)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_627734491883CD35_OFFSET UNITYSDK_OFFSET(0x16663140)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_8A2B45860DC4AF1E_OFFSET UNITYSDK_OFFSET(0x16660BD0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET UNITYSDK_OFFSET(0x166634A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET UNITYSDK_OFFSET(0x16662ED0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x16661330)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET UNITYSDK_OFFSET(0x16663440)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x166603B0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET UNITYSDK_OFFSET(0x16660B80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_B181D8DDC3AFEFD4_OFFSET UNITYSDK_OFFSET(0x1665FE80)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_B878DDC03DD82799_OFFSET UNITYSDK_OFFSET(0x16662110)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x16662FE0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET UNITYSDK_OFFSET(0x1665FDF0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x166610C0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET UNITYSDK_OFFSET(0x1665F980)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_E6451DD1ECA91329_OFFSET UNITYSDK_OFFSET(0x16660890)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16661950)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x16661CD0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x166615A0)
#define CLASS_3_AF7A56E03A4D3952_METHOD_3_FF11A7936E830212_OFFSET UNITYSDK_OFFSET(0x16662440)
#define CLASS_3_AF7A56E03A4D3952_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1665F4C0)
#define CLASS_3_AF7A56E03A4D3952__CCTOR_OFFSET UNITYSDK_OFFSET(0x1665F680)
#define CLASS_3_AF7A56E03A4D3952__CTOR_OFFSET UNITYSDK_OFFSET(0x1665F700)

inline static constexpr unsigned int Class_3_AF7A56E03A4D3952_TypeDefinitionIndex = 69892;

class Class_3_AF7A56E03A4D3952 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Enum_3_CE3B674D22BBFC73* StaticGet_Field_3_0()
	{
		return (::Enum_3_CE3B674D22BBFC73*)Il2CppClass::FromTypeDefinitionIndex(Class_3_AF7A56E03A4D3952_TypeDefinitionIndex)->GetStaticField(0x10230);
	}
	// static const ::System::Int32 Field_3_54 = 0x30; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_473*>* Field_3_51; // 0x48
	::System::Object* Field_3_20; // 0x50
	::Struct_2_7734F33592BF49F6_6 Field_3_11; // 0x58
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_473*>* Field_3_52; // 0x78
	::UnityEngine::Transform* Field_3_30; // 0x80
	::UnityEngine::Rigidbody* Field_3_29; // 0x88
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_43; // 0x90
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Class_3_AF7A56E03A4D3952_Struct_2_B3931940C76432D7_3>* Field_3_10; // 0x98
	::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 Field_3_7; // 0xA0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_46; // 0xB0
	::MoleMole::Battle::CurveMoveComponent_Config* Field_3_2; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_3_9; // 0xC0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_45; // 0xC8
	::System::Collections::Generic::List_1<::Class_3_9D59A2B00711B552_1*>* Field_3_12; // 0xD0
	::Class_3_AF7A56E03A4D3952_Class_1_6CB027CB4EE890F3* Field_3_44; // 0xD8
	::Il2CppArray<::System::String*>* Field_3_50; // 0xE0
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig* Field_3_5; // 0xE8
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_24; // 0xF0
	::System::Single Field_3_21; // 0xF4
	::System::Nullable_1<::Class_3_AF7A56E03A4D3952_Struct_2_9EF7231D09D4C0A9> Field_3_8; // 0xF8
	::System::Nullable_1<::System::Single> Field_3_35; // 0x110
	::System::Single Field_3_22; // 0x118
	::System::Single Field_3_23; // 0x11C
	::UnityEngine::Vector3 Field_3_31; // 0x120
	::MoleMole::Battle::CurveMove_CurvySplineIndex Field_3_25; // 0x12C
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_26; // 0x130
	::System::Boolean Field_3_3; // 0x134
	::System::Boolean Field_3_42; // 0x135
	::Class_3_AF7A56E03A4D3952_Enum_3_5B468D3B4D74DA40 Field_3_18; // 0x138
	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Field_3_4; // 0x13C
	::UnityEngine::Quaternion Field_3_41; // 0x140
	::UnityEngine::Vector3 Field_3_47; // 0x150
	::System::Single Field_3_37; // 0x15C
	::UnityEngine::Vector3 Field_3_36; // 0x160
	::System::Single Field_3_38; // 0x16C
	::MoleMole::Battle::CurveMoveComponent_Config_MoveType Field_3_28; // 0x170
	::UnityEngine::Vector3 Field_3_32; // 0x174
	::MoleMole::Battle::CurveMove_GamePlayIndex Field_3_27; // 0x180
	::UnityEngine::Vector3 Field_3_34; // 0x184
	::UnityEngine::Vector3 Field_3_49; // 0x190
	::UnityEngine::Quaternion Field_3_15; // 0x19C
	::UnityEngine::Vector3 Field_3_48; // 0x1AC
	::System::Single Field_3_16; // 0x1B8
	::System::Single Field_3_17; // 0x1BC
	::Enum_3_CE3B674D22BBFC73 Field_3_1; // 0x1C0
	::System::Boolean Field_3_6; // 0x1C4
	::System::Boolean Field_3_13; // 0x1C5
	::System::Boolean Field_3_53; // 0x1C6
	::System::Boolean Field_3_19; // 0x1C7
	::Class_3_AF7A56E03A4D3952_Struct_2_1596B20CDEDE3C29 Field_3_40; // 0x1C8
	::UnityEngine::Vector3 Field_3_33; // 0x1CC
	::UnityEngine::Vector3 Field_3_14; // 0x1D8
	::Class_3_AF7A56E03A4D3952_Struct_2_70DCF23F0AA5A74A Field_3_39; // 0x1E4

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

	::System::Void Method_3_DFD49FDE07F1A120(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_DFD49FDE07F1A120_OFFSET))(this, a1);
	}

	::System::Single Method_3_4E8F0BC023C1E72A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_OFFSET))(this);
	}

	::System::Single Method_3_B181D8DDC3AFEFD4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_B181D8DDC3AFEFD4_OFFSET))(this);
	}

	::System::Void Method_3_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Single Method_3_5CDCE28D79065330()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_5CDCE28D79065330_OFFSET))(this);
	}

	::System::Void Method_3_4782879F3DC3D87E(::MoleMole::Battle::CurveMoveComponent_Config* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4782879F3DC3D87E_OFFSET))(this, a1);
	}

	::System::Void Method_3_AEFF5CC7FD61CA78(::MoleMole::Battle::CurveMoveComponent_TriggerConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_TriggerConfig*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_AEFF5CC7FD61CA78_OFFSET))(this, a1);
	}

	::FluffyUnderware::Curvy::CurvySpline* Method_3_D0EE81B3FDA3E65D()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D0EE81B3FDA3E65D_OFFSET))(this);
	}

	::System::Void Method_3_8A2B45860DC4AF1E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_8A2B45860DC4AF1E_OFFSET))(this, a1);
	}

	::System::Single Method_3_19F951B38D2C86E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_OFFSET))(this);
	}

	::System::Void Method_3_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_3_95EAF395E6F95EA4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_95EAF395E6F95EA4_OFFSET))(this, a1);
	}

	::System::Single Method_3_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_OFFSET))(this);
	}

	::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode Method_3_1CF853AC8F764434()
	{
		return ((::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_1CF853AC8F764434_OFFSET))(this);
	}

	::System::Boolean Method_3_595E641DF1B4387D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_595E641DF1B4387D_OFFSET))(this);
	}

	::System::Void Method_3_E6451DD1ECA91329(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_E6451DD1ECA91329_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_208CCBFF1B8F62A7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_208CCBFF1B8F62A7_OFFSET))(this);
	}

	::System::Single Method_3_4E8F0BC023C1E72A_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_4E8F0BC023C1E72A_1_OFFSET))(this);
	}

	::System::Single Method_3_FAE9C4050544FE63_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FAE9C4050544FE63_1_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_53B6AEE14389886F()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_53B6AEE14389886F_OFFSET))(this);
	}

	::System::Single Method_3_B878DDC03DD82799()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_B878DDC03DD82799_OFFSET))(this);
	}

	::System::Void Method_3_3D1D38106B4F16A7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3D1D38106B4F16A7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_FF11A7936E830212()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_FF11A7936E830212_OFFSET))(this);
	}

	::System::Single Method_3_19F951B38D2C86E3_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_19F951B38D2C86E3_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_260F3D7EF517C399()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_260F3D7EF517C399_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_958CD41C79BEFBD0()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_958CD41C79BEFBD0_OFFSET))(this);
	}

	static ::Class_3_AF7A56E03A4D3952* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AF7A56E03A4D3952*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Vector3 Method_3_260F3D7EF517C399_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_260F3D7EF517C399_1_OFFSET))(this);
	}

	::System::Single Method_3_3A1244509872D5C2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_3A1244509872D5C2_OFFSET))(this);
	}

	::System::Void Method_3_2A99139D13C42A50(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_2A99139D13C42A50_OFFSET))(this, a1);
	}

	::System::Single Method_3_2AE3D1298C9AE68B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_2AE3D1298C9AE68B_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_627734491883CD35()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_627734491883CD35_OFFSET))(this);
	}

	::System::Void Method_3_9FF9293B31203D6F(::MoleMole::Battle::CurveMoveComponent_Config* a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::CurveMoveComponent_Config*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_9FF9293B31203D6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_93D3C239C19BFDF2(::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_AF7A56E03A4D3952_Struct_2_3A8D9C555F9C80C1))((::PBYTE)hIl2Cpp + CLASS_3_AF7A56E03A4D3952_METHOD_3_93D3C239C19BFDF2_OFFSET))(this, a1);
	}
};
