#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205_INVOKE_OFFSET UNITYSDK_OFFSET(0x912180)
#define CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205_METHOD_2_CFE6D1C42E20F5EF_OFFSET UNITYSDK_OFFSET(0x912190)
#define CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

inline static constexpr unsigned int Class_3_49EBE92F3647AD1D_Struct_2_285D7F789B308205_TypeDefinitionIndex = 60096;

struct alignas(8) Class_3_49EBE92F3647AD1D_Struct_2_285D7F789B308205
{
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>*))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void Invoke(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205_INVOKE_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_CFE6D1C42E20F5EF(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_49EBE92F3647AD1D_STRUCT_2_285D7F789B308205_METHOD_2_CFE6D1C42E20F5EF_OFFSET))(this, a1);
	}
	*/
};
