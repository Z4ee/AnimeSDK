#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONDELAYLINKEXTRABEHAVIORGROUP_METHOD_2_C90B3E94773F5B57_OFFSET UNITYSDK_OFFSET(0x1CD6FCE0)
#define RPG_GAMECORE_ACTIONDELAYLINKEXTRABEHAVIORGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6FDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayLinkExtraBehaviorGroup_TypeDefinitionIndex = 23005;

	class ActionDelayLinkExtraBehaviorGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ActionDelayLinkExtraBehaviorMask OnBreak; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYLINKEXTRABEHAVIORGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C90B3E94773F5B57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONDELAYLINKEXTRABEHAVIORGROUP_METHOD_2_C90B3E94773F5B57_OFFSET))(a1, a2);
		}
	};
}
