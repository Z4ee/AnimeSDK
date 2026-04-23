#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667__CTOR_OFFSET UNITYSDK_OFFSET(0x17E75380)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_TypeDefinitionIndex = 38446;

class Class_1_2E1C713036FDC667 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::System::Boolean Field_1_6; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_4; // 0x2E
	::UnityEngine::Vector3 Field_1_0; // 0x30
	::UnityEngine::Vector3 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667__CTOR_OFFSET))(this);
	}
};
