#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPERFORMANCERESULT_METHOD_3_C1AA6D7200150C10_OFFSET UNITYSDK_OFFSET(0x1C604FA0)
#define RPG_GAMECORE_SETPERFORMANCERESULT_METHOD_3_CB7931DD8DF2203B_OFFSET UNITYSDK_OFFSET(0x1C604FE0)
#define RPG_GAMECORE_SETPERFORMANCERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C604FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPerformanceResult_TypeDefinitionIndex = 21128;

	class SetPerformanceResult : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C1AA6D7200150C10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPerformanceResult*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPerformanceResult*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT_METHOD_3_C1AA6D7200150C10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CB7931DD8DF2203B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPerformanceResult* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPerformanceResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPERFORMANCERESULT_METHOD_3_CB7931DD8DF2203B_OFFSET))(a1, a2);
		}
	};
}
