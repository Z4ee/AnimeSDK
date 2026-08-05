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
class Class_2_BCB8A6BD835ABE14;
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
template <typename T> class Class_1_F85CF3A19F86B09D;

#define CLASS_3_883E597458B91E77_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11790E50)
#define CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x117911A0)
#define CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11791BB0)
#define CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x11791780)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x11791910)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x11791E40)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x11791790)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x117918F0)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11791190)
#define CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x117917C0)
#define CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x11791200)
#define CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET UNITYSDK_OFFSET(0x11791C40)
#define CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11791930)
#define CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11791EE0)
#define CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x11791770)
#define CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET UNITYSDK_OFFSET(0x11791A40)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x11791180)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x11791900)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x11791C20)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11791170)
#define CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x11791E60)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x11791DD0)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x11791E10)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x11791DB0)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x11791C10)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x117917B0)
#define CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET UNITYSDK_OFFSET(0x11791370)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x117918E0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x11791A30)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x11791C30)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x11791DA0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x11791DF0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x11791E00)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x11791E30)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11791760)
#define CLASS_3_883E597458B91E77_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11790920)
#define CLASS_3_883E597458B91E77__CCTOR_OFFSET UNITYSDK_OFFSET(0x11790EA0)
#define CLASS_3_883E597458B91E77__CTOR_OFFSET UNITYSDK_OFFSET(0x11790F20)

inline static constexpr unsigned int Class_3_883E597458B91E77_TypeDefinitionIndex = 60095;

class Class_3_883E597458B91E77 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_83 = 0x21; // 0x0
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>>* Field_3_62; // 0x48
	::System::Action* Field_3_28; // 0x50
	::System::Collections::Generic::Dictionary_2<::Enum_3_D76E08F309AE15EC, ::System::Int32>* Field_3_58; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_63; // 0x60
	::Class_1_F85CF3A19F86B09D<::System::Single>* Field_3_29; // 0x68
	::System::String* Field_3_8; // 0x70
	::Class_1_DC33B6615579E69F* Field_3_39; // 0x78
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_61; // 0x80
	::System::Action_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Boolean>* Field_3_79; // 0x88
	::System::Action_4<::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* Field_3_72; // 0x90
	::Class_2_7A1F9B1E855D33CF* Field_3_35; // 0x98
	::System::Collections::Generic::List_1<::Class_1_EB84615A56CD66EB*>* Field_3_7; // 0xA0
	::Class_2_EE4AD6D436A033D5* Field_3_50; // 0xA8
	::MoleMole::Config::ConfigHitData* Field_3_51; // 0xB0
	::System::Action_2<::System::Single, ::System::Boolean>* Field_3_78; // 0xB8
	::UnityEngine::Rigidbody* Field_3_20; // 0xC0
	::Class_2_7A1F9B1E855D33CF* Field_3_32; // 0xC8
	::Class_2_BCB8A6BD835ABE14* Field_3_77; // 0xD0
	::System::Action_1<::UnityEngine::Vector3>* Field_3_13; // 0xD8
	::Class_2_7A1F9B1E855D33CF* Field_3_6; // 0xE0
	::System::Boolean Field_3_66; // 0xE8
	::System::Boolean Field_3_24; // 0xE9
	::System::Boolean Field_3_19; // 0xEA
	::System::Boolean Field_3_71; // 0xEB
	::UnityEngine::CollisionDetectionMode Field_3_26; // 0xEC
	::UnityEngine::Vector3 Field_3_5; // 0xF0
	::System::Boolean Field_3_23; // 0xFC
	::System::Boolean Field_3_65; // 0xFD
	::System::Boolean Field_3_52; // 0xFE
	::System::Boolean Field_3_55; // 0xFF
	::UnityEngine::Vector3 Field_3_45; // 0x100
	::System::Single Field_3_31; // 0x10C
	::System::Int32 Field_3_56; // 0x110
	::System::Int32 Field_3_59; // 0x114
	::UnityEngine::Quaternion Field_3_15; // 0x118
	::UnityEngine::CollisionDetectionMode Field_3_25; // 0x128
	::MoleMole::Config::AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType Field_3_70; // 0x12C
	::UnityEngine::Vector3 Field_3_69; // 0x130
	::UnityEngine::Vector3 Field_3_33; // 0x13C
	::System::Single Field_3_75; // 0x148
	::System::Boolean Field_3_37; // 0x14C
	::System::Boolean Field_3_4; // 0x14D
	::System::Boolean Field_3_43; // 0x14E
	::System::Boolean Field_3_47; // 0x14F
	::System::Int32 Field_3_14; // 0x150
	::System::Single Field_3_12; // 0x154
	::Enum_3_E58B687031ED39B8 Field_3_44; // 0x158
	::System::Boolean Field_3_74; // 0x159
	::System::Boolean Field_3_30; // 0x15A
	::System::Single Field_3_41; // 0x15C
	::Struct_2_418182A01BA22B26 Field_3_76; // 0x160
	::System::Boolean Field_3_64; // 0x220
	::System::Boolean Field_3_54; // 0x221
	::System::Boolean Field_3_0; // 0x222
	::System::Boolean Field_3_67; // 0x223
	::System::Int32 Field_3_34; // 0x224
	::UnityEngine::Vector3 Field_3_11; // 0x228
	::System::Boolean Field_3_53; // 0x234
	::System::Boolean Field_3_57; // 0x235
	::Enum_3_B522F8F6B3AF3BEE Field_3_38; // 0x238
	::System::Single Field_3_16; // 0x23C
	::UnityEngine::Vector3 Field_3_68; // 0x240
	::System::UInt32 Field_3_60; // 0x24C
	::System::Int32 Field_3_17; // 0x250
	::System::Single Field_3_42; // 0x254
	::System::Single Field_3_73; // 0x258
	::System::Single Field_3_46; // 0x25C
	::UnityEngine::Vector3 Field_3_49; // 0x260
	::System::Boolean Field_3_40; // 0x26C
	::System::Boolean Field_3_9; // 0x26D
	::System::Boolean Field_3_10; // 0x26E
	::System::Byte Field_3_22; // 0x26F
	::System::Boolean Field_3_21; // 0x270
	::System::Boolean Field_3_27; // 0x271
	::System::Boolean Field_3_36; // 0x272
	::System::Boolean Field_3_48; // 0x273
	::System::Single Field_3_18; // 0x274

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

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::Enum_3_E58B687031ED39B8 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_E58B687031ED39B8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_E58B687031ED39B8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E58B687031ED39B8))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_DC33B6615579E69F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC33B6615579E69F*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Single Method_3_BAAB9076F0C745E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET))(this);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_851163D8F2F768D0(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* Method_3_EF66CF19E083462A()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	static ::Class_3_883E597458B91E77* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_883E597458B91E77*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
