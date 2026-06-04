#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_0B0B4539AC3ADA4D_OFFSET UNITYSDK_OFFSET(0x194427C0)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_8C7C939E8BF2D4B0_OFFSET UNITYSDK_OFFSET(0x19442A10)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_E5DD4CADB67F3363_OFFSET UNITYSDK_OFFSET(0x19442890)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_E805B367FF158529_OFFSET UNITYSDK_OFFSET(0x19442A90)
#define RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19442840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByInMotionState_TypeDefinitionIndex = 19089;

	class AdventureByInMotionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0B0B4539AC3ADA4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInMotionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInMotionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_0B0B4539AC3ADA4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E5DD4CADB67F3363(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_E5DD4CADB67F3363_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C7C939E8BF2D4B0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_8C7C939E8BF2D4B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E805B367FF158529(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByInMotionState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByInMotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYINMOTIONSTATE_METHOD_4_E805B367FF158529_OFFSET))(a1, a2);
		}
	};
}
