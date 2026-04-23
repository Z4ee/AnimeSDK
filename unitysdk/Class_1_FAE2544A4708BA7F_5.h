#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_FAE2544A4708BA7F_5__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BF540)

inline static constexpr unsigned int Class_1_FAE2544A4708BA7F_5_TypeDefinitionIndex = 71447;

class Class_1_FAE2544A4708BA7F_5 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAE2544A4708BA7F_5__CTOR_OFFSET))(this);
	}
};
