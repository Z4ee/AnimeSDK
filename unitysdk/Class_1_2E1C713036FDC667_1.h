#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_2E1C713036FDC667_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C583B30)

inline static constexpr unsigned int Class_1_2E1C713036FDC667_1_TypeDefinitionIndex = 40276;

class Class_1_2E1C713036FDC667_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::System::Boolean Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E1C713036FDC667_1__CTOR_OFFSET))(this);
	}
};
