#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int NtlmFlags_TypeDefinitionIndex = 2269;

	enum class NtlmFlags : ::System::Int32
	{
		NegotiateUnicode = 1,
		NegotiateOem = 2,
		RequestTarget = 4,
		NegotiateNtlm = 512,
		NegotiateDomainSupplied = 4096,
		NegotiateWorkstationSupplied = 8192,
		NegotiateAlwaysSign = 32768,
		NegotiateNtlm2Key = 524288,
		Negotiate128 = 536870912,
		Negotiate56 = -2147483648,
	};
}
