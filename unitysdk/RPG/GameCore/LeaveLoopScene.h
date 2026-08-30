#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_4BC304D2E1815C80_OFFSET UNITYSDK_OFFSET(0x1D1C75C0)
#define RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_F32E0DA95207333D_OFFSET UNITYSDK_OFFSET(0x1D1C74F0)
#define RPG_GAMECORE_LEAVELOOPSCENE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C75B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LeaveLoopScene_TypeDefinitionIndex = 20193;

	class LeaveLoopScene : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F32E0DA95207333D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveLoopScene*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveLoopScene*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_F32E0DA95207333D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4BC304D2E1815C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LeaveLoopScene* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LeaveLoopScene*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEAVELOOPSCENE_METHOD_3_4BC304D2E1815C80_OFFSET))(a1, a2);
		}
	};
}
