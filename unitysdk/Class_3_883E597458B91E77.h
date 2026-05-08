#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_B522F8F6B3AF3BEE.h"
#include "unitysdk/Enum_3_D76E08F309AE15EC.h"
#include "unitysdk/Enum_3_E58B687031ED39B8.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType.h"
#include "unitysdk/Struct_2_418182A01BA22B26.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DC33B6615579E69F;
class Class_1_EB84615A56CD66EB;
class Class_2_7A1F9B1E855D33CF;
class Class_2_E088D84C0136926D;
class Class_2_EE4AD6D436A033D5;
namespace MoleMole::Config { class ConfigHitData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
template <typename T> class Class_1_1C41F7826211BE9D;

#define CLASS_3_883E597458B91E77_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x118811E0)
#define CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x118815A0)
#define CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11881540)
#define CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x118817F0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x11882140)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x118822E0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x11881D80)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x11881DB0)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11881630)
#define CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x11882180)
#define CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x11881810)
#define CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET UNITYSDK_OFFSET(0x11881F50)
#define CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x118816F0)
#define CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x118820B0)
#define CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11881620)
#define CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET UNITYSDK_OFFSET(0x11881DD0)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x11881640)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x11881800)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x11881F40)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11881530)
#define CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11881650)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x11882160)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x118822C0)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x11881600)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x118822A0)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x11881D70)
#define CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET UNITYSDK_OFFSET(0x11881980)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x11881520)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x118816D0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x118816E0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x11881DA0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x11881DC0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x118822B0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x11882300)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11881510)
#define CLASS_3_883E597458B91E77_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11880C90)
#define CLASS_3_883E597458B91E77__CCTOR_OFFSET UNITYSDK_OFFSET(0x11881230)
#define CLASS_3_883E597458B91E77__CTOR_OFFSET UNITYSDK_OFFSET(0x118812B0)

inline static constexpr unsigned int Class_3_883E597458B91E77_TypeDefinitionIndex = 75014;

class Class_3_883E597458B91E77 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_76 = 0x1F; // 0x0
	::Class_2_7A1F9B1E855D33CF* Field_3_28; // 0x48
	::System::Action_2<::System::Single, ::System::Boolean>* Field_3_73; // 0x50
	::System::Action* Field_3_27; // 0x58
	::System::Action_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Boolean>* Field_3_72; // 0x60
	::System::Action_4<::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* Field_3_71; // 0x68
	::MoleMole::Config::ConfigHitData* Field_3_44; // 0x70
	::Class_2_EE4AD6D436A033D5* Field_3_45; // 0x78
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>>* Field_3_57; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_58; // 0x88
	::Class_2_7A1F9B1E855D33CF* Field_3_31; // 0x90
	::Class_1_1C41F7826211BE9D<::System::Single>* Field_3_26; // 0x98
	::Class_2_7A1F9B1E855D33CF* Field_3_1; // 0xA0
	::System::String* Field_3_7; // 0xA8
	::UnityEngine::Rigidbody* Field_3_19; // 0xB0
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_56; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_EB84615A56CD66EB*>* Field_3_0; // 0xC0
	::System::Collections::Generic::Dictionary_2<::Enum_3_D76E08F309AE15EC, ::System::Int32>* Field_3_53; // 0xC8
	::System::Action_1<::UnityEngine::Vector3>* Field_3_10; // 0xD0
	::Class_2_E088D84C0136926D* Field_3_74; // 0xD8
	::Class_1_DC33B6615579E69F* Field_3_32; // 0xE0
	::MoleMole::Config::AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType Field_3_65; // 0xE8
	::UnityEngine::Vector3 Field_3_30; // 0xEC
	::Enum_3_B522F8F6B3AF3BEE Field_3_33; // 0xF8
	::UnityEngine::Vector3 Field_3_2; // 0xFC
	::System::Single Field_3_24; // 0x108
	::System::Boolean Field_3_18; // 0x10C
	::System::Boolean Field_3_16; // 0x10D
	::System::Boolean Field_3_6; // 0x10E
	::System::Boolean Field_3_60; // 0x10F
	::System::Single Field_3_37; // 0x110
	::System::Int32 Field_3_9; // 0x114
	::UnityEngine::CollisionDetectionMode Field_3_22; // 0x118
	::System::Single Field_3_68; // 0x11C
	::System::Single Field_3_15; // 0x120
	::UnityEngine::Vector3 Field_3_46; // 0x124
	::System::Single Field_3_38; // 0x130
	::UnityEngine::Vector3 Field_3_4; // 0x134
	::System::Boolean Field_3_20; // 0x140
	::System::Boolean Field_3_69; // 0x141
	::Enum_3_E58B687031ED39B8 Field_3_43; // 0x142
	::System::Boolean Field_3_40; // 0x143
	::UnityEngine::Quaternion Field_3_8; // 0x144
	::System::Boolean Field_3_36; // 0x154
	::System::Boolean Field_3_63; // 0x155
	::System::Boolean Field_3_51; // 0x156
	::System::Boolean Field_3_23; // 0x157
	::System::Int32 Field_3_55; // 0x158
	::System::Int32 Field_3_14; // 0x15C
	::System::Int32 Field_3_52; // 0x160
	::System::Single Field_3_41; // 0x164
	::System::Single Field_3_13; // 0x168
	::Struct_2_418182A01BA22B26 Field_3_75; // 0x16C
	::System::Boolean Field_3_54; // 0x22C
	::System::Boolean Field_3_47; // 0x22D
	::System::Boolean Field_3_35; // 0x22E
	::System::Boolean Field_3_61; // 0x22F
	::UnityEngine::Vector3 Field_3_67; // 0x230
	::UnityEngine::Vector3 Field_3_42; // 0x23C
	::System::Boolean Field_3_34; // 0x248
	::System::Boolean Field_3_3; // 0x249
	::System::Boolean Field_3_62; // 0x24A
	::System::Boolean Field_3_48; // 0x24B
	::System::Single Field_3_70; // 0x24C
	::System::UInt32 Field_3_59; // 0x250
	::System::Single Field_3_11; // 0x254
	::System::Boolean Field_3_25; // 0x258
	::System::Boolean Field_3_5; // 0x259
	::System::Boolean Field_3_50; // 0x25A
	::System::Boolean Field_3_49; // 0x25B
	::System::Int32 Field_3_29; // 0x25C
	::UnityEngine::Vector3 Field_3_66; // 0x260
	::UnityEngine::CollisionDetectionMode Field_3_21; // 0x26C
	::System::Boolean Field_3_12; // 0x270
	::System::Boolean Field_3_39; // 0x271
	::System::Boolean Field_3_64; // 0x272
	::System::Byte Field_3_17; // 0x273

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Enum_3_E58B687031ED39B8 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_E58B687031ED39B8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	static ::Class_3_883E597458B91E77* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_883E597458B91E77*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_E58B687031ED39B8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E58B687031ED39B8))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Single Method_3_BAAB9076F0C745E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_851163D8F2F768D0(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_DC33B6615579E69F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC33B6615579E69F*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_EF66CF19E083462A()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET))(this);
	}
};
