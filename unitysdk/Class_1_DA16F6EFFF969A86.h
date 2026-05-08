#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13DC0150)
#define CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC0190)

inline static constexpr unsigned int Class_1_DA16F6EFFF969A86_TypeDefinitionIndex = 80815;

class Class_1_DA16F6EFFF969A86 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_4; // 0x1C
	::UnityEngine::Vector3 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET))(this);
	}
};
