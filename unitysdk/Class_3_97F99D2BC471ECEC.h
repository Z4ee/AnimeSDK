#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_31E7315FBDF3A2DD.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_56C77715ED1790F4.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_BE43F8A34B427A8E.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/Struct_2_6A494F03FAA272D1_1.h"
#include "unitysdk/Struct_2_7745521E55AD9EEA.h"
#include "unitysdk/Struct_2_82FE4F7F2186C9FB.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_97F99D2BC471ECEC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1191C760)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_2D304A92A6A1A1AB_OFFSET UNITYSDK_OFFSET(0x1191D020)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x1191C920)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1191D200)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1191CC50)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x1191CC80)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x1191CB70)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x1191CA10)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_BF508D80265F8A02_1_OFFSET UNITYSDK_OFFSET(0x1191CFB0)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x1191CE90)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1191CC70)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1191CD00)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1191C910)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1191CC30)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1191CB60)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1191CC60)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1191CD10)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1191CDC0)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1191CF00)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1191CA00)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F048BD2E40955CED_1_OFFSET UNITYSDK_OFFSET(0x1191CDD0)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_F048BD2E40955CED_OFFSET UNITYSDK_OFFSET(0x1191C940)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x1191CF10)
#define CLASS_3_97F99D2BC471ECEC_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1191CD20)
#define CLASS_3_97F99D2BC471ECEC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1191C4D0)
#define CLASS_3_97F99D2BC471ECEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1191C7B0)
#define CLASS_3_97F99D2BC471ECEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1191C830)

inline static constexpr unsigned int Class_3_97F99D2BC471ECEC_TypeDefinitionIndex = 76856;

class Class_3_97F99D2BC471ECEC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_46 = 0x2B; // 0x0
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_4; // 0x48
	::Class_1_8289F2785D9AA990* Field_3_8; // 0x50
	::System::Action_1<::System::Boolean>* Field_3_24; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_18; // 0x60
	::MoleMole::Battle::AnimatorParamControl* Field_3_11; // 0x68
	::System::Action_1<::System::Boolean>* Field_3_6; // 0x70
	::System::Action_2<::Class_3_97F99D2BC471ECEC*, ::Enum_3_31E7315FBDF3A2DD>* Field_3_47; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_15; // 0x80
	::System::String* Field_3_39; // 0x88
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_1>* Field_3_41; // 0x90
	::System::Collections::Generic::Dictionary_2<::Enum_3_3DFF974943A619B7, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_82FE4F7F2186C9FB>*>*>* Field_3_43; // 0x98
	::Class_1_8289F2785D9AA990* Field_3_0; // 0xA0
	::System::Collections::Generic::List_1<::Struct_2_7745521E55AD9EEA>* Field_3_40; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_38; // 0xB0
	::MoleMole::Battle::AnimatorParamControl* Field_3_5; // 0xB8
	::System::Action_1<::System::Boolean>* Field_3_9; // 0xC0
	::Class_1_8289F2785D9AA990* Field_3_1; // 0xC8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Collections::Generic::List_1<::Struct_2_6A494F03FAA272D1_1>*>* Field_3_42; // 0xD0
	::System::Single Field_3_19; // 0xD8
	::System::Int32 Field_3_2; // 0xDC
	::System::Single Field_3_22; // 0xE0
	::UnityEngine::Vector3 Field_3_25; // 0xE4
	::System::Int32 Field_3_23; // 0xF0
	::Enum_3_C2761E57EE0B71AF Field_3_29; // 0xF4
	::System::Boolean Field_3_14; // 0xF8
	::System::Boolean Field_3_12; // 0xF9
	::System::Boolean Field_3_35; // 0xFA
	::System::Int32 Field_3_7; // 0xFC
	::Enum_3_1003E4A6E5149B9E Field_3_31; // 0x100
	::System::Single Field_3_13; // 0x104
	::System::UInt32 Field_3_20; // 0x108
	::Enum_3_B7E66D8760FABD1A Field_3_34; // 0x10C
	::System::Int32 Field_3_10; // 0x110
	::System::Int32 Field_3_16; // 0x114
	::Foundation::Coroutine::CoroutineHandle Field_3_37; // 0x118
	::Foundation::Coroutine::CoroutineHandle Field_3_36; // 0x11C
	::Enum_3_1003E4A6E5149B9E Field_3_30; // 0x120
	::System::Single Field_3_21; // 0x124
	::System::Boolean Field_3_26; // 0x128
	::System::Boolean Field_3_27; // 0x129
	::MoleMole::Config::AidAttackType Field_3_28; // 0x12C
	::Enum_3_BE43F8A34B427A8E Field_3_33; // 0x130
	::Enum_3_3DFF974943A619B7 Field_3_32; // 0x134
	::Enum_3_31E7315FBDF3A2DD Field_3_17; // 0x138

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Void Method_3_F048BD2E40955CED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F048BD2E40955CED_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::Class_3_97F99D2BC471ECEC* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_97F99D2BC471ECEC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Enum_3_31E7315FBDF3A2DD Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_31E7315FBDF3A2DD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_3_F048BD2E40955CED_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F048BD2E40955CED_1_OFFSET))(this, a1);
	}

	::Enum_3_C2761E57EE0B71AF Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_C2761E57EE0B71AF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::Enum_3_56C77715ED1790F4 Method_3_BF508D80265F8A02_1()
	{
		return ((::Enum_3_56C77715ED1790F4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_BF508D80265F8A02_1_OFFSET))(this);
	}

	::System::Void Method_3_2D304A92A6A1A1AB(::Enum_3_31E7315FBDF3A2DD a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_31E7315FBDF3A2DD))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_2D304A92A6A1A1AB_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_97F99D2BC471ECEC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
