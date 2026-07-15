#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/UI/ResponsiveResize_Element_SizeDefinition.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectTransform; }

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveResize_Element_TypeDefinitionIndex = 33952;

	struct alignas(8) ResponsiveResize_Element
	{
		::Il2CppArray<::SRF::UI::ResponsiveResize_Element_SizeDefinition>* SizeDefinitions; // 0x10
		::UnityEngine::RectTransform* Target; // 0x18
	};
}
