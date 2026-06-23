#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int EnumMetaData_1_TypeDefinitionIndex = 8657;

	template <typename TEnum>
	class EnumMetaData_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Nullable_1<TEnum>>** StaticGet_SmallValue()
		{
			return (::Il2CppArray<::System::Nullable_1<TEnum>>**)Il2CppClass::FromTypeDefinitionIndex(EnumMetaData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, TEnum>** StaticGet_LargeValue()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, TEnum>**)Il2CppClass::FromTypeDefinitionIndex(EnumMetaData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::UInt64* StaticGet_MaxValue()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(EnumMetaData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumMetaData_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
