#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEventPriority.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_METHOD_2_7B92CA125B902AE2_OFFSET UNITYSDK_OFFSET(0x190D1500)
#define RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x190D16A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierCallbackPriority_TypeDefinitionIndex = 17328;

	class TurnBasedModifierCallbackPriority : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TurnBasedModifierEventPriority PriorityName; // 0x10
		::System::String* Key; // 0x18
		::System::Int32 Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7B92CA125B902AE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierCallbackPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierCallbackPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCALLBACKPRIORITY_METHOD_2_7B92CA125B902AE2_OFFSET))(a1, a2);
		}
	};
}
