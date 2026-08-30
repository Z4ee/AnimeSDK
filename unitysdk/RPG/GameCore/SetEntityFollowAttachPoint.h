#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_B35C6E695A702FAB;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_BEAADE656044253A_OFFSET UNITYSDK_OFFSET(0x1D4FC7D0)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_C7E964B65E6F141B_OFFSET UNITYSDK_OFFSET(0x1D4FC780)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FC7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityFollowAttachPoint_TypeDefinitionIndex = 22468;

	class SetEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SelfAttachPoint; // 0x20
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x28
		::System::String* AttachPoint; // 0x30
		::RPG::GameCore::CharacterVisiblityFollowFlag VisibilityFollow; // 0x38
		::System::Boolean EnableTransmitVisible; // 0x3A
		::System::Boolean DisableWhenAttachTargetInvisible; // 0x3B
		::System::Boolean UseAttachedTargetScale; // 0x3C
		::Class_2_B35C6E695A702FAB* SmoothFollow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7E964B65E6F141B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_C7E964B65E6F141B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEAADE656044253A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_BEAADE656044253A_OFFSET))(a1, a2);
		}
	};
}
