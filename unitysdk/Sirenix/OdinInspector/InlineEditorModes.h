#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlineEditorModes_TypeDefinitionIndex = 7393;

	enum class InlineEditorModes : ::System::Int32
	{
		GUIOnly = 0,
		GUIAndHeader = 1,
		GUIAndPreview = 2,
		SmallPreview = 3,
		LargePreview = 4,
		FullEditor = 5,
	};
}
