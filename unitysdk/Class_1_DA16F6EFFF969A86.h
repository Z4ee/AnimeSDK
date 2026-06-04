#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET UNITYSDK_OFFSET(0x13B44C40)

inline static constexpr unsigned int Class_1_DA16F6EFFF969A86_TypeDefinitionIndex = 73218;

class Class_1_DA16F6EFFF969A86 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA16F6EFFF969A86__CTOR_OFFSET))(this);
	}
};
