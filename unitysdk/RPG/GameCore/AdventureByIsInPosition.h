#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_4045053AAD92E3E1_OFFSET UNITYSDK_OFFSET(0x1CDE58B0)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_553A6054008BBE46_OFFSET UNITYSDK_OFFSET(0x1CDE5530)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_662B7D7327F0E02E_OFFSET UNITYSDK_OFFSET(0x1CDE58F0)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_D1F7BA6CFDFD2CFF_OFFSET UNITYSDK_OFFSET(0x1CDE54E0)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE5520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsInPosition_TypeDefinitionIndex = 20543;

	class AdventureByIsInPosition : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGroupID; // 0x20
		::System::UInt32 TargetGroupNPCID; // 0x24
		::System::String* TargetName; // 0x28
		::RPG::GameCore::EntityType TargetType; // 0x30
		::System::UInt32 NpcID; // 0x34
		::System::String* AreaName; // 0x38
		::System::String* AnchorName; // 0x40
		::RPG::MVector3 Position; // 0x48
		::System::Single Range; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1F7BA6CFDFD2CFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_D1F7BA6CFDFD2CFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_553A6054008BBE46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_553A6054008BBE46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4045053AAD92E3E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_4045053AAD92E3E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_662B7D7327F0E02E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_662B7D7327F0E02E_OFFSET))(a1, a2);
		}
	};
}
