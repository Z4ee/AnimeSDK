#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0_METHOD_1_615ECF09C3C6FC30_OFFSET UNITYSDK_OFFSET(0x1133E850)
#define CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x1133E720)
#define CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0__CTOR_OFFSET UNITYSDK_OFFSET(0x1133E9D0)

inline static constexpr unsigned int Class_1_F22B920916A3710A_Class_1_A606585D772B55F0_TypeDefinitionIndex = 52584;

class Class_1_F22B920916A3710A_Class_1_A606585D772B55F0 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*>* BackRoles; // 0x10
	::Il2CppArray<::System::UInt32>* CarryIDs; // 0x18
	::Il2CppArray<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*>* FrontRoles; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_615ECF09C3C6FC30(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F22B920916A3710A_CLASS_1_A606585D772B55F0_METHOD_1_615ECF09C3C6FC30_OFFSET))(this, a1);
	}
};
