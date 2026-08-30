#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_METHOD_3_84638D22C4268AC6_OFFSET UNITYSDK_OFFSET(0x1D504AB0)
#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_METHOD_3_9A4F4D5EEC078F85_OFFSET UNITYSDK_OFFSET(0x1D504B00)
#define RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D504AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLuaActionQueuePause_TypeDefinitionIndex = 24008;

	class SetLuaActionQueuePause : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84638D22C4268AC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLuaActionQueuePause*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLuaActionQueuePause*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_METHOD_3_84638D22C4268AC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A4F4D5EEC078F85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLuaActionQueuePause* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLuaActionQueuePause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLUAACTIONQUEUEPAUSE_METHOD_3_9A4F4D5EEC078F85_OFFSET))(a1, a2);
		}
	};
}
