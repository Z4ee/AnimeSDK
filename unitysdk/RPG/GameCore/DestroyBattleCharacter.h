#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYBATTLECHARACTER_METHOD_3_09E3EF4D1AE75B21_OFFSET UNITYSDK_OFFSET(0x1D817000)
#define RPG_GAMECORE_DESTROYBATTLECHARACTER_METHOD_3_F0AE53AFD539F68D_OFFSET UNITYSDK_OFFSET(0x1D816F60)
#define RPG_GAMECORE_DESTROYBATTLECHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D816FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroyBattleCharacter_TypeDefinitionIndex = 22500;

	class DestroyBattleCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* CharacterUniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0AE53AFD539F68D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyBattleCharacter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyBattleCharacter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER_METHOD_3_F0AE53AFD539F68D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09E3EF4D1AE75B21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroyBattleCharacter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroyBattleCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYBATTLECHARACTER_METHOD_3_09E3EF4D1AE75B21_OFFSET))(a1, a2);
		}
	};
}
