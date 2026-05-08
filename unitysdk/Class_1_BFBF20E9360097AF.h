#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_BFBF20E9360097AF__CTOR_OFFSET UNITYSDK_OFFSET(0x101254F0)

inline static constexpr unsigned int Class_1_BFBF20E9360097AF_TypeDefinitionIndex = 42003;

class Class_1_BFBF20E9360097AF : public ::System::Object
{
public:
	::UnityEngine::Animation* Field_1_6; // 0x10
	::UnityEngine::Animation* Field_1_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_1; // 0x28
	::UnityEngine::RectTransform* Field_1_3; // 0x30
	::Class_2_B4378B46E0020E85* Field_1_0; // 0x38
	::MonoUITableScrollV2* Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BFBF20E9360097AF__CTOR_OFFSET))(this);
	}
};
