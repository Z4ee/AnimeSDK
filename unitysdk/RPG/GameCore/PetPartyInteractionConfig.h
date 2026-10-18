#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartyInteractionCategoryConfig; }
namespace RPG::GameCore { class PetPartySummonUnitTagMapping; }
namespace System { class String; }

#define RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_METHOD_2_014F4EE7C7380567_OFFSET UNITYSDK_OFFSET(0x1D909CC0)
#define RPG_GAMECORE_PETPARTYINTERACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D909EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionConfig_TypeDefinitionIndex = 17554;

	class PetPartyInteractionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PetPartySummonUnitTagMapping*>* SummonUnitTagMappings; // 0x10
		::Il2CppArray<::System::String*>* IdleShowNames; // 0x18
		::System::Single PublicCooldownSeconds; // 0x20
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionCategoryConfig*>* Categories; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_014F4EE7C7380567(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyInteractionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyInteractionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCONFIG_METHOD_2_014F4EE7C7380567_OFFSET))(a1, a2);
		}
	};
}
