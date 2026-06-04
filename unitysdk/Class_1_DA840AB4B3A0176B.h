#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_378D6C9D70A2CDE0_EJumpMode.h"
#include "unitysdk/Class_1_DA840AB4B3A0176B_EPauseReason.h"
#include "unitysdk/Class_1_DA840AB4B3A0176B_EStationOpenState.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_589;
class Class_1_144A9DD221938390;
class Class_1_E008CE606C0CBC65;
class Class_2_D2FADB5DB88DD906;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DA840AB4B3A0176B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABDF2D0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_00E1A7D5D7A6FD7A_OFFSET UNITYSDK_OFFSET(0xABDEA40)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_206E989D49F0850E_OFFSET UNITYSDK_OFFSET(0xABDFDD0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xABE04A0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_2E5A74BBDA7F0951_OFFSET UNITYSDK_OFFSET(0xABDBF70)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_4AC38C7D74462263_1_OFFSET UNITYSDK_OFFSET(0xABDC4B0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_4AC38C7D74462263_OFFSET UNITYSDK_OFFSET(0xABDBE10)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_54929B234837AFCA_OFFSET UNITYSDK_OFFSET(0xABDDB60)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_5A14C0EB184C1B6B_OFFSET UNITYSDK_OFFSET(0xABDE310)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_5DFF71EC803C0B64_OFFSET UNITYSDK_OFFSET(0xABDFD80)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_6A482EE834472847_OFFSET UNITYSDK_OFFSET(0xABDE850)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_814D155F7DAD88CA_1_OFFSET UNITYSDK_OFFSET(0xABDC400)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_814D155F7DAD88CA_OFFSET UNITYSDK_OFFSET(0xABDBD60)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_88AA7150D3396636_OFFSET UNITYSDK_OFFSET(0xABDEE40)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_8F8FD453339F3F3F_OFFSET UNITYSDK_OFFSET(0xABDC610)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_8FA5441D0B79BBBE_OFFSET UNITYSDK_OFFSET(0xABDCB20)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_A5D032209732E69F_OFFSET UNITYSDK_OFFSET(0xABDCC10)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_AA66B05894B640F7_OFFSET UNITYSDK_OFFSET(0xABDC160)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0xABDED00)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0xABDEC30)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xABDBC10)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_C6804E5BEDA102E7_OFFSET UNITYSDK_OFFSET(0xABDFFD0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_C88018F34E051561_OFFSET UNITYSDK_OFFSET(0xABDE0A0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_CB0B2A1DC3099AE9_OFFSET UNITYSDK_OFFSET(0xABDDD40)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_CF97021E3FD17606_OFFSET UNITYSDK_OFFSET(0xABDE500)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xABE0510)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xABDF250)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_D9AB7233A780D169_OFFSET UNITYSDK_OFFSET(0xABDC250)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0xABE04B0)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_EB62C8DE9FD7DAF9_OFFSET UNITYSDK_OFFSET(0xABDCC70)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_ECA33935490AF2E4_OFFSET UNITYSDK_OFFSET(0xABDD200)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_F02F7737367767B7_1_OFFSET UNITYSDK_OFFSET(0xABDC530)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_F02F7737367767B7_OFFSET UNITYSDK_OFFSET(0xABDBE90)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xABE0480)
#define CLASS_1_DA840AB4B3A0176B_METHOD_1_FC563DE1C4416DC5_OFFSET UNITYSDK_OFFSET(0xABDDE30)
#define CLASS_1_DA840AB4B3A0176B__CCTOR_OFFSET UNITYSDK_OFFSET(0xABE0590)
#define CLASS_1_DA840AB4B3A0176B__CTOR_OFFSET UNITYSDK_OFFSET(0xABDC7F0)

inline static constexpr unsigned int Class_1_DA840AB4B3A0176B_TypeDefinitionIndex = 55920;

class Class_1_DA840AB4B3A0176B : public ::System::Object
{
public:
	static ::Class_1_DA840AB4B3A0176B** StaticGet_Field_1_0()
	{
		return (::Class_1_DA840AB4B3A0176B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA840AB4B3A0176B_TypeDefinitionIndex)->GetStaticField(0x10680);
	}
	static ::System::Object** StaticGet_Field_1_1()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA840AB4B3A0176B_TypeDefinitionIndex)->GetStaticField(0x10688);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::Class_2_D2FADB5DB88DD906* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_5; // 0x18
	::Class_1_144A9DD221938390* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>*>* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_8; // 0x30
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_589*>* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_589*>* Field_1_10; // 0x40
	::RPG::GameCore::TimeScaleStack* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action_1<::Class_1_DA840AB4B3A0176B_EStationOpenState>*>*>* Field_1_12; // 0x50
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_13; // 0x58
	::Class_1_E008CE606C0CBC65* Field_1_14; // 0x60
	::RPG::Client::MapDef* Field_1_15; // 0x68
	::System::Boolean Field_1_16; // 0x70
	::System::Boolean Field_1_17; // 0x71
	::RPG::Client::ReasonBool_1<::Class_1_DA840AB4B3A0176B_EPauseReason> Field_1_18; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_814D155F7DAD88CA(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_814D155F7DAD88CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AC38C7D74462263(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_4AC38C7D74462263_OFFSET))(this, a1);
	}

	::System::Void Method_1_F02F7737367767B7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_F02F7737367767B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2E5A74BBDA7F0951(::System::String* a1, ::System::Action_1<::Class_1_DA840AB4B3A0176B_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_DA840AB4B3A0176B_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_2E5A74BBDA7F0951_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA66B05894B640F7(::System::String* a1, ::System::Action_1<::Class_1_DA840AB4B3A0176B_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_DA840AB4B3A0176B_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_AA66B05894B640F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D9AB7233A780D169(::System::String* a1, ::Class_1_DA840AB4B3A0176B_EStationOpenState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_DA840AB4B3A0176B_EStationOpenState))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_D9AB7233A780D169_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_814D155F7DAD88CA_1(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_814D155F7DAD88CA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AC38C7D74462263_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_4AC38C7D74462263_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F02F7737367767B7_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_F02F7737367767B7_1_OFFSET))(this, a1, a2);
	}

	static ::Class_1_DA840AB4B3A0176B* Method_1_8F8FD453339F3F3F()
	{
		return ((::Class_1_DA840AB4B3A0176B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_8F8FD453339F3F3F_OFFSET))();
	}

	::System::Void Method_1_8FA5441D0B79BBBE(::System::Boolean a1, ::Class_1_DA840AB4B3A0176B_EPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_DA840AB4B3A0176B_EPauseReason))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_8FA5441D0B79BBBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5D032209732E69F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_A5D032209732E69F_OFFSET))(this);
	}

	::System::Void Method_1_ECA33935490AF2E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_ECA33935490AF2E4_OFFSET))(this);
	}

	::System::Void Method_1_54929B234837AFCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_54929B234837AFCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB0B2A1DC3099AE9(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_CB0B2A1DC3099AE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A14C0EB184C1B6B(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_5A14C0EB184C1B6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A482EE834472847(::Class_1_378D6C9D70A2CDE0_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_378D6C9D70A2CDE0_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_6A482EE834472847_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_00E1A7D5D7A6FD7A(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_00E1A7D5D7A6FD7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EB62C8DE9FD7DAF9(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_EB62C8DE9FD7DAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_88AA7150D3396636(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_88AA7150D3396636_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FC563DE1C4416DC5(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_FC563DE1C4416DC5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF97021E3FD17606(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_CF97021E3FD17606_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5DFF71EC803C0B64(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_5DFF71EC803C0B64_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB1A253BFABC50A9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_AB1A253BFABC50A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_206E989D49F0850E(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_206E989D49F0850E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6804E5BEDA102E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_C6804E5BEDA102E7_OFFSET))(this, a1);
	}

	::RPG::Client::IAssetOperation* Method_1_C88018F34E051561(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_C88018F34E051561_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Class_1_144A9DD221938390* Method_1_24748FC20F375725()
	{
		return ((::Class_1_144A9DD221938390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_2_D2FADB5DB88DD906* Method_1_E5630A859AA24FB3()
	{
		return ((::Class_2_D2FADB5DB88DD906*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA840AB4B3A0176B_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}
};
