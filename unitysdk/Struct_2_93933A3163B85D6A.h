#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x7C150)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x7C1A0)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x7C1F0)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x7C100)

inline static constexpr unsigned int Struct_2_93933A3163B85D6A_TypeDefinitionIndex = 57180;

struct alignas(4) Struct_2_93933A3163B85D6A
{
	::UnityEngine::RaycastHit NMGFKGDBCKE; // 0x10
	::UnityEngine::RaycastHit FHCCCCIGMIF; // 0x40
	::UnityEngine::RaycastHit DNBLIDFGJIG; // 0x70
	::UnityEngine::RaycastHit BDAIMJBFKCL; // 0xA0
	::UnityEngine::Vector3 CPFJCKCGEIC; // 0xD0
	::UnityEngine::Vector3 ABKDOCOEELA; // 0xDC

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_3_OFFSET))(this);
	}
};
