#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_METHOD_3_2561F8DDA59F7BF4_OFFSET UNITYSDK_OFFSET(0x19C2E670)
#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_METHOD_3_3CCBF64A23B83D99_OFFSET UNITYSDK_OFFSET(0x19C2E710)
#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2E6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAtlasFaceEmotion_TypeDefinitionIndex = 19483;

	class SetCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::System::String* MeshName; // 0x28
		::System::UInt32 EmotionIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2561F8DDA59F7BF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_METHOD_3_2561F8DDA59F7BF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CCBF64A23B83D99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_METHOD_3_3CCBF64A23B83D99_OFFSET))(a1, a2);
		}
	};
}
