#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_AA8A1DE0DBEE1813_CLASS_1_5CD602DED6135DB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1419FF30)

inline static constexpr unsigned int Class_2_AA8A1DE0DBEE1813_Class_1_5CD602DED6135DB1_TypeDefinitionIndex = 55109;

class Class_2_AA8A1DE0DBEE1813_Class_1_5CD602DED6135DB1 : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UIToggleButton* Field_1_2; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA8A1DE0DBEE1813_CLASS_1_5CD602DED6135DB1__CTOR_OFFSET))(this);
	}
};
