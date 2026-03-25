#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x14EA290)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x14EA2E0)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_3_OFFSET UNITYSDK_OFFSET(0x14EA330)
#define STRUCT_2_93933A3163B85D6A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x14EA240)

inline static constexpr unsigned int Struct_2_93933A3163B85D6A_TypeDefinitionIndex = 45886;

struct alignas(4) Struct_2_93933A3163B85D6A
{
	::UnityEngine::RaycastHit Field_2_0; // 0x10
	::UnityEngine::RaycastHit Field_2_1; // 0x40
	::UnityEngine::RaycastHit Field_2_2; // 0x70
	::UnityEngine::RaycastHit Field_2_3; // 0xA0
	::UnityEngine::Vector3 Field_2_4; // 0xD0
	::UnityEngine::Vector3 Field_2_5; // 0xDC

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
