#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_79898F93F3CDD53F_OFFSET UNITYSDK_OFFSET(0x18CA94F0)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CD936FD75534C993_OFFSET UNITYSDK_OFFSET(0x18CA9600)
#define RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA95D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetAdventureCharacterCollider_TypeDefinitionIndex = 21292;

	class ResetAdventureCharacterCollider : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79898F93F3CDD53F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAdventureCharacterCollider*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAdventureCharacterCollider*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_79898F93F3CDD53F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD936FD75534C993(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetAdventureCharacterCollider* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetAdventureCharacterCollider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETADVENTURECHARACTERCOLLIDER_METHOD_3_CD936FD75534C993_OFFSET))(a1, a2);
		}
	};
}
