#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleAnimationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_PLAYCHIMERAANIMATION_METHOD_3_0517CDC2790729BA_OFFSET UNITYSDK_OFFSET(0x174C15C0)
#define RPG_GAMECORE_PLAYCHIMERAANIMATION_METHOD_3_44D7A2E9C5BFCCE4_OFFSET UNITYSDK_OFFSET(0x174C1620)
#define RPG_GAMECORE_PLAYCHIMERAANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x174C1610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayChimeraAnimation_TypeDefinitionIndex = 14555;

	class PlayChimeraAnimation : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleAnimationType Anim; // 0x18
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0517CDC2790729BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayChimeraAnimation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayChimeraAnimation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION_METHOD_3_0517CDC2790729BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_44D7A2E9C5BFCCE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayChimeraAnimation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayChimeraAnimation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCHIMERAANIMATION_METHOD_3_44D7A2E9C5BFCCE4_OFFSET))(a1, a2);
		}
	};
}
