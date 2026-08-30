#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UltraDistanceGlobalDynamicOffsetMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_2CBB9F488B837A11_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3AA7680)

inline static constexpr unsigned int Struct_2_2CBB9F488B837A11_TypeDefinitionIndex = 69537;

struct alignas(4) Struct_2_2CBB9F488B837A11
{
	::System::Boolean CAGCHKJHMPD; // 0x10
	::System::Boolean BHFOMMOHPIH; // 0x11
	::UnityEngine::Vector3 DMNGLCNAEJG; // 0x14
	::RPG::Client::UltraDistanceGlobalDynamicOffsetMode JCCBNABGFKE; // 0x20
	::System::Single ELFJNNFHCGO; // 0x24
	::System::Single BJBIBMDPCNP; // 0x28
	::System::Single ACNPPNGIKDD; // 0x2C
	::System::Boolean KIDDKMBAEPF; // 0x30

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2CBB9F488B837A11_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
