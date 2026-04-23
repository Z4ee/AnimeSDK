#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_033B856A9E43499F_OFFSET UNITYSDK_OFFSET(0x18811810)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_E778B85DF99C614E_OFFSET UNITYSDK_OFFSET(0x18811890)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18811860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityFollowAttachPoint_TypeDefinitionIndex = 22626;

	class ClearEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_033B856A9E43499F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_033B856A9E43499F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E778B85DF99C614E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_E778B85DF99C614E_OFFSET))(a1, a2);
		}
	};
}
