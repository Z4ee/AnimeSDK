#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_4BC304D2E1815C80_OFFSET UNITYSDK_OFFSET(0x18A39E20)
#define RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_738797A5F58EB634_OFFSET UNITYSDK_OFFSET(0x18A39D10)
#define RPG_GAMECORE_LEAVELOOPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LeaveLoopScene_TypeDefinitionIndex = 19385;

	class LeaveLoopScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_738797A5F58EB634(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveLoopScene*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveLoopScene*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_738797A5F58EB634_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BC304D2E1815C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveLoopScene* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_4BC304D2E1815C80_OFFSET))(a1, a2);
		}
	};
}
