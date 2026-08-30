#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D6670131E0ADDFF3_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x3B72ED0)

inline static constexpr unsigned int Struct_2_D6670131E0ADDFF3_TypeDefinitionIndex = 40129;

struct alignas(8) Struct_2_D6670131E0ADDFF3
{
	::RPG::Client::DesignDataShortNameHash JKBOFDEJEEP; // 0x10
	::System::Int64 OGPDIJFMIHM; // 0x18
	::System::Int64 JFAGECNFHJL; // 0x20

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D6670131E0ADDFF3_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
