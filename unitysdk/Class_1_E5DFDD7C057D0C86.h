#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_E5DFDD7C057D0C86_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C78F90)
#define CLASS_1_E5DFDD7C057D0C86__CTOR_OFFSET UNITYSDK_OFFSET(0x18C78FF0)

inline static constexpr unsigned int Class_1_E5DFDD7C057D0C86_TypeDefinitionIndex = 39878;

class Class_1_E5DFDD7C057D0C86 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DFDD7C057D0C86__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5DFDD7C057D0C86_CLEAR_OFFSET))(this);
	}
};
