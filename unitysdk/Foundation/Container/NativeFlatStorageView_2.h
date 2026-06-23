#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorageView_2_TypeDefinitionIndex = 8483;

	template <typename TUserData, typename T>
	struct NativeFlatStorageView_2
	{
		static ::System::Int32* StaticGet_Alignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorageView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int64* StaticGet_ElementOffset()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NativeFlatStorageView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Byte* _pointer; // 0x0
	};
}
