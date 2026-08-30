#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_ITEMRANGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE95DA00)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_ItemRangeData_TypeDefinitionIndex = 48115;

	class LoopGridView_ItemRangeData : public ::System::Object
	{
	public:
		::System::Int32 mMaxColumn; // 0x10
		::System::Int32 mMaxRow; // 0x14
		::UnityEngine::Vector2 mCheckedPosition; // 0x18
		::System::Int32 mMinColumn; // 0x20
		::System::Int32 mMinRow; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_ITEMRANGEDATA__CTOR_OFFSET))(this);
		}
	};
}
