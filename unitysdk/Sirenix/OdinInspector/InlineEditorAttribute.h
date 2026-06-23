#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/InlineEditorModes.h"
#include "unitysdk/Sirenix/OdinInspector/InlineEditorObjectFieldModes.h"
#include "unitysdk/System/Attribute.h"

#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1E329570)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1E329550)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1E329580)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1E329560)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E329670)
#define SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E329590)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int InlineEditorAttribute_TypeDefinitionIndex = 7321;

	class InlineEditorAttribute : public ::System::Attribute
	{
	public:
		::Sirenix::OdinInspector::InlineEditorObjectFieldModes ObjectFieldMode; // 0x10
		::System::Single PreviewWidth; // 0x14
		::System::Single PreviewHeight; // 0x18
		::System::Single MaxHeight; // 0x1C
		::System::Boolean _ExpandedHasValue_k__BackingField; // 0x20
		::System::Boolean DrawPreview; // 0x21
		::System::Boolean DrawGUI; // 0x22
		::System::Boolean DisableGUIForVCSLockedAssets; // 0x23
		::System::Boolean DrawHeader; // 0x24
		::System::Boolean HideObjectField; // 0x25
		::System::Boolean expanded; // 0x26
		::System::Boolean IncrementInlineEditorDrawerDepth; // 0x27

		::System::Void _ctor(::Sirenix::OdinInspector::InlineEditorModes inlineEditorMode, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes objectFieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::InlineEditorModes, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_OFFSET))(this, inlineEditorMode, objectFieldMode);
		}

		::System::Void _ctor_1(::Sirenix::OdinInspector::InlineEditorObjectFieldModes objectFieldMode)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::OdinInspector::InlineEditorObjectFieldModes))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE__CTOR_1_OFFSET))(this, objectFieldMode);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDED_OFFSET))(this, value);
		}

		::System::Boolean get_ExpandedHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET))(this);
		}

		::System::Void set_ExpandedHasValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_INLINEEDITORATTRIBUTE_SET_EXPANDEDHASVALUE_OFFSET))(this, value);
		}
	};
}
