#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_ACTIVATEFORMATTER_OFFSET UNITYSDK_OFFSET(0x1816B640)
#define MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_FETCHSINGLETONFIELD_OFFSET UNITYSDK_OFFSET(0x1815E780)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ResolverUtilities_TypeDefinitionIndex = 7297;

	class ResolverUtilities : public ::System::Object
	{
	public:
		static ::MessagePack::Formatters::IMessagePackFormatter* ActivateFormatter(::System::Type* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::MessagePack::Formatters::IMessagePackFormatter*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_ACTIVATEFORMATTER_OFFSET))(a1, a2);
		}

		static ::System::Reflection::FieldInfo* FetchSingletonField(::System::Type* a1)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_RESOLVERUTILITIES_FETCHSINGLETONFIELD_OFFSET))(a1);
		}
	};
}
