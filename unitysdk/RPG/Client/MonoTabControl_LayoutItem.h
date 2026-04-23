#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MONOTABCONTROL_LAYOUTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA9FD840)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTabControl_LayoutItem_TypeDefinitionIndex = 66901;

	class MonoTabControl_LayoutItem : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* ButtonTrans; // 0x10
		::System::Int32 Layer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_LAYOUTITEM__CTOR_OFFSET))(this);
		}
	};
}
