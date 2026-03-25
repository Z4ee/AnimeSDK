#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_METHOD_4_5BB3B1E2FD82AE15_OFFSET UNITYSDK_OFFSET(0x1700BA40)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_METHOD_4_698F455628C9FEDB_OFFSET UNITYSDK_OFFSET(0x1700B970)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1700B9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialScriptStep_TypeDefinitionIndex = 20065;

	class ByCompareHeartDialScriptStep : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ScriptID; // 0x20
		::RPG::GameCore::HeartDialStepType Step; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_698F455628C9FEDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptStep*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_METHOD_4_698F455628C9FEDB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5BB3B1E2FD82AE15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialScriptStep* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialScriptStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALSCRIPTSTEP_METHOD_4_5BB3B1E2FD82AE15_OFFSET))(a1, a2);
		}
	};
}
