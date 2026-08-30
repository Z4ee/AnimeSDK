#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_METHOD_3_342111117C916ACE_OFFSET UNITYSDK_OFFSET(0x1D4E7E60)
#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_METHOD_3_FE615732F364E1F7_OFFSET UNITYSDK_OFFSET(0x1D4E7E10)
#define RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E7E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisibilityFollow_TypeDefinitionIndex = 22399;

	class SetCharacterVisibilityFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* FollowTarget; // 0x20
		::RPG::GameCore::CharacterVisiblityFollowFlag VisibilityFollow; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE615732F364E1F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisibilityFollow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisibilityFollow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_METHOD_3_FE615732F364E1F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_342111117C916ACE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisibilityFollow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisibilityFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBILITYFOLLOW_METHOD_3_342111117C916ACE_OFFSET))(a1, a2);
		}
	};
}
