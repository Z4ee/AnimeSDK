#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BA7046B740FEFA98_METHOD_2_CA339EA395E63773_OFFSET UNITYSDK_OFFSET(0x3B38CE0)

inline static constexpr unsigned int Struct_2_BA7046B740FEFA98_TypeDefinitionIndex = 78473;

struct alignas(4) Struct_2_BA7046B740FEFA98
{
	::System::UInt32 MIAFMBHCMOG; // 0x10
	::System::UInt32 AMOEOFBNMCJ; // 0x14
	::System::UInt32 DBALOLNOLGL; // 0x18
	::System::UInt32 FMJPMFEDIJL; // 0x1C

	::System::Boolean Method_2_CA339EA395E63773(::Struct_2_BA7046B740FEFA98 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_BA7046B740FEFA98))((::PBYTE)hIl2Cpp + STRUCT_2_BA7046B740FEFA98_METHOD_2_CA339EA395E63773_OFFSET))(this, a1);
	}
};
