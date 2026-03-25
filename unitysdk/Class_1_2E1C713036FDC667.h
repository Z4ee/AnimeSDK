#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667__CTOR_OFFSET UNITYSDK_OFFSET(0x16794B30)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_TypeDefinitionIndex = 32656;

class Class_1_2E1C713036FDC667 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_7; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x2C
	::UnityEngine::Vector3 Field_1_0; // 0x38
	::System::Boolean Field_1_5; // 0x44
	::System::Boolean Field_1_6; // 0x45
	::System::Boolean Field_1_4; // 0x46

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667__CTOR_OFFSET))(this);
	}
};
