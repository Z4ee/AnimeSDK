#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D81DF5412653B7EF_Enum_3_8FED600A2258E271.h"
#include "unitysdk/Enum_3_4D2862FD1387CEE5.h"
#include "unitysdk/MoleMole/Ability/InLevelAbilityTargetMask.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_965F1024F2AAC95F.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_351;
class Class_0_16E4307DCC419505_614;
class Class_0_16E4307DCC419505_757;
class Class_1_BFC2F9D5895EB2FB;
class Class_3_F41D242A20F8FE06;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D81DF5412653B7EF_METHOD_1_1A5EA495525C6D59_OFFSET UNITYSDK_OFFSET(0x16892DA0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x168935B0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_1_OFFSET UNITYSDK_OFFSET(0x16895080)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_2_OFFSET UNITYSDK_OFFSET(0x16895090)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x168935A0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_68B35E39D12E6DAF_OFFSET UNITYSDK_OFFSET(0x168946D0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_6C0683DAC3648934_OFFSET UNITYSDK_OFFSET(0x168943E0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_6E171A2B3C11CA10_OFFSET UNITYSDK_OFFSET(0x16894C20)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_1_OFFSET UNITYSDK_OFFSET(0x16894F10)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_2_OFFSET UNITYSDK_OFFSET(0x168950A0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x16893590)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_817E383F3D6FCFBC_OFFSET UNITYSDK_OFFSET(0x168938F0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_8924EA50BA94E580_OFFSET UNITYSDK_OFFSET(0x168936E0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_B471AD7C624B8E64_OFFSET UNITYSDK_OFFSET(0x16893BA0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_B7478240326492EF_OFFSET UNITYSDK_OFFSET(0x16894F20)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16895060)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_DD541A970D6C1A73_OFFSET UNITYSDK_OFFSET(0x16893C60)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_EAAF051609E2FFF3_OFFSET UNITYSDK_OFFSET(0x168950B0)
#define CLASS_1_D81DF5412653B7EF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16895070)
#define CLASS_1_D81DF5412653B7EF__CTOR_OFFSET UNITYSDK_OFFSET(0x16892CE0)

inline static constexpr unsigned int Class_1_D81DF5412653B7EF_TypeDefinitionIndex = 85083;

class Class_1_D81DF5412653B7EF : public ::System::Object
{
public:
	::Class_1_BFC2F9D5895EB2FB* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x28
	::Class_0_16E4307DCC419505_757* Field_1_14; // 0x30
	::System::String* Field_1_1; // 0x38
	::Class_0_16E4307DCC419505_614* Field_1_15; // 0x40
	::Class_0_16E4307DCC419505_351* Field_1_13; // 0x48
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::Struct_2_965F1024F2AAC95F>* Field_1_12; // 0x50
	::System::Boolean Field_1_10; // 0x58
	::System::Int32 Field_1_8; // 0x5C
	::System::UInt32 Field_1_0; // 0x60
	::Class_1_D81DF5412653B7EF_Enum_3_8FED600A2258E271 Field_1_11; // 0x64
	::System::Single Field_1_9; // 0x68
	::Enum_3_4D2862FD1387CEE5 Field_1_3; // 0x6C
	::MoleMole::Ability::InLevelAbilityTargetMask Field_1_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A5EA495525C6D59(::Class_3_F41D242A20F8FE06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_1A5EA495525C6D59_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_614* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_614*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_8924EA50BA94E580(::Class_3_F41D242A20F8FE06* a1, ::Struct_2_965F1024F2AAC95F a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Struct_2_965F1024F2AAC95F))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_8924EA50BA94E580_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_817E383F3D6FCFBC(::Class_3_F41D242A20F8FE06* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_817E383F3D6FCFBC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B471AD7C624B8E64(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_B471AD7C624B8E64_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C0683DAC3648934(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_6C0683DAC3648934_OFFSET))(this, a1);
	}

	::System::Void Method_1_68B35E39D12E6DAF(::Class_3_F41D242A20F8FE06* a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_68B35E39D12E6DAF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6E171A2B3C11CA10(::Class_3_F41D242A20F8FE06* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_6E171A2B3C11CA10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7DAF5B3ADF494895_1(::Class_0_16E4307DCC419505_757* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_757*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_1_OFFSET))(this, a1);
	}

	static ::Class_1_D81DF5412653B7EF* Method_1_B7478240326492EF(::System::String* a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2, ::Class_1_BFC2F9D5895EB2FB* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Collections::Generic::List_1<::System::String*>* a5, ::System::Collections::Generic::List_1<::System::Int32>* a6, ::Class_0_16E4307DCC419505_614* a7)
	{
		return ((::Class_1_D81DF5412653B7EF*(*)(::System::String*, ::MoleMole::Ability::InLevelAbilityTargetMask, ::Class_1_BFC2F9D5895EB2FB*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_B7478240326492EF_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DD541A970D6C1A73(::MoleMole::EntityHandle a1, ::MoleMole::Ability::InLevelAbilityTargetMask a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Ability::InLevelAbilityTargetMask))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_DD541A970D6C1A73_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_757* Method_1_5C00C2EE4FCF347E_1()
	{
		return ((::Class_0_16E4307DCC419505_757*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_351* Method_1_5C00C2EE4FCF347E_2()
	{
		return ((::Class_0_16E4307DCC419505_351*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_5C00C2EE4FCF347E_2_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895_2(::Class_0_16E4307DCC419505_351* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_351*))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_7DAF5B3ADF494895_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::EntityHandle, ::Struct_2_965F1024F2AAC95F>>* Method_1_EAAF051609E2FFF3()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::MoleMole::EntityHandle, ::Struct_2_965F1024F2AAC95F>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D81DF5412653B7EF_METHOD_1_EAAF051609E2FFF3_OFFSET))(this);
	}
};
