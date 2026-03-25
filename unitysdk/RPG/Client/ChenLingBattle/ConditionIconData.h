#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingIconType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_CONDITIONICONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x2BD80)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ConditionIconData_TypeDefinitionIndex = 62110;

	struct alignas(8) ConditionIconData
	{
		::RPG::GameCore::ChenLingIconType Type; // 0x10
		::System::String* Path; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChenLingIconType iconType, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingIconType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CONDITIONICONDATA__CTOR_OFFSET))(this, iconType, iconPath);
		}
	};
}
