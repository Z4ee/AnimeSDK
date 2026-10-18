#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_METHOD_4_9A78C7F1AB557ABC_OFFSET UNITYSDK_OFFSET(0x1D6DCEB0)
#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_METHOD_4_AA49E8DC7C62C59D_OFFSET UNITYSDK_OFFSET(0x1D6DCE70)
#define RPG_GAMECORE_FIVEDIMSPAWNARROWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DCEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSpawnArrowAction_TypeDefinitionIndex = 18730;

	class FiveDimSpawnArrowAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* NormalArrowPreset; // 0x10
		::System::String* EnhancedArrowPreset; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::Boolean RigidbodyDiscreteCollision; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AA49E8DC7C62C59D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnArrowAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnArrowAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_METHOD_4_AA49E8DC7C62C59D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9A78C7F1AB557ABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSPAWNARROWACTION_METHOD_4_9A78C7F1AB557ABC_OFFSET))(a1, a2);
		}
	};
}
