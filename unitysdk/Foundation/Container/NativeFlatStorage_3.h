#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorage_3_TypeDefinitionIndex = 8893;

	template <typename TUserData, typename T, typename TPointer>
	struct NativeFlatStorage_3
	{
		TPointer _pointer; // 0x0
		static ::System::Int32* StaticGet_Alignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorage_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int64* StaticGet_ElementOffset()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorage_3_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
