#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_019865F9225A889B_OFFSET UNITYSDK_OFFSET(0x1D541260)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_4FC8531F11318F18_OFFSET UNITYSDK_OFFSET(0x1D541450)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_8D377298DA08BD7E_OFFSET UNITYSDK_OFFSET(0x1D541420)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET UNITYSDK_OFFSET(0x1D5412A0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D541290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetMotionPause_TypeDefinitionIndex = 20673;

	class ByTimeRewindTargetMotionPause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_019865F9225A889B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_019865F9225A889B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2434423E662D322(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_E2434423E662D322_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D377298DA08BD7E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_8D377298DA08BD7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4FC8531F11318F18(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_METHOD_4_4FC8531F11318F18_OFFSET))(a1, a2);
		}
	};
}
