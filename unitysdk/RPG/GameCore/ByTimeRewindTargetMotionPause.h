#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_1C121CA2AE806656_OFFSET UNITYSDK_OFFSET(0x195DF110)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_A540A9F1B45014AF_OFFSET UNITYSDK_OFFSET(0x195DF090)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_CCC70C9B8AFDFC1C_OFFSET UNITYSDK_OFFSET(0x195DEE40)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET UNITYSDK_OFFSET(0x195DEF10)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x195DEEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetMotionPause_TypeDefinitionIndex = 19530;

	class ByTimeRewindTargetMotionPause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CCC70C9B8AFDFC1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_CCC70C9B8AFDFC1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2434423E662D322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A540A9F1B45014AF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_A540A9F1B45014AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1C121CA2AE806656(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_1C121CA2AE806656_OFFSET))(a1, a2);
		}
	};
}
