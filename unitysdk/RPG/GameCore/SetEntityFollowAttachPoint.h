#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_B35C6E695A702FAB;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_BEAADE656044253A_OFFSET UNITYSDK_OFFSET(0x19C4B920)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_EF1D1D8404074EF0_OFFSET UNITYSDK_OFFSET(0x19C4B890)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4B8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityFollowAttachPoint_TypeDefinitionIndex = 21484;

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

		static ::System::Void Method_3_EF1D1D8404074EF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_EF1D1D8404074EF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEAADE656044253A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_BEAADE656044253A_OFFSET))(a1, a2);
		}
	};
}
