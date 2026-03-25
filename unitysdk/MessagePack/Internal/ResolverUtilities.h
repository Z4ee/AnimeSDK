#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_ACTIVATEFORMATTER_OFFSET UNITYSDK_OFFSET(0x15D60B70)
#define MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_FETCHSINGLETONFIELD_OFFSET UNITYSDK_OFFSET(0x15D52F60)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ResolverUtilities_TypeDefinitionIndex = 9197;

	class ResolverUtilities : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter* ActivateFormatter(::System::Type* formatterType, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_ACTIVATEFORMATTER_OFFSET))(formatterType, args);
		}

		static ::System::Reflection::FieldInfo* FetchSingletonField(::System::Type* formatterType)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_FETCHSINGLETONFIELD_OFFSET))(formatterType);
		}
	};
}
