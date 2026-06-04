#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class ClockFaceEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_5819C42FB30848F6_OFFSET UNITYSDK_OFFSET(0x19C311B0)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_87BA799B3E845615_OFFSET UNITYSDK_OFFSET(0x19C31230)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C31200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClockBoyEmotion_TypeDefinitionIndex = 20673;

	class SetClockBoyEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::CharacterAtlasFaceEmotion*>* AtlasEmotions; // 0x20
		::RPG::GameCore::ClockFaceEmotion* Clock; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5819C42FB30848F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClockBoyEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClockBoyEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_5819C42FB30848F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87BA799B3E845615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_87BA799B3E845615_OFFSET))(a1, a2);
		}
	};
}
