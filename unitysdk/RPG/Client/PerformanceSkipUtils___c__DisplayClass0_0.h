#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2F240)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x9F30050)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x9F300A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceSkipUtils___c__DisplayClass0_0_TypeDefinitionIndex = 49207;

	class PerformanceSkipUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* dispatch; // 0x10
		::RPG::GameCore::ELevelPerformanceType performanceType; // 0x18
		::System::UInt32 performanceID; // 0x1C
		::System::Guid guid; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPerformanceSkipDialog_b__0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__0_OFFSET))(this, isOk);
		}

		::System::Void _ShowPerformanceSkipDialog_b__1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_0__SHOWPERFORMANCESKIPDIALOG_B__1_OFFSET))(this, isOk);
		}
	};
}
