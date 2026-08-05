#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }
namespace System { class Type; }

#define MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER_GETFORMATTERHELPER_OFFSET UNITYSDK_OFFSET(0x1DFDBE90)
#define MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFDBF90)
#define MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDBE80)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int NativeDecimalResolver_TypeDefinitionIndex = 31303;

	class NativeDecimalResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::NativeDecimalResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::NativeDecimalResolver**)Il2CppClass::FromTypeDefinitionIndex(NativeDecimalResolver_TypeDefinitionIndex)->GetStaticField(0x25770);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatterHelper(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEDECIMALRESOLVER_GETFORMATTERHELPER_OFFSET))(t);
		}
	};
}
