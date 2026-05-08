#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/GlobalDisplaySettings_HandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define PATHCREATION_GLOBALDISPLAYSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6BBBC0)

namespace PathCreation
{
	inline static constexpr unsigned int GlobalDisplaySettings_TypeDefinitionIndex = 35837;

	class GlobalDisplaySettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single anchorSize; // 0x18
		::System::Single controlSize; // 0x1C
		::System::Boolean visibleBehindObjects; // 0x20
		::System::Boolean visibleWhenNotSelected; // 0x21
		::System::Boolean hideAutoControls; // 0x22
		::PathCreation::GlobalDisplaySettings_HandleType anchorShape; // 0x24
		::PathCreation::GlobalDisplaySettings_HandleType controlShape; // 0x28
		::UnityEngine::Color anchor; // 0x2C
		::UnityEngine::Color anchorHighlighted; // 0x3C
		::UnityEngine::Color anchorSelected; // 0x4C
		::UnityEngine::Color control; // 0x5C
		::UnityEngine::Color controlHighlighted; // 0x6C
		::UnityEngine::Color controlSelected; // 0x7C
		::UnityEngine::Color handleDisabled; // 0x8C
		::UnityEngine::Color controlLine; // 0x9C
		::UnityEngine::Color bezierPath; // 0xAC
		::UnityEngine::Color highlightedPath; // 0xBC
		::UnityEngine::Color bounds; // 0xCC
		::UnityEngine::Color segmentBounds; // 0xDC
		::UnityEngine::Color vertexPath; // 0xEC
		::UnityEngine::Color normals; // 0xFC
		::System::Single normalsLength; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_GLOBALDISPLAYSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
