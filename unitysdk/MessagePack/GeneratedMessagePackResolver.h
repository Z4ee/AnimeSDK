#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1541C9D0)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1541CA20)
#define MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1541C9C0)

namespace MessagePack
{
	inline static constexpr unsigned int GeneratedMessagePackResolver_TypeDefinitionIndex = 35406;

	class GeneratedMessagePackResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(GeneratedMessagePackResolver_TypeDefinitionIndex)->GetStaticField(0x1A7A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_GENERATEDMESSAGEPACKRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}
	};
}
