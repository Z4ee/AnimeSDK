#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_35B2372ACE0BFE56_OFFSET UNITYSDK_OFFSET(0x1874FAE0)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_D9E9FE15D8B5E0D6_OFFSET UNITYSDK_OFFSET(0x1874FA10)
#define RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1874FA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsContainAdventureModifier_TypeDefinitionIndex = 19766;

	class ByIsContainAdventureModifier : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* ModifierName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D9E9FE15D8B5E0D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainAdventureModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainAdventureModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_D9E9FE15D8B5E0D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_35B2372ACE0BFE56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsContainAdventureModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsContainAdventureModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONTAINADVENTUREMODIFIER_METHOD_4_35B2372ACE0BFE56_OFFSET))(a1, a2);
		}
	};
}
