#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CCC6A04664D5EC56_OFFSET UNITYSDK_OFFSET(0x1D3A39C0)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CD936FD75534C993_OFFSET UNITYSDK_OFFSET(0x1D3A3A90)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A3A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAdventureCharacterCollider_TypeDefinitionIndex = 22166;

	class ResetAdventureCharacterCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCC6A04664D5EC56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAdventureCharacterCollider*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAdventureCharacterCollider*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CCC6A04664D5EC56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD936FD75534C993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CD936FD75534C993_OFFSET))(a1, a2);
		}
	};
}
