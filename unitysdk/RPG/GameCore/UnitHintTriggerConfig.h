#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_UNITHINTTRIGGERCONFIG_METHOD_2_CF3CBC968202C5C4_OFFSET UNITYSDK_OFFSET(0x1D61F910)
#define RPG_GAMECORE_UNITHINTTRIGGERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D61FAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitHintTriggerConfig_TypeDefinitionIndex = 17389;

	class UnitHintTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TriggerHintRadius; // 0x10
		::System::String* HintEffectPath; // 0x18
		::System::String* HintEffectAttachPoint; // 0x20
		::System::Single HintEffectScale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITHINTTRIGGERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CF3CBC968202C5C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnitHintTriggerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnitHintTriggerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNITHINTTRIGGERCONFIG_METHOD_2_CF3CBC968202C5C4_OFFSET))(a1, a2);
		}
	};
}
