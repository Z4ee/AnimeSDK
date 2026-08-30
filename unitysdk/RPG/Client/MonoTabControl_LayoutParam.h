#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MONOTABCONTROL_LAYOUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD869F40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTabControl_LayoutParam_TypeDefinitionIndex = 72535;

	class MonoTabControl_LayoutParam : public ::System::Object
	{
	public:
		::System::Single Padding; // 0x10
		::System::Single Spacing; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTABCONTROL_LAYOUTPARAM__CTOR_OFFSET))(this);
		}
	};
}
