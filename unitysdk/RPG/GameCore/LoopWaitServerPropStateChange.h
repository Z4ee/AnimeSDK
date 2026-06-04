#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_METHOD_3_5F248E84D1F751ED_OFFSET UNITYSDK_OFFSET(0x198B2440)
#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_METHOD_3_E642D2ED9159FD62_OFFSET UNITYSDK_OFFSET(0x198B23D0)
#define RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x198B2410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerPropStateChange_TypeDefinitionIndex = 21010;

	class LoopWaitServerPropStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E642D2ED9159FD62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerPropStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerPropStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_METHOD_3_E642D2ED9159FD62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F248E84D1F751ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerPropStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerPropStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPROPSTATECHANGE_METHOD_3_5F248E84D1F751ED_OFFSET))(a1, a2);
		}
	};
}
