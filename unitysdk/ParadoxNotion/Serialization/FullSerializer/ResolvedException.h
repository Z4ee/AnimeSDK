#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION_GET_RAWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D80D7C0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION_SET_RAWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D80D7D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D7E0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int ResolvedException_TypeDefinitionIndex = 29956;

	class ResolvedException : public ::System::Exception
	{
	public:
		::System::Exception* _RawException_k__BackingField; // 0x88

		::System::Void _ctor(::System::Exception* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION__CTOR_OFFSET))(this, e);
		}

		::System::Exception* get_RawException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION_GET_RAWEXCEPTION_OFFSET))(this);
		}

		::System::Void set_RawException(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_RESOLVEDEXCEPTION_SET_RAWEXCEPTION_OFFSET))(this, value);
		}
	};
}
