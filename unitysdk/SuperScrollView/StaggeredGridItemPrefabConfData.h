#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define SUPERSCROLLVIEW_STAGGEREDGRIDITEMPREFABCONFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE98B800)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridItemPrefabConfData_TypeDefinitionIndex = 48133;

	class StaggeredGridItemPrefabConfData : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* mItemPrefab; // 0x10
		::System::Single mPadding; // 0x18
		::System::Int32 mInitCreateCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDITEMPREFABCONFDATA__CTOR_OFFSET))(this);
		}
	};
}
