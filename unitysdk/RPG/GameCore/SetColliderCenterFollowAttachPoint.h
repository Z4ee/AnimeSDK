#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_METHOD_3_31A1821062F58928_OFFSET UNITYSDK_OFFSET(0x1C2DA130)
#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_METHOD_3_FEA3773D50C1954A_OFFSET UNITYSDK_OFFSET(0x1C2DA090)
#define RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2DA0F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetColliderCenterFollowAttachPoint_TypeDefinitionIndex = 22364;

	class SetColliderCenterFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Boolean VerticalFollow; // 0x28
		::System::Boolean HorizontalFollow; // 0x29
		::System::Boolean IsReset; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FEA3773D50C1954A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_METHOD_3_FEA3773D50C1954A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_31A1821062F58928(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetColliderCenterFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetColliderCenterFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOLLIDERCENTERFOLLOWATTACHPOINT_METHOD_3_31A1821062F58928_OFFSET))(a1, a2);
		}
	};
}
