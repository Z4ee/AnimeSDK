#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1432B5C0)
#define CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET UNITYSDK_OFFSET(0x1432B600)

inline static constexpr unsigned int Class_1_DA16F6EFFF969A86_TypeDefinitionIndex = 44264;

class Class_1_DA16F6EFFF969A86 : public ::System::Object
{
public:
	::System::UInt32 Field_1_7; // 0x10
	::UnityEngine::Vector3 Field_1_5; // 0x14
	::System::UInt32 Field_1_6; // 0x20
	::UnityEngine::Vector3 Field_1_4; // 0x24
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET))(this);
	}
};
