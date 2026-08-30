#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_METHOD_3_3A7881AE355F21DE_OFFSET UNITYSDK_OFFSET(0x1DEBD280)
#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_METHOD_3_BF43089FC37CC6DD_OFFSET UNITYSDK_OFFSET(0x1DEBD2C0)
#define RPG_GAMECORE_WAITPERFORMANCEREPLAYEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBD2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPerformanceReplayEnd_TypeDefinitionIndex = 21601;

	class WaitPerformanceReplayEnd : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A7881AE355F21DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceReplayEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceReplayEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_METHOD_3_3A7881AE355F21DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF43089FC37CC6DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPerformanceReplayEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPerformanceReplayEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPERFORMANCEREPLAYEND_METHOD_3_BF43089FC37CC6DD_OFFSET))(a1, a2);
		}
	};
}
