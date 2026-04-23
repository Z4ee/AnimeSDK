#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class ClockFaceEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_25F626A2D66BB02B_OFFSET UNITYSDK_OFFSET(0x18E123B0)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_9E12C3FB0BE884DA_OFFSET UNITYSDK_OFFSET(0x18E12430)
#define RPG_GAMECORE_SETCLOCKBOYEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18E12400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClockBoyEmotion_TypeDefinitionIndex = 20745;

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

		static ::System::Void Method_3_25F626A2D66BB02B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClockBoyEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClockBoyEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_25F626A2D66BB02B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E12C3FB0BE884DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetClockBoyEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetClockBoyEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLOCKBOYEMOTION_METHOD_3_9E12C3FB0BE884DA_OFFSET))(a1, a2);
		}
	};
}
