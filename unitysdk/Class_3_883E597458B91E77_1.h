#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_1003E4A6E5149B9E.h"
#include "unitysdk/Enum_3_1A3450664E1488DB.h"
#include "unitysdk/Enum_3_3DFF974943A619B7.h"
#include "unitysdk/Enum_3_56C77715ED1790F4.h"
#include "unitysdk/Enum_3_63B88169304F33FD.h"
#include "unitysdk/Enum_3_B7E66D8760FABD1A.h"
#include "unitysdk/Enum_3_C2761E57EE0B71AF.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/Struct_2_6A494F03FAA272D1.h"
#include "unitysdk/Struct_2_7745521E55AD9EEA.h"
#include "unitysdk/Struct_2_82FE4F7F2186C9FB.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_883E597458B91E77_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13F12ED0)
#define CLASS_3_883E597458B91E77_1_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x13F13580)
#define CLASS_3_883E597458B91E77_1_METHOD_3_2ACC078958F60058_OFFSET UNITYSDK_OFFSET(0x13F13110)
#define CLASS_3_883E597458B91E77_1_METHOD_3_336976A186FC8B44_1_OFFSET UNITYSDK_OFFSET(0x13F13750)
#define CLASS_3_883E597458B91E77_1_METHOD_3_336976A186FC8B44_OFFSET UNITYSDK_OFFSET(0x13F13680)
#define CLASS_3_883E597458B91E77_1_METHOD_3_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x13F132F0)
#define CLASS_3_883E597458B91E77_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13F13310)
#define CLASS_3_883E597458B91E77_1_METHOD_3_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x13F13940)
#define CLASS_3_883E597458B91E77_1_METHOD_3_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x13F13810)
#define CLASS_3_883E597458B91E77_1_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x13F133A0)
#define CLASS_3_883E597458B91E77_1_METHOD_3_BF508D80265F8A02_1_OFFSET UNITYSDK_OFFSET(0x13F13950)
#define CLASS_3_883E597458B91E77_1_METHOD_3_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x13F130A0)
#define CLASS_3_883E597458B91E77_1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13F13640)
#define CLASS_3_883E597458B91E77_1_METHOD_3_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x13F13880)
#define CLASS_3_883E597458B91E77_1_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13F13070)
#define CLASS_3_883E597458B91E77_1_METHOD_3_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x13F13080)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13F13650)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x13F13660)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x13F13670)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x13F13740)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x13F13890)
#define CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13F13100)
#define CLASS_3_883E597458B91E77_1_METHOD_3_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x13F138A0)
#define CLASS_3_883E597458B91E77_1_METHOD_3_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x13F134E0)
#define CLASS_3_883E597458B91E77_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13F12C30)
#define CLASS_3_883E597458B91E77_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F12F20)
#define CLASS_3_883E597458B91E77_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F12FA0)

inline static constexpr unsigned int Class_3_883E597458B91E77_1_TypeDefinitionIndex = 48335;

class Class_3_883E597458B91E77_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_42 = 0x29; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Collections::Generic::List_1<::Struct_2_6A494F03FAA272D1>*>* Field_3_38; // 0x48
	::System::Action_1<::System::Boolean>* Field_3_8; // 0x50
	::Class_1_8289F2785D9AA990* Field_3_15; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_10; // 0x60
	::System::Collections::Generic::List_1<::Struct_2_7745521E55AD9EEA>* Field_3_40; // 0x68
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_3>* Field_3_39; // 0x70
	::MoleMole::Battle::AnimatorParamControl* Field_3_6; // 0x78
	::Class_1_8289F2785D9AA990* Field_3_1; // 0x80
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_34; // 0x88
	::Class_1_8289F2785D9AA990* Field_3_2; // 0x90
	::System::Action_1<::System::Boolean>* Field_3_25; // 0x98
	::System::Action_2<::Class_3_883E597458B91E77_1*, ::Enum_3_1A3450664E1488DB>* Field_3_41; // 0xA0
	::System::Action_1<::System::Boolean>* Field_3_4; // 0xA8
	::Class_1_8289F2785D9AA990* Field_3_9; // 0xB0
	::MoleMole::Battle::AnimatorParamControl* Field_3_5; // 0xB8
	::System::Collections::Generic::Dictionary_2<::Enum_3_3DFF974943A619B7, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Struct_2_82FE4F7F2186C9FB>*>*>* Field_3_37; // 0xC0
	::System::Int32 Field_3_17; // 0xC8
	::System::Single Field_3_20; // 0xCC
	::System::Int32 Field_3_18; // 0xD0
	::System::Boolean Field_3_23; // 0xD4
	::Enum_3_63B88169304F33FD Field_3_32; // 0xD8
	::Foundation::Coroutine::CoroutineHandle Field_3_35; // 0xDC
	::System::Int32 Field_3_7; // 0xE0
	::Enum_3_3DFF974943A619B7 Field_3_33; // 0xE4
	::System::Single Field_3_19; // 0xE8
	::Enum_3_C2761E57EE0B71AF Field_3_28; // 0xEC
	::Enum_3_1A3450664E1488DB Field_3_16; // 0xF0
	::System::UInt32 Field_3_21; // 0xF4
	::System::Int32 Field_3_0; // 0xF8
	::Enum_3_B7E66D8760FABD1A Field_3_31; // 0xFC
	::Foundation::Coroutine::CoroutineHandle Field_3_36; // 0x100
	::UnityEngine::Vector3 Field_3_24; // 0x104
	::System::Single Field_3_14; // 0x110
	::System::Boolean Field_3_13; // 0x114
	::System::Boolean Field_3_22; // 0x115
	::System::Boolean Field_3_11; // 0x116
	::System::Boolean Field_3_30; // 0x117
	::Enum_3_1003E4A6E5149B9E Field_3_26; // 0x118
	::MoleMole::Config::AidAttackType Field_3_29; // 0x11C
	::System::Single Field_3_12; // 0x120
	::Enum_3_1003E4A6E5149B9E Field_3_27; // 0x124
	::System::Int32 Field_3_3; // 0x128

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::Enum_3_C2761E57EE0B71AF Method_3_BF508D80265F8A02()
	{
		return ((::Enum_3_C2761E57EE0B71AF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_BF508D80265F8A02_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_3_2ACC078958F60058(::Enum_3_1A3450664E1488DB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1A3450664E1488DB))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_2ACC078958F60058_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_883E597458B91E77_1* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_883E597458B91E77_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Single Method_3_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_3_336976A186FC8B44(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_336976A186FC8B44_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_4_OFFSET))(this);
	}

	::System::Void Method_3_336976A186FC8B44_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_336976A186FC8B44_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Void Method_3_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_F0088C88851A7DFB_5_OFFSET))(this);
	}

	::System::Single Method_3_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::Enum_3_1A3450664E1488DB Method_3_A96DCA30C6927810()
	{
		return ((::Enum_3_1A3450664E1488DB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_A96DCA30C6927810_OFFSET))(this);
	}

	::Enum_3_56C77715ED1790F4 Method_3_BF508D80265F8A02_1()
	{
		return ((::Enum_3_56C77715ED1790F4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883E597458B91E77_1_METHOD_3_BF508D80265F8A02_1_OFFSET))(this);
	}
};
