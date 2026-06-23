#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FA9271BA53EF73F8.h"

namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_23819809CBBCCE83_METHOD_2_453FBD30243168C1_OFFSET UNITYSDK_OFFSET(0x11735410)
#define CLASS_2_23819809CBBCCE83_METHOD_2_BAB759ACCED7AD2E_OFFSET UNITYSDK_OFFSET(0x11735030)
#define CLASS_2_23819809CBBCCE83__CTOR_OFFSET UNITYSDK_OFFSET(0x11735010)

inline static constexpr unsigned int Class_2_23819809CBBCCE83_TypeDefinitionIndex = 41247;

class Class_2_23819809CBBCCE83 : public ::Class_1_FA9271BA53EF73F8
{
public:
	::Foundation::Unreal::FGameplayTagQuery* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_23819809CBBCCE83__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_453FBD30243168C1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_23819809CBBCCE83_METHOD_2_453FBD30243168C1_OFFSET))(this, a1);
	}

	static ::Foundation::Unreal::FGameplayTagQuery* Method_2_BAB759ACCED7AD2E(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::Foundation::Unreal::FGameplayTagQuery*(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_23819809CBBCCE83_METHOD_2_BAB759ACCED7AD2E_OFFSET))(a1);
	}
};
