#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DevTalkInfo; }

#define RPG_GAMECORE_DEVPLAYPERFORMANCEE_METHOD_3_24DBE72B92445B53_OFFSET UNITYSDK_OFFSET(0x17155700)
#define RPG_GAMECORE_DEVPLAYPERFORMANCEE_METHOD_3_7ACA2B245D4055A0_OFFSET UNITYSDK_OFFSET(0x17155680)
#define RPG_GAMECORE_DEVPLAYPERFORMANCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x171556D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DevPlayPerformanceE_TypeDefinitionIndex = 19437;

	class DevPlayPerformanceE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DevTalkInfo*>* TalkList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ACA2B245D4055A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DevPlayPerformanceE*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DevPlayPerformanceE*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE_METHOD_3_7ACA2B245D4055A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24DBE72B92445B53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DevPlayPerformanceE* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DevPlayPerformanceE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVPLAYPERFORMANCEE_METHOD_3_24DBE72B92445B53_OFFSET))(a1, a2);
		}
	};
}
