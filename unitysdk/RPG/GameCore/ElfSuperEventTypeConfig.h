#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_METHOD_2_E8833C5F72D50A33_OFFSET UNITYSDK_OFFSET(0x1BB3A400)
#define RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB3A7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfSuperEventTypeConfig_TypeDefinitionIndex = 17734;

	class ElfSuperEventTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RestaurantSuperEventType SuperEventType; // 0x10
		::System::Single CountdownTime; // 0x14
		::System::UInt32 MaxBubbleCount; // 0x18
		::System::Single BubbleInterval; // 0x1C
		::System::Single BubbleChance; // 0x20
		::System::Single BubbleDuration; // 0x24
		::System::UInt32 BubbleBonus; // 0x28
		::System::UInt32 BubbleBonusAdd; // 0x2C
		::System::Single Duration; // 0x30
		::System::String* Buffname; // 0x38
		::System::String* FoodPath; // 0x40
		::Il2CppArray<::System::String*>* BehaviorNameList; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E8833C5F72D50A33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfSuperEventTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfSuperEventTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFSUPEREVENTTYPECONFIG_METHOD_2_E8833C5F72D50A33_OFFSET))(a1, a2);
		}
	};
}
