#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEWSETTINGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF1140)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridViewSettingParam_TypeDefinitionIndex = 45860;

	class LoopGridViewSettingParam : public ::System::Object
	{
	public:
		::System::Object* mPadding; // 0x10
		::System::Object* mItemSize; // 0x18
		::System::Object* mFixedRowOrColumnCount; // 0x20
		::System::Object* mGridFixedType; // 0x28
		::System::Object* mItemPadding; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWSETTINGPARAM__CTOR_OFFSET))(this);
		}
	};
}
