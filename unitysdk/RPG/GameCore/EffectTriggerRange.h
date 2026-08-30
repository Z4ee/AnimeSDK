#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EFFECTTRIGGERRANGE_METHOD_2_55C4DA3C96B48945_OFFSET UNITYSDK_OFFSET(0x1DB249F0)
#define RPG_GAMECORE_EFFECTTRIGGERRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectTriggerRange_TypeDefinitionIndex = 22630;

	class EffectTriggerRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartNormalizedTime; // 0x10
		::System::Single EndNormalizedTime; // 0x14
		::System::String* TriggerName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTTRIGGERRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_55C4DA3C96B48945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EffectTriggerRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EffectTriggerRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTTRIGGERRANGE_METHOD_2_55C4DA3C96B48945_OFFSET))(a1, a2);
		}
	};
}
