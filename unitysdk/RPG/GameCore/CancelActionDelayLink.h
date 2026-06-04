#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CANCELACTIONDELAYLINK_METHOD_3_225F007A3EC52F8D_OFFSET UNITYSDK_OFFSET(0x195F3E00)
#define RPG_GAMECORE_CANCELACTIONDELAYLINK_METHOD_3_ED20BABB9EF8BE21_OFFSET UNITYSDK_OFFSET(0x195F3E80)
#define RPG_GAMECORE_CANCELACTIONDELAYLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x195F3E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CancelActionDelayLink_TypeDefinitionIndex = 22003;

	class CancelActionDelayLink : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LinkOwner; // 0x18
		::RPG::GameCore::TargetEvaluator* Follower; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_225F007A3EC52F8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CancelActionDelayLink*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CancelActionDelayLink*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK_METHOD_3_225F007A3EC52F8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED20BABB9EF8BE21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CancelActionDelayLink* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CancelActionDelayLink*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CANCELACTIONDELAYLINK_METHOD_3_ED20BABB9EF8BE21_OFFSET))(a1, a2);
		}
	};
}
