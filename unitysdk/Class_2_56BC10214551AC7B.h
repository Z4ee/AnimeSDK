#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3E7861A5123BFC05.h"
#include "unitysdk/Enum_3_611DAD94AB3EA361.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_35063B957DD57B6E.h"

class Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17;
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace MoleMole::Config { class ConfigHollowInteractEffect; }
namespace MoleMole::Config { class ConfigHollowInteractEffectImp; }
namespace MoleMole::Config { class ConfigHollowLongpressInteract; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_56BC10214551AC7B_METHOD_2_052B70A75CF3CBC0_OFFSET UNITYSDK_OFFSET(0x1490F560)
#define CLASS_2_56BC10214551AC7B_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x1490F9C0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x149100B0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x1490D510)
#define CLASS_2_56BC10214551AC7B_METHOD_2_2B846241F3BE030D_OFFSET UNITYSDK_OFFSET(0x1490DAA0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_36971FC3F16E2CEB_OFFSET UNITYSDK_OFFSET(0x1490E8C0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1490F4B0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_41755BD4857393C2_OFFSET UNITYSDK_OFFSET(0x1490EE10)
#define CLASS_2_56BC10214551AC7B_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1490F960)
#define CLASS_2_56BC10214551AC7B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1490EC90)
#define CLASS_2_56BC10214551AC7B_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x1490F4D0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_5350647F7D95244F_OFFSET UNITYSDK_OFFSET(0x1490FF30)
#define CLASS_2_56BC10214551AC7B_METHOD_2_6010115CF50BBC08_OFFSET UNITYSDK_OFFSET(0x1490F760)
#define CLASS_2_56BC10214551AC7B_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x1490E040)
#define CLASS_2_56BC10214551AC7B_METHOD_2_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x1490FD10)
#define CLASS_2_56BC10214551AC7B_METHOD_2_7E1DCA5CA64A2144_OFFSET UNITYSDK_OFFSET(0x1490ED10)
#define CLASS_2_56BC10214551AC7B_METHOD_2_97C8A1664759A71D_OFFSET UNITYSDK_OFFSET(0x1490F310)
#define CLASS_2_56BC10214551AC7B_METHOD_2_9823BFA3CE8B5542_OFFSET UNITYSDK_OFFSET(0x1490E220)
#define CLASS_2_56BC10214551AC7B_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x14910140)
#define CLASS_2_56BC10214551AC7B_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1490F8B0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_AF081070273CE162_1_OFFSET UNITYSDK_OFFSET(0x14910150)
#define CLASS_2_56BC10214551AC7B_METHOD_2_AF081070273CE162_OFFSET UNITYSDK_OFFSET(0x1490D4F0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1490FBE0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_B75D122F21CFAD25_OFFSET UNITYSDK_OFFSET(0x1490DDE0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x1490F1C0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1490DE90)
#define CLASS_2_56BC10214551AC7B_METHOD_2_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1490FF20)
#define CLASS_2_56BC10214551AC7B_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1490FE60)
#define CLASS_2_56BC10214551AC7B_METHOD_2_DA56A652C597A321_OFFSET UNITYSDK_OFFSET(0x1490FE70)
#define CLASS_2_56BC10214551AC7B_METHOD_2_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x1490FAD0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1490F4A0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1490F4C0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x14910130)
#define CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1490D4E0)
#define CLASS_2_56BC10214551AC7B_METHOD_2_F839C18265C1E16A_OFFSET UNITYSDK_OFFSET(0x1490E120)
#define CLASS_2_56BC10214551AC7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1490D310)

inline static constexpr unsigned int Class_2_56BC10214551AC7B_TypeDefinitionIndex = 55643;

class Class_2_56BC10214551AC7B : public ::Class_1_3E7861A5123BFC05
{
public:
	::Struct_2_35063B957DD57B6E Field_2_14; // 0x70
	::MoleMole::Config::ConfigHollowLongpressInteract* Field_2_3; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_56BC10214551AC7B_Class_1_F533DA0C3E730A17*>* Field_2_23; // 0xA8
	::System::Int32 Field_2_9; // 0xB0
	::System::Single Field_2_11; // 0xB4
	::System::Single Field_2_5; // 0xB8
	::System::Single Field_2_18; // 0xBC
	::System::Boolean Field_2_12; // 0xC0
	::System::Boolean Field_2_2; // 0xC1
	::System::Boolean Field_2_7; // 0xC2
	::System::Boolean Field_2_1; // 0xC3
	::Foundation::Coroutine::CoroutineHandle Field_2_10; // 0xC4
	::Enum_3_611DAD94AB3EA361 Field_2_8; // 0xC8
	::System::Boolean Field_2_13; // 0xCC
	::System::Boolean Field_2_16; // 0xCD
	::System::Boolean Field_2_0; // 0xCE
	::System::Boolean Field_2_19; // 0xCF
	::System::Boolean Field_2_15; // 0xD0
	::System::Boolean Field_2_17; // 0xD1
	::MoleMole::HollowChessboard::HollowCell Field_2_6; // 0xD4
	::System::Single Field_2_4; // 0xE0

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigHollowInteractBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_AF081070273CE162()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_AF081070273CE162_OFFSET))(this);
	}

	::System::Void Method_2_24AD3B57ADC65069(::Struct_2_35063B957DD57B6E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_35063B957DD57B6E))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_686221D5DF498040_OFFSET))(this);
	}

	::System::Int64 Method_2_F839C18265C1E16A(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_F839C18265C1E16A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9823BFA3CE8B5542(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_9823BFA3CE8B5542_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_3DACC45AC8150727(::Enum_3_611DAD94AB3EA361 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_611DAD94AB3EA361))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_97C8A1664759A71D(::MoleMole::Config::ConfigHollowInteractEffect* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowInteractEffect*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_97C8A1664759A71D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_2_36971FC3F16E2CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_36971FC3F16E2CEB_OFFSET))(this);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}

	::System::Void Method_2_052B70A75CF3CBC0(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_052B70A75CF3CBC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6010115CF50BBC08(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_6010115CF50BBC08_OFFSET))(this, a1);
	}

	::System::Void Method_2_B75D122F21CFAD25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_B75D122F21CFAD25_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_DA56A652C597A321(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_DA56A652C597A321_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Void Method_2_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_2_5350647F7D95244F(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>*))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_5350647F7D95244F_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B846241F3BE030D(::Struct_2_35063B957DD57B6E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_35063B957DD57B6E))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_2B846241F3BE030D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Boolean Method_2_41755BD4857393C2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_41755BD4857393C2_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
	}

	::System::Void Method_2_7E1DCA5CA64A2144(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_7E1DCA5CA64A2144_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::Enum_3_611DAD94AB3EA361 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_611DAD94AB3EA361(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_2_AF081070273CE162_1()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56BC10214551AC7B_METHOD_2_AF081070273CE162_1_OFFSET))(this);
	}
};
