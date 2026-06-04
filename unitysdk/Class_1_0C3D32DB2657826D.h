#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_0C3D32DB2657826D__CTOR_OFFSET UNITYSDK_OFFSET(0x13FED7B0)

inline static constexpr unsigned int Class_1_0C3D32DB2657826D_TypeDefinitionIndex = 53752;

class Class_1_0C3D32DB2657826D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C3D32DB2657826D__CTOR_OFFSET))(this);
	}
};
