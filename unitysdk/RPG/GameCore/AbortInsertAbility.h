#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ABORTINSERTABILITY_METHOD_3_51D2CEF4BEC7FE99_OFFSET UNITYSDK_OFFSET(0x16E95200)
#define RPG_GAMECORE_ABORTINSERTABILITY_METHOD_3_FEAFAFB3463B1D55_OFFSET UNITYSDK_OFFSET(0x16E95280)
#define RPG_GAMECORE_ABORTINSERTABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x16E95250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortInsertAbility_TypeDefinitionIndex = 20848;

	class AbortInsertAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetFilter; // 0x18
		::System::String* AbilityName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51D2CEF4BEC7FE99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortInsertAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortInsertAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY_METHOD_3_51D2CEF4BEC7FE99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FEAFAFB3463B1D55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortInsertAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortInsertAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTINSERTABILITY_METHOD_3_FEAFAFB3463B1D55_OFFSET))(a1, a2);
		}
	};
}
