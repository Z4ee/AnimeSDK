#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1CC5A5764D87DC25_EJumpMode.h"
#include "unitysdk/Class_1_ED08D5C0F3E4BD73_EPauseReason.h"
#include "unitysdk/Class_1_ED08D5C0F3E4BD73_EStationOpenState.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_624;
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

#define CLASS_1_ED08D5C0F3E4BD73_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14CDAA70)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x14CDC8B0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_2DE13BE11F24F545_OFFSET UNITYSDK_OFFSET(0x14CDC320)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_2DF7969B85DC261B_OFFSET UNITYSDK_OFFSET(0x14CDA530)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_343BE0A3DB7A1AEC_1_OFFSET UNITYSDK_OFFSET(0x1645D3D0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_343BE0A3DB7A1AEC_OFFSET UNITYSDK_OFFSET(0x1645CC10)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_34A8EAB5BA14E028_OFFSET UNITYSDK_OFFSET(0x1645CD30)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_3FF6A298F61B5CBE_OFFSET UNITYSDK_OFFSET(0x1645E790)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_4C2ACACD89F4EF1A_1_OFFSET UNITYSDK_OFFSET(0x1645D330)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_4C2ACACD89F4EF1A_OFFSET UNITYSDK_OFFSET(0x1645CB70)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_54929B234837AFCA_OFFSET UNITYSDK_OFFSET(0x1645E230)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5A14C0EB184C1B6B_1_OFFSET UNITYSDK_OFFSET(0x1645E550)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5A14C0EB184C1B6B_OFFSET UNITYSDK_OFFSET(0x1645E460)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5DFF71EC803C0B64_OFFSET UNITYSDK_OFFSET(0x14CDBFA0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_62A3D0AFDD656E6E_OFFSET UNITYSDK_OFFSET(0x14CD9CD0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_6CEF7D1CDF669F4C_OFFSET UNITYSDK_OFFSET(0x1645CF50)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_83DE420911DA9E80_OFFSET UNITYSDK_OFFSET(0x14CDA3F0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_8F8FD453339F3F3F_OFFSET UNITYSDK_OFFSET(0x1645D4F0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_8FA5441D0B79BBBE_OFFSET UNITYSDK_OFFSET(0x1645D6D0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_A5D032209732E69F_OFFSET UNITYSDK_OFFSET(0x1645D7C0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B08022C41475F1A0_OFFSET UNITYSDK_OFFSET(0x1645D080)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B679E9E5B94C6DE8_OFFSET UNITYSDK_OFFSET(0x14CD9C00)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B979E65BBAE891DB_OFFSET UNITYSDK_OFFSET(0x14CDBB20)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C445B9C2687D5FEF_OFFSET UNITYSDK_OFFSET(0x14CDBFF0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x1645C950)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C88018F34E051561_OFFSET UNITYSDK_OFFSET(0x14CDB8B0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x14CDC920)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x14CDA9F0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_E51125745B21C0F8_OFFSET UNITYSDK_OFFSET(0x14CD9970)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x14CDC8C0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x1645D820)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x14CDC890)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FCBB2A076706CFD3_1_OFFSET UNITYSDK_OFFSET(0x1645D260)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FCBB2A076706CFD3_OFFSET UNITYSDK_OFFSET(0x1645CAA0)
#define CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FE6ECF5347B88DD8_OFFSET UNITYSDK_OFFSET(0x14CDB5F0)
#define CLASS_1_ED08D5C0F3E4BD73__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CDCCD0)
#define CLASS_1_ED08D5C0F3E4BD73__CTOR_OFFSET UNITYSDK_OFFSET(0x14CDC9A0)

inline static constexpr unsigned int Class_1_ED08D5C0F3E4BD73_TypeDefinitionIndex = 57159;

class Class_1_ED08D5C0F3E4BD73 : public ::System::Object
{
public:
	static ::System::Object** StaticGet_Field_1_0()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED08D5C0F3E4BD73_TypeDefinitionIndex)->GetStaticField(0x6B970);
	}
	static ::Class_1_ED08D5C0F3E4BD73** StaticGet_Field_1_1()
	{
		return (::Class_1_ED08D5C0F3E4BD73**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED08D5C0F3E4BD73_TypeDefinitionIndex)->GetStaticField(0x6B978);
	}
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_624*>* Field_1_4; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x18
	::Class_1_E008CE606C0CBC65* Field_1_6; // 0x20
	::Class_1_144A9DD221938390* Field_1_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Action_1<::Class_1_ED08D5C0F3E4BD73_EStationOpenState>*>*>* Field_1_8; // 0x30
	::Class_2_D2FADB5DB88DD906* Field_1_9; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_624*>* Field_1_10; // 0x40
	::RPG::GameCore::TimeScaleStack* Field_1_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_12; // 0x50
	::RPG::Client::MapDef* Field_1_13; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>*>* Field_1_14; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::System::Boolean>*>* Field_1_15; // 0x68
	::System::Boolean Field_1_16; // 0x70
	::System::Boolean Field_1_17; // 0x71
	::RPG::Client::ReasonBool_1<::Class_1_ED08D5C0F3E4BD73_EPauseReason> Field_1_18; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_FCBB2A076706CFD3(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FCBB2A076706CFD3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_4C2ACACD89F4EF1A_OFFSET))(this, a1);
	}

	::System::Void Method_1_343BE0A3DB7A1AEC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_343BE0A3DB7A1AEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_34A8EAB5BA14E028(::System::String* a1, ::System::Action_1<::Class_1_ED08D5C0F3E4BD73_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_ED08D5C0F3E4BD73_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_34A8EAB5BA14E028_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6CEF7D1CDF669F4C(::System::String* a1, ::System::Action_1<::Class_1_ED08D5C0F3E4BD73_EStationOpenState>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_1_ED08D5C0F3E4BD73_EStationOpenState>*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_6CEF7D1CDF669F4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B08022C41475F1A0(::System::String* a1, ::Class_1_ED08D5C0F3E4BD73_EStationOpenState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_ED08D5C0F3E4BD73_EStationOpenState))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B08022C41475F1A0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FCBB2A076706CFD3_1(::System::String* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FCBB2A076706CFD3_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4C2ACACD89F4EF1A_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_4C2ACACD89F4EF1A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_343BE0A3DB7A1AEC_1(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_343BE0A3DB7A1AEC_1_OFFSET))(this, a1, a2);
	}

	static ::Class_1_ED08D5C0F3E4BD73* Method_1_8F8FD453339F3F3F()
	{
		return ((::Class_1_ED08D5C0F3E4BD73*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_8F8FD453339F3F3F_OFFSET))();
	}

	::System::Void Method_1_8FA5441D0B79BBBE(::System::Boolean a1, ::Class_1_ED08D5C0F3E4BD73_EPauseReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_ED08D5C0F3E4BD73_EPauseReason))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_8FA5441D0B79BBBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5D032209732E69F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_A5D032209732E69F_OFFSET))(this);
	}

	::System::Void Method_1_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_1_54929B234837AFCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_54929B234837AFCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A14C0EB184C1B6B(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5A14C0EB184C1B6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A14C0EB184C1B6B_1(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5A14C0EB184C1B6B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3FF6A298F61B5CBE(::Class_1_1CC5A5764D87DC25_EJumpMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CC5A5764D87DC25_EJumpMode))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_3FF6A298F61B5CBE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E51125745B21C0F8(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_E51125745B21C0F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_B679E9E5B94C6DE8(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B679E9E5B94C6DE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62A3D0AFDD656E6E(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_62A3D0AFDD656E6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DF7969B85DC261B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_2DF7969B85DC261B_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FE6ECF5347B88DD8(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FE6ECF5347B88DD8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B979E65BBAE891DB(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_B979E65BBAE891DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5DFF71EC803C0B64(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_5DFF71EC803C0B64_OFFSET))(this, a1);
	}

	::System::Void Method_1_83DE420911DA9E80(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_83DE420911DA9E80_OFFSET))(this, a1);
	}

	::System::Void Method_1_C445B9C2687D5FEF(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C445B9C2687D5FEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DE13BE11F24F545(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_2DE13BE11F24F545_OFFSET))(this, a1);
	}

	::RPG::Client::IAssetOperation* Method_1_C88018F34E051561(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_C88018F34E051561_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::Class_1_144A9DD221938390* Method_1_24748FC20F375725()
	{
		return ((::Class_1_144A9DD221938390*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::Class_2_D2FADB5DB88DD906* Method_1_E5630A859AA24FB3()
	{
		return ((::Class_2_D2FADB5DB88DD906*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_E5630A859AA24FB3_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED08D5C0F3E4BD73_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}
};
