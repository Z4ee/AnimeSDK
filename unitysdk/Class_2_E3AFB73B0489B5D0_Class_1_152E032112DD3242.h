#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E3AFB73B0489B5D0_CLASS_1_152E032112DD3242__CTOR_OFFSET UNITYSDK_OFFSET(0x11E66690)

inline static constexpr unsigned int Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242_TypeDefinitionIndex = 67175;

class Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242 : public ::System::Object
{
public:
	::UnityEngine::UI::Text* Field_1_1; // 0x10
	::UnityEngine::CanvasGroup* Field_1_2; // 0x18
	::UnityEngine::Transform* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3AFB73B0489B5D0_CLASS_1_152E032112DD3242__CTOR_OFFSET))(this);
	}
};
