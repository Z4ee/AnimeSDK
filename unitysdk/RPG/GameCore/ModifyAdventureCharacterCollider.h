#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ColliderConfig; }

#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_METHOD_3_2B003E1D0497C98A_OFFSET UNITYSDK_OFFSET(0x18B36EB0)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_METHOD_3_C7A2990F90FB4DDB_OFFSET UNITYSDK_OFFSET(0x18B36E30)
#define RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B36E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyAdventureCharacterCollider_TypeDefinitionIndex = 21291;

	class ModifyAdventureCharacterCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HideSourceCollider; // 0x18
		::RPG::GameCore::ColliderConfig* TargetConfig; // 0x20
		::System::Boolean ModifyMainCollider; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7A2990F90FB4DDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAdventureCharacterCollider*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_METHOD_3_C7A2990F90FB4DDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B003E1D0497C98A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYADVENTURECHARACTERCOLLIDER_METHOD_3_2B003E1D0497C98A_OFFSET))(a1, a2);
		}
	};
}
