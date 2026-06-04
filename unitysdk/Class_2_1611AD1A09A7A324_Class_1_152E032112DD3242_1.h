#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_1611AD1A09A7A324_CLASS_1_152E032112DD3242_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC96A4B0)

inline static constexpr unsigned int Class_2_1611AD1A09A7A324_Class_1_152E032112DD3242_1_TypeDefinitionIndex = 68360;

class Class_2_1611AD1A09A7A324_Class_1_152E032112DD3242_1 : public ::System::Object
{
public:
	::UnityEngine::CanvasGroup* Field_1_0; // 0x10
	::UnityEngine::UI::Text* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1611AD1A09A7A324_CLASS_1_152E032112DD3242_1__CTOR_OFFSET))(this);
	}
};
