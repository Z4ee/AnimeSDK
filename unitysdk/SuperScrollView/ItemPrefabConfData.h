#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_ITEMPREFABCONFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE94AF00)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemPrefabConfData_TypeDefinitionIndex = 48121;

	class ItemPrefabConfData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mItemPrefab; // 0x10
		::System::Single mPadding; // 0x18
		::System::Int32 mInitCreateCount; // 0x1C
		::System::Single mStartPosOffset; // 0x20
		::System::Single RedefineHeight; // 0x24
		::System::Single RedefineWidth; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPREFABCONFDATA__CTOR_OFFSET))(this);
		}
	};
}
