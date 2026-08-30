#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_8A992B43B742921A_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDF3260)
#define CLASS_1_8A992B43B742921A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF32B0)

inline static constexpr unsigned int Class_1_8A992B43B742921A_TypeDefinitionIndex = 41351;

class Class_1_8A992B43B742921A : public ::System::Object
{
public:
	::UnityEngine::Transform* FLEOJOGLCBD; // 0x10
	::UnityEngine::Transform* GFOOBKCLNAD; // 0x18
	::System::Single KKHAELMENEH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A992B43B742921A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A992B43B742921A_CLEAR_OFFSET))(this);
	}
};
