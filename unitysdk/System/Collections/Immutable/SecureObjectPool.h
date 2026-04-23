#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET UNITYSDK_OFFSET(0x19EB5870)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int SecureObjectPool_TypeDefinitionIndex = 9173;

	class SecureObjectPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_poolUserIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SecureObjectPool_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}

		static ::System::Int32 NewId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET))();
		}
	};
}
