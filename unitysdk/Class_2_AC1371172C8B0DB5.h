#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_AC1371172C8B0DB5_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E4C180)
#define CLASS_2_AC1371172C8B0DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4C200)
#define CLASS_2_AC1371172C8B0DB5___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E4C210)

inline static constexpr unsigned int Class_2_AC1371172C8B0DB5_TypeDefinitionIndex = 40127;

class Class_2_AC1371172C8B0DB5 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::System::Single Field_2_0; // 0x338
	::UnityEngine::Vector3 Field_2_1; // 0x33C
	::System::Boolean Field_2_2; // 0x348
	::UnityEngine::Vector3 Field_2_3; // 0x34C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
