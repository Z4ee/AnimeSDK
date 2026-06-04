#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_321DAC1151B4F640__CTOR_OFFSET UNITYSDK_OFFSET(0x141BB9F0)

inline static constexpr unsigned int Class_1_321DAC1151B4F640_TypeDefinitionIndex = 68350;

class Class_1_321DAC1151B4F640 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::Object* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_321DAC1151B4F640__CTOR_OFFSET))(this);
	}
};
