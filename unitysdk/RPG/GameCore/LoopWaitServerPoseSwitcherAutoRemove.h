#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE_METHOD_3_D15E4EC2F11C6C92_OFFSET UNITYSDK_OFFSET(0x18A7F040)
#define RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE_METHOD_3_E0E1DE2DAFF25512_OFFSET UNITYSDK_OFFSET(0x18A7EFB0)
#define RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A7F010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopWaitServerPoseSwitcherAutoRemove_TypeDefinitionIndex = 20238;

	class LoopWaitServerPoseSwitcherAutoRemove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0E1DE2DAFF25512(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerPoseSwitcherAutoRemove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerPoseSwitcherAutoRemove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE_METHOD_3_E0E1DE2DAFF25512_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D15E4EC2F11C6C92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopWaitServerPoseSwitcherAutoRemove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopWaitServerPoseSwitcherAutoRemove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPWAITSERVERPOSESWITCHERAUTOREMOVE_METHOD_3_D15E4EC2F11C6C92_OFFSET))(a1, a2);
		}
	};
}
