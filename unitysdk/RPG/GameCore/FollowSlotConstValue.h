#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FollowSlotConfig; }

#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_METHOD_2_4DB188DF7CD9C0F4_OFFSET UNITYSDK_OFFSET(0x19762B50)
#define RPG_GAMECORE_FOLLOWSLOTCONSTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19762CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FollowSlotConstValue_TypeDefinitionIndex = 14847;

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

		static ::System::Void Method_2_4DB188DF7CD9C0F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FollowSlotConstValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FollowSlotConstValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOLLOWSLOTCONSTVALUE_METHOD_2_4DB188DF7CD9C0F4_OFFSET))(a1, a2);
		}
	};
}
