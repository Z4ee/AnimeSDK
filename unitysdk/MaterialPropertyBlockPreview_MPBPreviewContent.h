#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialPropertyBlockPreview_MPBPreviewItemType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MATERIALPROPERTYBLOCKPREVIEW_MPBPREVIEWCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B35FB80)

inline static constexpr unsigned int MaterialPropertyBlockPreview_MPBPreviewContent_TypeDefinitionIndex = 29470;

class MaterialPropertyBlockPreview_MPBPreviewContent : public ::System::Object
{
public:
	::System::String* propertyName; // 0x10
	::System::String* propertyValueForRenderer; // 0x18
	::System::String* propertyValueForIndex0; // 0x20
	::MaterialPropertyBlockPreview_MPBPreviewItemType previewType; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPROPERTYBLOCKPREVIEW_MPBPREVIEWCONTENT__CTOR_OFFSET))(this);
	}
};
