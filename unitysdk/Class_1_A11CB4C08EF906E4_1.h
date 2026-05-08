#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6C9D8350BCED7528.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CLASS_1_A11CB4C08EF906E4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1327E9F0)

inline static constexpr unsigned int Class_1_A11CB4C08EF906E4_1_TypeDefinitionIndex = 41860;

class Class_1_A11CB4C08EF906E4_1 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::UI::Extension::UIButtonBase* Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_6; // 0x21
	::Enum_3_6C9D8350BCED7528 Field_1_7; // 0x22
	::System::Boolean Field_1_5; // 0x24
	::System::Boolean Field_1_4; // 0x25
	::System::Boolean Field_1_2; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11CB4C08EF906E4_1__CTOR_OFFSET))(this);
	}
};
