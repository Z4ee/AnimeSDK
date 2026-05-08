#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define MESSAGEPACK_INTERNAL_NATIVEDATETIMERESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1AF26D80)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int NativeDateTimeResolverGetFormatterHelper_TypeDefinitionIndex = 27319;

	class NativeDateTimeResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_NATIVEDATETIMERESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}
	};
}
