#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class Transform; }

#define STRUCT_2_241BF863AE3123B3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x3B7CA80)

inline static constexpr unsigned int Struct_2_241BF863AE3123B3_TypeDefinitionIndex = 41789;

struct alignas(8) Struct_2_241BF863AE3123B3
{
	::System::Boolean PPIIMDCGAMO; // 0x10
	::UnityEngine::RaycastHit JFHOOMGGKLJ; // 0x14
	::System::Boolean GMHNHHHDIOK; // 0x44
	::System::Boolean AJBBKEHLMBD; // 0x45
	::System::Boolean GJKGCDCOBIM; // 0x46
	::System::Boolean MEBPFNGLNNE; // 0x47
	::System::Boolean NOOCCHOLHEJ; // 0x48
	::System::Boolean EMMNBDPGJOL; // 0x49
	::System::Boolean NHNLKILBBOC; // 0x4A
	::System::Int32 EEEAGGPNDPD; // 0x4C
	::UnityEngine::Transform* LFKOMOMIAHH; // 0x50
	::System::Boolean LFACMDGNEGH; // 0x58
	::System::Boolean HEBMKEBAHAP; // 0x59
	::System::Single DCOIEPOIEFN; // 0x5C

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_241BF863AE3123B3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
