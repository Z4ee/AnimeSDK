#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13118FB0)
#define CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET UNITYSDK_OFFSET(0x13118FF0)

inline static constexpr unsigned int Class_1_DA16F6EFFF969A86_TypeDefinitionIndex = 43675;

class Class_1_DA16F6EFFF969A86 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_4; // 0x10
	::System::UInt32 Field_1_0; // 0x1C
	::UnityEngine::Vector3 Field_1_3; // 0x20
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86_DISPOSE_OFFSET))(this);
	}
};
