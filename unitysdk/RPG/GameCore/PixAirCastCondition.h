#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_PIXAIRCASTCONDITION_METHOD_2_BE7E5A314C5AC875_OFFSET UNITYSDK_OFFSET(0x1D790260)
#define RPG_GAMECORE_PIXAIRCASTCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7903E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirCastCondition_TypeDefinitionIndex = 16076;

	class PixAirCastCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PixAirEventType Event; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*>* Params; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* EventCaster; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCASTCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_BE7E5A314C5AC875(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirCastCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirCastCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRCASTCONDITION_METHOD_2_BE7E5A314C5AC875_OFFSET))(a1, a2);
		}
	};
}
