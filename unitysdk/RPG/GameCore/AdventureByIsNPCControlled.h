#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_8DE1721C7AA0E01A_OFFSET UNITYSDK_OFFSET(0x1AE52D30)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_E5AE9D4CDB9F93F3_OFFSET UNITYSDK_OFFSET(0x1AE52D70)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_ECF6AA591E326891_OFFSET UNITYSDK_OFFSET(0x1AE52FB0)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_EDDD5A3A9B67128E_OFFSET UNITYSDK_OFFSET(0x1AE52F80)
#define RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE52D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsNPCControlled_TypeDefinitionIndex = 20004;

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

		static ::System::Void Method_4_8DE1721C7AA0E01A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_8DE1721C7AA0E01A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5AE9D4CDB9F93F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_E5AE9D4CDB9F93F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EDDD5A3A9B67128E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_EDDD5A3A9B67128E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_ECF6AA591E326891(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsNPCControlled* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsNPCControlled*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISNPCCONTROLLED_METHOD_4_ECF6AA591E326891_OFFSET))(a1, a2);
		}
	};
}
