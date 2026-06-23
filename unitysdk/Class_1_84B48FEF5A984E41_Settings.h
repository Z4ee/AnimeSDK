#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_84B48FEF5A984E41_SETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87E5E0)

inline static constexpr unsigned int Class_1_84B48FEF5A984E41_Settings_TypeDefinitionIndex = 7863;

class Class_1_84B48FEF5A984E41_Settings : public ::System::Object
{
public:
	::System::Boolean supportsGyroscope; // 0x10
	::UnityEngine::Vector3 gravity; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84B48FEF5A984E41_SETTINGS__CTOR_OFFSET))(this);
	}
};
