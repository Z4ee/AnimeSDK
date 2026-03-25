#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ToolsInfo_PaintMergeMode.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ToolsInfo_PaintMeshVisibility.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_TOOLSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x84A4050)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ToolsInfo_TypeDefinitionIndex = 37861;

	class HEU_ToolsInfo : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single _paintBrushSize; // 0x18
		::System::Single _paintBrushOpacity; // 0x1C
		::Il2CppArray<::System::Int32>* _paintIntValue; // 0x20
		::Il2CppArray<::System::Single>* _paintFloatValue; // 0x28
		::Il2CppArray<::System::String*>* _paintStringValue; // 0x30
		::System::Int32 _lastAttributesGeoID; // 0x38
		::System::Int32 _lastAttributesPartID; // 0x3C
		::System::String* _lastAttributeNodeName; // 0x40
		::System::String* _lastAttributeName; // 0x48
		::UnityEngine::Color _brushHandleColor; // 0x50
		::UnityEngine::Color _affectedAreaPaintColor; // 0x60
		::System::Boolean _liveUpdate; // 0x70
		::System::Boolean _isPainting; // 0x71
		::System::Single _editPointBoxSize; // 0x74
		::UnityEngine::Color _editPointBoxUnselectedColor; // 0x78
		::UnityEngine::Color _editPointBoxSelectedColor; // 0x88
		::System::Boolean _recacheRequired; // 0x98
		::HoudiniEngineUnity::HEU_ToolsInfo_PaintMergeMode _paintMergeMode; // 0x9C
		::System::Boolean _showOnlyEditGeometry; // 0xA0
		::System::Boolean _alwaysCookUpstream; // 0xA1
		::HoudiniEngineUnity::HEU_ToolsInfo_PaintMeshVisibility _paintMeshVisiblity; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOOLSINFO__CTOR_OFFSET))(this);
		}
	};
}
