#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_GRIDVIEWITEMPREFABCONFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14ED83B0)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridViewItemPrefabConfData_TypeDefinitionIndex = 45858;

	class GridViewItemPrefabConfData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mItemPrefab; // 0x10
		::System::Int32 mInitCreateCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWITEMPREFABCONFDATA__CTOR_OFFSET))(this);
		}
	};
}
