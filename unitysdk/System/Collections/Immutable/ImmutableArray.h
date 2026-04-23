#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EB56B0)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_TypeDefinitionIndex = 9123;

	class ImmutableArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_TwoElementArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableArray_TypeDefinitionIndex)->GetStaticField(0x9D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_IMMUTABLEARRAY__CCTOR_OFFSET))();
		}
	};
}
