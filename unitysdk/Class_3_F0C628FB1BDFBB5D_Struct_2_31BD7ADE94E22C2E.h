#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E_INVOKE_OFFSET UNITYSDK_OFFSET(0x5EC6C0)
#define CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E_METHOD_2_CFE6D1C42E20F5EF_OFFSET UNITYSDK_OFFSET(0x5EC6D0)
#define CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

inline static constexpr unsigned int Class_3_F0C628FB1BDFBB5D_Struct_2_31BD7ADE94E22C2E_TypeDefinitionIndex = 63326;

struct alignas(8) Class_3_F0C628FB1BDFBB5D_Struct_2_31BD7ADE94E22C2E
{
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* Field_2_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>*))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Void Invoke(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E_INVOKE_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_CFE6D1C42E20F5EF(::Nap::NapECS::ArchetypeComponentAccessor& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + CLASS_3_F0C628FB1BDFBB5D_STRUCT_2_31BD7ADE94E22C2E_METHOD_2_CFE6D1C42E20F5EF_OFFSET))(this, a1);
	}
	*/
};
