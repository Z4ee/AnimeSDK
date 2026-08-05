#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_02F52C677A3937D5_Enum_3_E545F942C12F15FD.h"
#include "unitysdk/Class_1_02F52C677A3937D5_Struct_2_529B3F495DCAB259_3.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_13897C6414229108;
class Class_1_5858F33063ADC66A;
class Class_1_B7E341C5F1A6F199;
class Class_1_BD2E5F64784FE078;
class Class_1_CB7F0487F7A6164A;
class Class_2_14986121AA61AD99;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02F52C677A3937D5_METHOD_1_10C207AE0B24C5CE_OFFSET UNITYSDK_OFFSET(0x12B88570)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1104E978B618EAF4_OFFSET UNITYSDK_OFFSET(0x12B87210)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12B84F90)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x12B88080)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x12B88190)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x12B84710)
#define CLASS_1_02F52C677A3937D5_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x12B87D50)
#define CLASS_1_02F52C677A3937D5_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x12B841C0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_3BED304EFA001112_OFFSET UNITYSDK_OFFSET(0x12B84A70)
#define CLASS_1_02F52C677A3937D5_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12B84C00)
#define CLASS_1_02F52C677A3937D5_METHOD_1_44C6CCA23B6DBC57_OFFSET UNITYSDK_OFFSET(0x12B85A10)
#define CLASS_1_02F52C677A3937D5_METHOD_1_4609C0DA068D21A5_OFFSET UNITYSDK_OFFSET(0x12B84770)
#define CLASS_1_02F52C677A3937D5_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x12B88100)
#define CLASS_1_02F52C677A3937D5_METHOD_1_54EB56932793FEE5_OFFSET UNITYSDK_OFFSET(0x12B86730)
#define CLASS_1_02F52C677A3937D5_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x12B86BA0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_5EAEC6C3BF06FD95_OFFSET UNITYSDK_OFFSET(0x12B85000)
#define CLASS_1_02F52C677A3937D5_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x12B86540)
#define CLASS_1_02F52C677A3937D5_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x12B872D0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x12B84B60)
#define CLASS_1_02F52C677A3937D5_METHOD_1_841E1F33C77D2AFF_OFFSET UNITYSDK_OFFSET(0x12B84DB0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_850A204F42EA1C10_OFFSET UNITYSDK_OFFSET(0x12B84C50)
#define CLASS_1_02F52C677A3937D5_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x12B84840)
#define CLASS_1_02F52C677A3937D5_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x12B87460)
#define CLASS_1_02F52C677A3937D5_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x12B88010)
#define CLASS_1_02F52C677A3937D5_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x12B87A80)
#define CLASS_1_02F52C677A3937D5_METHOD_1_AF8F6FD1584E3719_OFFSET UNITYSDK_OFFSET(0x12B85AC0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_BB7992808E7DFB2C_OFFSET UNITYSDK_OFFSET(0x12B88180)
#define CLASS_1_02F52C677A3937D5_METHOD_1_C7A1B9F512B636A0_OFFSET UNITYSDK_OFFSET(0x12B843E0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_C9B8191AED0D4B85_OFFSET UNITYSDK_OFFSET(0x12B866B0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_DE9B241D58964D4D_OFFSET UNITYSDK_OFFSET(0x12B84AC0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_E10F871566B315C4_OFFSET UNITYSDK_OFFSET(0x12B86FC0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12B86B90)
#define CLASS_1_02F52C677A3937D5_METHOD_1_F3924210A62A590B_OFFSET UNITYSDK_OFFSET(0x12B881F0)
#define CLASS_1_02F52C677A3937D5_METHOD_1_F4CFB2B0CB64022E_OFFSET UNITYSDK_OFFSET(0x12B88650)
#define CLASS_1_02F52C677A3937D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B843D0)
#define CLASS_1_02F52C677A3937D5__CTOR_OFFSET UNITYSDK_OFFSET(0x12B83C00)

inline static constexpr unsigned int Class_1_02F52C677A3937D5_TypeDefinitionIndex = 63206;

class Class_1_02F52C677A3937D5 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_25()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02F52C677A3937D5_TypeDefinitionIndex)->GetStaticField(0xE9A0);
	}
	::System::String* Field_1_1; // 0x10
	::Class_1_5858F33063ADC66A* Field_1_16; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_14; // 0x20
	::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Field_1_22; // 0x28
	::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Field_1_21; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_26; // 0x38
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_13; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_17; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_18; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_8; // 0x58
	::Class_2_14986121AA61AD99* Field_1_19; // 0x60
	::System::Single Field_1_9; // 0x68
	::Class_1_02F52C677A3937D5_Enum_3_E545F942C12F15FD Field_1_15; // 0x6C
	::System::Single Field_1_7; // 0x70
	::System::Boolean Field_1_5; // 0x74
	::System::Boolean Field_1_10; // 0x75
	::System::Boolean Field_1_27; // 0x76
	::System::Boolean Field_1_11; // 0x77
	::System::Single Field_1_12; // 0x78
	::System::Int32 Field_1_20; // 0x7C
	::MoleMole::Config::AidAttackType Field_1_23; // 0x80
	::System::Boolean Field_1_6; // 0x84
	::System::Boolean Field_1_4; // 0x85
	::MoleMole::Config::AbilityTargetting Field_1_0; // 0x88

	::System::Void _ctor(::Class_1_5858F33063ADC66A* a1, ::Class_2_14986121AA61AD99* a2, ::Class_1_BD2E5F64784FE078* a3, ::MoleMole::Config::AidAttackType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5858F33063ADC66A*, ::Class_2_14986121AA61AD99*, ::Class_1_BD2E5F64784FE078*, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_C7A1B9F512B636A0(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_C7A1B9F512B636A0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4609C0DA068D21A5(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_4609C0DA068D21A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_3BED304EFA001112(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_3BED304EFA001112_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	static ::System::Void Method_1_850A204F42EA1C10(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a1, ::Class_1_02F52C677A3937D5_Struct_2_529B3F495DCAB259_3& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*, ::Class_1_02F52C677A3937D5_Struct_2_529B3F495DCAB259_3&))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_850A204F42EA1C10_OFFSET))(a1, a2);
	}

	::System::Single Method_1_841E1F33C77D2AFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_841E1F33C77D2AFF_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_5EAEC6C3BF06FD95(::Class_1_13897C6414229108* a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13897C6414229108*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_5EAEC6C3BF06FD95_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_44C6CCA23B6DBC57(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_44C6CCA23B6DBC57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Boolean Method_1_E10F871566B315C4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_E10F871566B315C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_AF8F6FD1584E3719(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_AF8F6FD1584E3719_OFFSET))(this, a1);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_1104E978B618EAF4(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1104E978B618EAF4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Method_1_BB7992808E7DFB2C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_BB7992808E7DFB2C_OFFSET))(this);
	}

	::System::Boolean Method_1_54EB56932793FEE5(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Vector3 a2, ::Class_1_13897C6414229108* a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Vector3, ::Class_1_13897C6414229108*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_54EB56932793FEE5_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_DE9B241D58964D4D(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_DE9B241D58964D4D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_1_C9B8191AED0D4B85(::MoleMole::Battle::Entity* a1, ::Class_1_13897C6414229108* a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_13897C6414229108*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_C9B8191AED0D4B85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_F3924210A62A590B(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_F3924210A62A590B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_10C207AE0B24C5CE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_10C207AE0B24C5CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4CFB2B0CB64022E(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_02F52C677A3937D5_METHOD_1_F4CFB2B0CB64022E_OFFSET))(this, a1);
	}
};
