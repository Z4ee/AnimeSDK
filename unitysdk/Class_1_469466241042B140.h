#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_330AD880665E5240.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/Enum_3_BB5DFC1116609E15.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameContext.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_5;
class Class_1_B0BA31736A3CCA24;
class Class_1_B61C4EDDF0AF60D0;
class Class_1_C2937544035FD07F;
class Class_1_F23B38E9DDCD5F0A;
class Class_2_33A1237A5AEDC4F4;
class Class_2_785FDC7D0DA58280;
class Class_3_AE02BC8285203464_24;
class UFightServerConnectionEventCallback;
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_469466241042B140_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x113B0750)
#define CLASS_1_469466241042B140_METHOD_1_127BF17243CF91D6_OFFSET UNITYSDK_OFFSET(0x113B0C00)
#define CLASS_1_469466241042B140_METHOD_1_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0x113B12E0)
#define CLASS_1_469466241042B140_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x113B0410)
#define CLASS_1_469466241042B140_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x113B1C10)
#define CLASS_1_469466241042B140_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x113B1C00)
#define CLASS_1_469466241042B140_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x113B0830)
#define CLASS_1_469466241042B140_METHOD_1_534E5A4A75601DFA_OFFSET UNITYSDK_OFFSET(0x113B0950)
#define CLASS_1_469466241042B140_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x113B1B90)
#define CLASS_1_469466241042B140_METHOD_1_6423291ED13007B8_OFFSET UNITYSDK_OFFSET(0x113B0360)
#define CLASS_1_469466241042B140_METHOD_1_66474CCBFC6641B7_OFFSET UNITYSDK_OFFSET(0x113AFFD0)
#define CLASS_1_469466241042B140_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x113B0F30)
#define CLASS_1_469466241042B140_METHOD_1_73AD9AEDA223EE7A_OFFSET UNITYSDK_OFFSET(0x113B11E0)
#define CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET UNITYSDK_OFFSET(0x113B1BB0)
#define CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x113B1B20)
#define CLASS_1_469466241042B140_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x113B0240)
#define CLASS_1_469466241042B140_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x113B1B80)
#define CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x113B0710)
#define CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x113B06D0)
#define CLASS_1_469466241042B140_METHOD_1_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0x113B1CE0)
#define CLASS_1_469466241042B140_METHOD_1_DF8652737A9E91AB_OFFSET UNITYSDK_OFFSET(0x113B0490)
#define CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x113B1BA0)
#define CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x113AFFC0)
#define CLASS_1_469466241042B140_METHOD_1_FDE1DB4D46828A5B_OFFSET UNITYSDK_OFFSET(0x113B18C0)
#define CLASS_1_469466241042B140__CTOR_OFFSET UNITYSDK_OFFSET(0x113B1B10)

inline static constexpr unsigned int Class_1_469466241042B140_TypeDefinitionIndex = 39574;

class Class_1_469466241042B140 : public ::System::Object
{
public:
	::Class_2_785FDC7D0DA58280* Field_1_7; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B0BA31736A3CCA24*>* Field_1_5; // 0x18
	::Class_1_F23B38E9DDCD5F0A* Field_1_10; // 0x20
	::MoleMole::MiniGame::MiniGameWorldBase* Field_1_6; // 0x28
	::System::Action* Field_1_2; // 0x30
	::UFightServerConnectionEventCallback* Field_1_4; // 0x38
	::Class_1_C2937544035FD07F* Field_1_8; // 0x40
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x48
	::Class_2_33A1237A5AEDC4F4* Field_1_9; // 0x50
	::MoleMole::MiniGame::MiniGameContext Field_1_0; // 0x58
	::System::UInt64 Field_1_15; // 0x98
	::System::Int32 Field_1_20; // 0xA0
	::System::Boolean Field_1_18; // 0xA4
	::System::Boolean Field_1_12; // 0xA5
	::Foundation::Coroutine::CoroutineHandle Field_1_11; // 0xA8
	::System::Boolean Field_1_14; // 0xAC
	::System::Boolean Field_1_16; // 0xAD
	::System::Boolean Field_1_17; // 0xAE
	::System::Boolean Field_1_13; // 0xAF
	::System::Int32 Field_1_19; // 0xB0
	::Enum_3_330AD880665E5240 Field_1_3; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_66474CCBFC6641B7(::MoleMole::MiniGame::MiniGameContext a1, ::System::Action_1<::System::Boolean>* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::MiniGameContext, ::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_66474CCBFC6641B7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_6423291ED13007B8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_6423291ED13007B8_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_DF8652737A9E91AB(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_DF8652737A9E91AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_534E5A4A75601DFA(::System::Boolean a1, ::System::Nullable_1<::System::Boolean> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_534E5A4A75601DFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_127BF17243CF91D6(::UFightServerConnectionEventCallback* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UFightServerConnectionEventCallback*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_127BF17243CF91D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_1_73AD9AEDA223EE7A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_73AD9AEDA223EE7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_FDE1DB4D46828A5B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_FDE1DB4D46828A5B_OFFSET))();
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_ADF4AD3331B4D7AD_1_OFFSET))(this, a1);
	}

	::Class_2_785FDC7D0DA58280* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_785FDC7D0DA58280*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_1_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_469466241042B140_METHOD_1_D20BF56E36607D54_OFFSET))(this, a1);
	}
};
