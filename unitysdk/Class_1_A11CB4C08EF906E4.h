#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4354CA68936C9080.h"
#include "unitysdk/Enum_3_F9160878A7322AE9.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define CLASS_1_A11CB4C08EF906E4__CTOR_OFFSET UNITYSDK_OFFSET(0x171A1AD0)

inline static constexpr unsigned int Class_1_A11CB4C08EF906E4_TypeDefinitionIndex = 67520;

class Class_1_A11CB4C08EF906E4 : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UIButtonBase* Field_1_4; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::Enum_3_4354CA68936C9080 Field_1_7; // 0x20
	::Enum_3_F9160878A7322AE9 Field_1_6; // 0x24
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A11CB4C08EF906E4__CTOR_OFFSET))(this);
	}
};
