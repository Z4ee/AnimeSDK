#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B664B50)
#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B664B40)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitResolver_TypeDefinitionIndex = 10134;

	class UnityBlitResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::Extension::UnityBlitResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::Extension::UnityBlitResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityBlitResolver_TypeDefinitionIndex)->GetStaticField(0x770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER__CCTOR_OFFSET))();
		}
	};
}
