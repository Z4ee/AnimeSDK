#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5C85280C68EBF115__CTOR_OFFSET UNITYSDK_OFFSET(0x11875280)

inline static constexpr unsigned int Class_1_5C85280C68EBF115_TypeDefinitionIndex = 48529;

class Class_1_5C85280C68EBF115 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Animation* Field_1_2; // 0x18
	::System::String* Field_1_3; // 0x20
	::System::String* Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C85280C68EBF115__CTOR_OFFSET))(this);
	}
};
