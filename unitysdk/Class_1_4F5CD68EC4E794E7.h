#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_6D4F0531FDCA6C43;

#define CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET UNITYSDK_OFFSET(0x169E23E0)
#define CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET UNITYSDK_OFFSET(0x169E2460)

inline static constexpr unsigned int Class_1_4F5CD68EC4E794E7_TypeDefinitionIndex = 33545;

class Class_1_4F5CD68EC4E794E7 : public ::System::Object
{
public:
	::Class_1_6D4F0531FDCA6C43* Field_1_3; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x24
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET))(this);
	}
};
