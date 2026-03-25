#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1847A740)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_TypeDefinitionIndex = 8926;

	class ImmutableArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_TwoElementArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableArray_TypeDefinitionIndex)->GetStaticField(0x630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET))();
		}
	};
}
