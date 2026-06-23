#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D2DA96F18524EA3E_Enum_3_E545F942C12F15FD.h"
#include "unitysdk/Class_1_D2DA96F18524EA3E_Struct_2_529B3F495DCAB259_3.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_13897C6414229108;
class Class_1_5858F33063ADC66A;
class Class_1_B7E341C5F1A6F199;
class Class_1_BD2E5F64784FE078;
class Class_1_CB7F0487F7A6164A;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D2DA96F18524EA3E_METHOD_1_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0x10726F40)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1072A8D0)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x107273E0)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_44C6CCA23B6DBC57_OFFSET UNITYSDK_OFFSET(0x10727150)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_4609C0DA068D21A5_OFFSET UNITYSDK_OFFSET(0x10729360)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1072AB20)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_5EAEC6C3BF06FD95_OFFSET UNITYSDK_OFFSET(0x10729590)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x10729FD0)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_850A204F42EA1C10_OFFSET UNITYSDK_OFFSET(0x10729430)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x10728350)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x10727D10)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x1072A600)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_A22C4F1491F74BCA_OFFSET UNITYSDK_OFFSET(0x1072A1C0)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_AF8F6FD1584E3719_OFFSET UNITYSDK_OFFSET(0x10728900)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_C9B8191AED0D4B85_OFFSET UNITYSDK_OFFSET(0x1072A140)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_F3924210A62A590B_OFFSET UNITYSDK_OFFSET(0x10728580)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_F4CFB2B0CB64022E_OFFSET UNITYSDK_OFFSET(0x10727430)
#define CLASS_1_D2DA96F18524EA3E_METHOD_1_FB646F7C2EBC4F40_OFFSET UNITYSDK_OFFSET(0x10727200)
#define CLASS_1_D2DA96F18524EA3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10727140)
#define CLASS_1_D2DA96F18524EA3E__CTOR_OFFSET UNITYSDK_OFFSET(0x10726A60)

inline static constexpr unsigned int Class_1_D2DA96F18524EA3E_TypeDefinitionIndex = 86689;

class Class_1_D2DA96F18524EA3E : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D2DA96F18524EA3E_TypeDefinitionIndex)->GetStaticField(0x12410);
	}
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_16; // 0x20
	::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Field_1_20; // 0x28
	::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* Field_1_19; // 0x30
	::Class_1_5858F33063ADC66A* Field_1_17; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_9; // 0x40
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_15; // 0x50
	::Class_2_167BB37617B940E3* Field_1_14; // 0x58
	::MoleMole::Config::AbilityTargetting Field_1_1; // 0x60
	::System::Boolean Field_1_3; // 0x64
	::System::Boolean Field_1_7; // 0x65
	::System::Single Field_1_13; // 0x68
	::System::Single Field_1_8; // 0x6C
	::System::Single Field_1_2; // 0x70
	::System::Boolean Field_1_4; // 0x74
	::System::Boolean Field_1_6; // 0x75
	::System::Boolean Field_1_5; // 0x76
	::MoleMole::Config::AidAttackType Field_1_18; // 0x78
	::Class_1_D2DA96F18524EA3E_Enum_3_E545F942C12F15FD Field_1_10; // 0x7C

	::System::Void _ctor(::Class_1_5858F33063ADC66A* a1, ::Class_2_167BB37617B940E3* a2, ::Class_1_BD2E5F64784FE078* a3, ::MoleMole::Config::AidAttackType a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5858F33063ADC66A*, ::Class_2_167BB37617B940E3*, ::Class_1_BD2E5F64784FE078*, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E__CCTOR_OFFSET))();
	}

	::System::Void Method_1_44C6CCA23B6DBC57(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_44C6CCA23B6DBC57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F4CFB2B0CB64022E(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_F4CFB2B0CB64022E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F3924210A62A590B(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_F3924210A62A590B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AF8F6FD1584E3719(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_AF8F6FD1584E3719_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_1_5EAEC6C3BF06FD95(::Class_1_13897C6414229108* a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_13897C6414229108*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_5EAEC6C3BF06FD95_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A22C4F1491F74BCA(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Vector3 a2, ::Class_1_13897C6414229108* a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Vector3, ::Class_1_13897C6414229108*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_A22C4F1491F74BCA_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_850A204F42EA1C10(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>* a1, ::Class_1_D2DA96F18524EA3E_Struct_2_529B3F495DCAB259_3& a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*, ::Class_1_D2DA96F18524EA3E_Struct_2_529B3F495DCAB259_3&))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_850A204F42EA1C10_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_C9B8191AED0D4B85(::MoleMole::Battle::Entity* a1, ::Class_1_13897C6414229108* a2, ::System::UInt32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_13897C6414229108*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_C9B8191AED0D4B85_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_FB646F7C2EBC4F40()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_FB646F7C2EBC4F40_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Boolean Method_1_4609C0DA068D21A5(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_4609C0DA068D21A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D2DA96F18524EA3E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
