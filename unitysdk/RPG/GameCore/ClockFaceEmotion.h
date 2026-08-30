#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockFaceEmotionMoveDirection.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKFACEEMOTION_METHOD_2_5C35BAA97E9CD479_OFFSET UNITYSDK_OFFSET(0x1E34A450)
#define RPG_GAMECORE_CLOCKFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E34A620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockFaceEmotion_TypeDefinitionIndex = 21645;

	class ClockFaceEmotion : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Hour; // 0x10
		::System::UInt32 Minute; // 0x14
		::System::Single MoveDuration; // 0x18
		::RPG::GameCore::ClockFaceEmotionMoveDirection MoveDirection; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5C35BAA97E9CD479(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKFACEEMOTION_METHOD_2_5C35BAA97E9CD479_OFFSET))(a1, a2);
		}
	};
}
