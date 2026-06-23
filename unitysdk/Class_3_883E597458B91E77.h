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
template <typename T> class Class_1_532F890E7332989F;

#define CLASS_3_883E597458B91E77_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17489790)
#define CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x1748A850)
#define CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17489B60)
#define CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x17489BC0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x17489AF0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET UNITYSDK_OFFSET(0x17489BD0)
#define CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x17489AD0)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x17489FE0)
#define CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x17489B20)
#define CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x1748A730)
#define CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x1748A040)
#define CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET UNITYSDK_OFFSET(0x1748A5C0)
#define CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1748A410)
#define CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1748A1B0)
#define CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1748A400)
#define CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET UNITYSDK_OFFSET(0x1748A280)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1748A030)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1748A3E0)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET UNITYSDK_OFFSET(0x1748A720)
#define CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17489B50)
#define CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1748A510)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1748A250)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET UNITYSDK_OFFSET(0x1748A590)
#define CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x17489B30)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x1748A020)
#define CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17489AC0)
#define CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET UNITYSDK_OFFSET(0x17489BF0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x17489FF0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1748A000)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1748A010)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1748A240)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1748A270)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1748A3F0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x1748A5B0)
#define CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17489B10)
#define CLASS_3_883E597458B91E77_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17489250)
#define CLASS_3_883E597458B91E77__CCTOR_OFFSET UNITYSDK_OFFSET(0x174897E0)
#define CLASS_3_883E597458B91E77__CTOR_OFFSET UNITYSDK_OFFSET(0x17489860)

inline static constexpr unsigned int Class_3_883E597458B91E77_TypeDefinitionIndex = 68495;

class Class_3_883E597458B91E77 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_76 = 0x21; // 0x0
	::System::String* Field_3_7; // 0x48
	::Class_1_DC33B6615579E69F* Field_3_32; // 0x50
	::System::Action_2<::System::Single, ::System::Boolean>* Field_3_73; // 0x58
	::Class_2_7A1F9B1E855D33CF* Field_3_1; // 0x60
	::Class_1_532F890E7332989F<::System::Single>* Field_3_26; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_58; // 0x70
	::Class_2_7A1F9B1E855D33CF* Field_3_28; // 0x78
	::Class_2_EE4AD6D436A033D5* Field_3_45; // 0x80
	::System::Action_1<::UnityEngine::Vector3>* Field_3_10; // 0x88
	::MoleMole::Config::ConfigHitData* Field_3_44; // 0x90
	::System::Collections::Generic::List_1<::Class_1_EB84615A56CD66EB*>* Field_3_0; // 0x98
	::System::Action_4<::System::Single, ::System::Int32, ::System::Single, ::System::Int32>* Field_3_71; // 0xA0
	::Class_2_7A1F9B1E855D33CF* Field_3_31; // 0xA8
	::System::Collections::Generic::Dictionary_2<::Enum_3_D76E08F309AE15EC, ::System::Int32>* Field_3_53; // 0xB0
	::System::Action* Field_3_27; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_56; // 0xC0
	::System::Action_4<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::Boolean>* Field_3_72; // 0xC8
	::System::Collections::Generic::List_1<::Foundation::Tuple_2<::UnityEngine::Collider*, ::UnityEngine::GameObject*>>* Field_3_57; // 0xD0
	::UnityEngine::Rigidbody* Field_3_19; // 0xD8
	::Class_2_E088D84C0136926D* Field_3_74; // 0xE0
	::UnityEngine::Vector3 Field_3_2; // 0xE8
	::System::Boolean Field_3_12; // 0xF4
	::System::Boolean Field_3_51; // 0xF5
	::System::Boolean Field_3_62; // 0xF6
	::System::Boolean Field_3_39; // 0xF7
	::System::Single Field_3_15; // 0xF8
	::System::Single Field_3_38; // 0xFC
	::UnityEngine::CollisionDetectionMode Field_3_21; // 0x100
	::System::Single Field_3_11; // 0x104
	::MoleMole::Config::AnimatorZoneMuteAnimatorVelocityInCollision_VelocityType Field_3_65; // 0x108
	::Struct_2_418182A01BA22B26 Field_3_75; // 0x10C
	::System::Boolean Field_3_3; // 0x1CC
	::System::Boolean Field_3_6; // 0x1CD
	::System::Boolean Field_3_47; // 0x1CE
	::System::Boolean Field_3_69; // 0x1CF
	::UnityEngine::Vector3 Field_3_66; // 0x1D0
	::System::UInt32 Field_3_59; // 0x1DC
	::System::Single Field_3_37; // 0x1E0
	::System::Int32 Field_3_29; // 0x1E4
	::UnityEngine::Vector3 Field_3_4; // 0x1E8
	::UnityEngine::Quaternion Field_3_8; // 0x1F4
	::System::Boolean Field_3_16; // 0x204
	::System::Boolean Field_3_20; // 0x205
	::System::Boolean Field_3_50; // 0x206
	::System::Boolean Field_3_64; // 0x207
	::UnityEngine::Vector3 Field_3_42; // 0x208
	::Enum_3_B522F8F6B3AF3BEE Field_3_33; // 0x214
	::System::Boolean Field_3_18; // 0x218
	::System::Boolean Field_3_36; // 0x219
	::System::Boolean Field_3_35; // 0x21A
	::System::Boolean Field_3_40; // 0x21B
	::System::Int32 Field_3_55; // 0x21C
	::System::Single Field_3_41; // 0x220
	::System::Int32 Field_3_9; // 0x224
	::UnityEngine::Vector3 Field_3_46; // 0x228
	::UnityEngine::Vector3 Field_3_30; // 0x234
	::UnityEngine::CollisionDetectionMode Field_3_22; // 0x240
	::System::Single Field_3_70; // 0x244
	::System::Boolean Field_3_49; // 0x248
	::System::Boolean Field_3_5; // 0x249
	::System::Boolean Field_3_60; // 0x24A
	::System::Boolean Field_3_54; // 0x24B
	::System::Byte Field_3_17; // 0x24C
	::System::Boolean Field_3_48; // 0x24D
	::System::Boolean Field_3_34; // 0x24E
	::System::Boolean Field_3_23; // 0x24F
	::UnityEngine::Vector3 Field_3_67; // 0x250
	::System::Single Field_3_24; // 0x25C
	::System::Int32 Field_3_14; // 0x260
	::System::Int32 Field_3_52; // 0x264
	::System::Single Field_3_13; // 0x268
	::System::Single Field_3_68; // 0x26C
	::Enum_3_E58B687031ED39B8 Field_3_43; // 0x270
	::System::Boolean Field_3_25; // 0x271
	::System::Boolean Field_3_63; // 0x272
	::System::Boolean Field_3_61; // 0x273

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

	::System::Void Method_3_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_3_3DACC45AC8150727(::Enum_3_E58B687031ED39B8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E58B687031ED39B8))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_4E8DF6F8A37B229A_2_OFFSET))(this, a1);
	}

	::UnityEngine::Rigidbody* Method_3_EF66CF19E083462A()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_EF66CF19E083462A_OFFSET))(this);
	}

	::System::Single Method_3_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_77577333B4681208_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Single Method_3_BAAB9076F0C745E3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_BAAB9076F0C745E3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_6_OFFSET))(this);
	}

	::Enum_3_E58B687031ED39B8 Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_E58B687031ED39B8(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::Class_3_883E597458B91E77* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_883E597458B91E77*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_D37FAD0A6AA04B25_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_F0088C88851A7DFB_7_OFFSET))(this);
	}

	::System::Void Method_3_851163D8F2F768D0(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_851163D8F2F768D0_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264_3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_C74E50CBD41F0264_3_OFFSET))(this, a1);
	}

	::System::Void Method_3_70437D85C11C5222(::Class_1_DC33B6615579E69F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DC33B6615579E69F*))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_70437D85C11C5222_OFFSET))(this, a1);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}
};
