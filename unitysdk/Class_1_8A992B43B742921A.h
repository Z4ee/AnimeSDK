#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_8A992B43B742921A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1691E3C0)
#define CLASS_1_8A992B43B742921A__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E410)

inline static constexpr unsigned int Class_1_8A992B43B742921A_TypeDefinitionIndex = 33046;

class Class_1_8A992B43B742921A : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A992B43B742921A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A992B43B742921A_CLEAR_OFFSET))(this);
	}
};
