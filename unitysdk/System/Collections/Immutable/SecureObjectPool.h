#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET UNITYSDK_OFFSET(0x1AD2C660)

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int SecureObjectPool_TypeDefinitionIndex = 7037;

	class SecureObjectPool : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_poolUserIdCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SecureObjectPool_TypeDefinitionIndex)->GetStaticField(0x520);
		}

		static ::System::Int32 NewId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_IMMUTABLE_SECUREOBJECTPOOL_NEWID_OFFSET))();
		}
	};
}
