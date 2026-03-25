#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVisiblityFollowFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_B35C6E695A702FAB;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_110A2442DAE48A83_OFFSET UNITYSDK_OFFSET(0x176CB5C0)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_C2619A456C494D90_OFFSET UNITYSDK_OFFSET(0x176CB520)
#define RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x176CB580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEntityFollowAttachPoint_TypeDefinitionIndex = 20910;

	class SetEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AttachTarget; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::GameCore::CharacterVisiblityFollowFlag VisibilityFollow; // 0x30
		::System::Boolean EnableFollowVisible; // 0x32
		::System::Boolean EnableTransmitVisible; // 0x33
		::System::Boolean DisableWhenAttachTargetInvisible; // 0x34
		::System::Boolean UseAttachedTargetScale; // 0x35
		::Class_2_B35C6E695A702FAB* SmoothFollow; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2619A456C494D90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_C2619A456C494D90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_110A2442DAE48A83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETENTITYFOLLOWATTACHPOINT_METHOD_3_110A2442DAE48A83_OFFSET))(a1, a2);
		}
	};
}
