#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }

#define MESSAGEPACK_UNITY_UNITYRESOLVER_GETFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D069DF0)
#define MESSAGEPACK_UNITY_UNITYRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D069FF0)
#define MESSAGEPACK_UNITY_UNITYRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D069DE0)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_TypeDefinitionIndex = 30977;

	class UnityResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::UnityResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::UnityResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityResolver_TypeDefinitionIndex)->GetStaticField(0x254A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER__CCTOR_OFFSET))();
		}

		::MessagePack::Formatters::IMessagePackFormatter* GetFormatterDynamic(::System::Type* t)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER_GETFORMATTERDYNAMIC_OFFSET))(this, t);
		}
	};
}
