#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FollowSlotConfig; }

#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_METHOD_2_B6869B3CC34BE9D6_OFFSET UNITYSDK_OFFSET(0x189277D0)
#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18927970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSlotConstValue_TypeDefinitionIndex = 14783;

	class FollowSlotConstValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* PetSlots; // 0x10
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* CharacterSlots; // 0x18
		::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* PacManSlots; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B6869B3CC34BE9D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowSlotConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowSlotConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_METHOD_2_B6869B3CC34BE9D6_OFFSET))(a1, a2);
		}
	};
}
