#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1468D3C154CECFF4__CTOR_OFFSET UNITYSDK_OFFSET(0x127CFB00)

inline static constexpr unsigned int Class_1_1468D3C154CECFF4_TypeDefinitionIndex = 80386;

class Class_1_1468D3C154CECFF4 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1468D3C154CECFF4__CTOR_OFFSET))(this);
	}
};
