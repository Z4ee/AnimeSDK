#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_B938B72EE1BB818D_OFFSET UNITYSDK_OFFSET(0x1CFDA500)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_E778B85DF99C614E_OFFSET UNITYSDK_OFFSET(0x1CFDA540)
#define RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFDA530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearEntityFollowAttachPoint_TypeDefinitionIndex = 23372;

	class ClearEntityFollowAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B938B72EE1BB818D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFollowAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_B938B72EE1BB818D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E778B85DF99C614E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClearEntityFollowAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClearEntityFollowAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARENTITYFOLLOWATTACHPOINT_METHOD_3_E778B85DF99C614E_OFFSET))(a1, a2);
		}
	};
}
