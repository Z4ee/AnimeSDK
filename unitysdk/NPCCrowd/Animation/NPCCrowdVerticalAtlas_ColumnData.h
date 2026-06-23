#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdVerticalAtlas_FreeRegion.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COLUMNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE027D80)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdVerticalAtlas_ColumnData_TypeDefinitionIndex = 58128;

	class NPCCrowdVerticalAtlas_ColumnData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_FreeRegion>* freeRegions; // 0x10
		::System::Int32 allocatedHeight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COLUMNDATA__CTOR_OFFSET))(this);
		}
	};
}
