#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_39890152845F6D57_OFFSET UNITYSDK_OFFSET(0x19445450)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_8CCF678D7B87E726_OFFSET UNITYSDK_OFFSET(0x194457B0)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_BFA0A6F0E5AA38FF_OFFSET UNITYSDK_OFFSET(0x19445730)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_E5AE9D4CDB9F93F3_OFFSET UNITYSDK_OFFSET(0x19445520)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED__CTOR_OFFSET UNITYSDK_OFFSET(0x194454D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsNPCControlled_TypeDefinitionIndex = 19645;

	class AdventureByIsNPCControlled : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean Any; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_39890152845F6D57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_39890152845F6D57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5AE9D4CDB9F93F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_E5AE9D4CDB9F93F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFA0A6F0E5AA38FF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_BFA0A6F0E5AA38FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8CCF678D7B87E726(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_8CCF678D7B87E726_OFFSET))(a1, a2);
		}
	};
}
