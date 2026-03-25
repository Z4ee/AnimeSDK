#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_553A6054008BBE46_OFFSET UNITYSDK_OFFSET(0x16F4CDF0)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_F6B97091CCEADA81_OFFSET UNITYSDK_OFFSET(0x16F4CD10)
#define RPG_GAMECORE_ADVENTUREBYISINPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4CD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsInPosition_TypeDefinitionIndex = 19102;

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

		static ::System::Void Method_4_F6B97091CCEADA81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInPosition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInPosition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_F6B97091CCEADA81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_553A6054008BBE46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInPosition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINPOSITION_METHOD_4_553A6054008BBE46_OFFSET))(a1, a2);
		}
	};
}
