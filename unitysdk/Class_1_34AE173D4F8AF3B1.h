#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIGeneralTipsWidgetController; }

#define CLASS_1_34AE173D4F8AF3B1__CTOR_OFFSET UNITYSDK_OFFSET(0x161B0BF0)

inline static constexpr unsigned int Class_1_34AE173D4F8AF3B1_TypeDefinitionIndex = 75218;

class Class_1_34AE173D4F8AF3B1 : public ::System::Object
{
public:
	::MoleMole::UIGeneralTipsWidgetController* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::UnityEngine::Vector2 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34AE173D4F8AF3B1__CTOR_OFFSET))(this);
	}
};
