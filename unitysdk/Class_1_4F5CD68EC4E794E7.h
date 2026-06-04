#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_05B2DA0FB841F389;

#define CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C496B0)
#define CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET UNITYSDK_OFFSET(0x18C49730)

inline static constexpr unsigned int Class_1_4F5CD68EC4E794E7_TypeDefinitionIndex = 40115;

class Class_1_4F5CD68EC4E794E7 : public ::System::Object
{
public:
	::Class_1_05B2DA0FB841F389* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x24
	::System::UInt32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F5CD68EC4E794E7_CLEAR_OFFSET))(this);
	}
};
