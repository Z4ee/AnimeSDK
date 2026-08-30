#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_UNITY_UNITYRESOLVER_WITHSTANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B669590)
#define MESSAGEPACK_UNITY_UNITYRESOLVER_WITHSTANDARDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B669580)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_WithStandardResolver_TypeDefinitionIndex = 10131;

	class UnityResolver_WithStandardResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::UnityResolver_WithStandardResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::UnityResolver_WithStandardResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityResolver_WithStandardResolver_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER_WITHSTANDARDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER_WITHSTANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
