#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18656080)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x18656E90)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x18656EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceSkipUtils___c__DisplayClass0_0_TypeDefinitionIndex = 60840;

	class PerformanceSkipUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* dispatch; // 0x10
		::System::Guid guid; // 0x18
		::System::UInt32 performanceID; // 0x28
		::RPG::GameCore::ELevelPerformanceType performanceType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPerformanceSkipDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET))(this, a1);
		}

		::System::Void _ShowPerformanceSkipDialog_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET))(this, a1);
		}
	};
}
