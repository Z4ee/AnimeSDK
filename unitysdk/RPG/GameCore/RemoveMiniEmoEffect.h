#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEMINIEMOEFFECT_METHOD_3_5236D6B96D867145_OFFSET UNITYSDK_OFFSET(0x19AC9840)
#define RPG_GAMECORE_REMOVEMINIEMOEFFECT_METHOD_3_81103B3332A73D40_OFFSET UNITYSDK_OFFSET(0x19AC9770)
#define RPG_GAMECORE_REMOVEMINIEMOEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC97F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMiniEmoEffect_TypeDefinitionIndex = 20643;

	class RemoveMiniEmoEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81103B3332A73D40(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMiniEmoEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMiniEmoEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT_METHOD_3_81103B3332A73D40_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5236D6B96D867145(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT_METHOD_3_5236D6B96D867145_OFFSET))(a1, a2);
		}
	};
}
