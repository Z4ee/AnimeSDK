#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_UNITY_UNITYRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D24EB0)
#define MESSAGEPACK_UNITY_UNITYRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D24EA0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_TypeDefinitionIndex = 9873;

	class UnityResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_InstanceWithStandardResolver()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityResolver_TypeDefinitionIndex)->GetStaticField(0x840);
		}
		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityResolver_TypeDefinitionIndex)->GetStaticField(0x848);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER__CCTOR_OFFSET))();
		}
	};
}
