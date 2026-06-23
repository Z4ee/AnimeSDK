#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4354CA68936C9080.h"
#include "unitysdk/Enum_3_F9160878A7322AE9.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CLASS_1_A11CB4C08EF906E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1793D650)

inline static constexpr unsigned int Class_1_A11CB4C08EF906E4_TypeDefinitionIndex = 82961;

class Class_1_A11CB4C08EF906E4 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::UI::Extension::UIButtonBase* Field_1_4; // 0x18
	::Enum_3_4354CA68936C9080 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::Enum_3_F9160878A7322AE9 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11CB4C08EF906E4__CTOR_OFFSET))(this);
	}
};
