#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ITEMINDEXDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB95BD30)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemIndexData_TypeDefinitionIndex = 44417;

	class ItemIndexData : public ::System::Object
	{
	public:
		::System::Int32 mGroupIndex; // 0x10
		::System::Int32 mIndexInGroup; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMINDEXDATA__CTOR_OFFSET))(this);
		}
	};
}
