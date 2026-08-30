#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Canvas; }

#define RPG_CLIENT_LAYERORDERADJUSTCANVASITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x194F5C20)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerOrderAdjustCanvasItem_TypeDefinitionIndex = 72979;

	class LayerOrderAdjustCanvasItem : public ::System::Object
	{
	public:
		::UnityEngine::Canvas* Canvas; // 0x10
		::System::Int32 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERORDERADJUSTCANVASITEM__CTOR_OFFSET))(this);
		}
	};
}
