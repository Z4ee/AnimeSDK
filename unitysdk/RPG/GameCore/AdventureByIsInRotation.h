#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_000D135BF53E07C5_OFFSET UNITYSDK_OFFSET(0x19444620)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_091BD5AD5615AFF5_OFFSET UNITYSDK_OFFSET(0x194442A0)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_58E9826F33683F51_OFFSET UNITYSDK_OFFSET(0x194446A0)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_E1DCBC1EC452DDEE_OFFSET UNITYSDK_OFFSET(0x194441C0)
#define RPG_GAMECORE_ADVENTUREBYISINROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19444240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByIsInRotation_TypeDefinitionIndex = 19639;

	class AdventureByIsInRotation : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 TargetGroupID; // 0x20
		::System::UInt32 TargetGroupNPCID; // 0x24
		::System::String* TargetName; // 0x28
		::RPG::GameCore::EntityType TargetType; // 0x30
		::System::UInt32 NpcID; // 0x34
		::System::String* AreaName; // 0x38
		::System::String* AnchorName; // 0x40
		::RPG::MVector3 Rotation; // 0x48
		::System::Single AngleTolerate; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E1DCBC1EC452DDEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInRotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_E1DCBC1EC452DDEE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_091BD5AD5615AFF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_091BD5AD5615AFF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_000D135BF53E07C5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_000D135BF53E07C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_58E9826F33683F51(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByIsInRotation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByIsInRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYISINROTATION_METHOD_4_58E9826F33683F51_OFFSET))(a1, a2);
		}
	};
}
