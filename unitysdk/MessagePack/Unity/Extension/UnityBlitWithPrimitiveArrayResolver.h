#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0F04C0)
#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F04B0)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitWithPrimitiveArrayResolver_TypeDefinitionIndex = 27046;

	class UnityBlitWithPrimitiveArrayResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::Extension::UnityBlitWithPrimitiveArrayResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::Extension::UnityBlitWithPrimitiveArrayResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityBlitWithPrimitiveArrayResolver_TypeDefinitionIndex)->GetStaticField(0x1FA60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER__CCTOR_OFFSET))();
		}
	};
}
