#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_02A7C0CD32923589_OFFSET UNITYSDK_OFFSET(0x17015D80)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_0C1C52F8231F960E_OFFSET UNITYSDK_OFFSET(0x17015E30)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17015BA0)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x17015CF0)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_9A08B9BC0E943AD5_OFFSET UNITYSDK_OFFSET(0x17015DD0)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17015F20)
#define CLASS_2_9BAB43AD508ABA7B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17015E80)
#define CLASS_2_9BAB43AD508ABA7B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17015C20)
#define CLASS_2_9BAB43AD508ABA7B__CTOR_OFFSET UNITYSDK_OFFSET(0x17015C90)

inline static constexpr unsigned int Class_2_9BAB43AD508ABA7B_TypeDefinitionIndex = 66792;

class Class_2_9BAB43AD508ABA7B : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x108; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::GameplayTag>* Field_2_1; // 0x20
	::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_02A7C0CD32923589(::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2 a1, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_02A7C0CD32923589_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A08B9BC0E943AD5(::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2 a1, ::MoleMole::GameplayTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_9A08B9BC0E943AD5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0C1C52F8231F960E(::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2 a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9BAB43AD508ABA7B_Enum_3_A5191D6218CE9E26_2, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_0C1C52F8231F960E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9BAB43AD508ABA7B_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
