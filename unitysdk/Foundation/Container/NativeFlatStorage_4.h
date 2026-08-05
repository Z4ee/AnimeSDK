#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorage_4_TypeDefinitionIndex = 8642;

	template <typename TUserData, typename T1, typename T2, typename TPointer>
	struct NativeFlatStorage_4
	{
		static ::System::Int64* StaticGet_ElementOffset()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorage_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int64* StaticGet_Stride()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorage_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_AllocationAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorage_4_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		TPointer _pointer; // 0x0
	};
}
