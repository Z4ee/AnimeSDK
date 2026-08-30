#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9BCBBA60412FBB6A;

#define RPG_CLIENT_PERFORMANCESHIFTUTILS_CANSHIFT_OFFSET UNITYSDK_OFFSET(0xDA5A760)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0xDA5ABB0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_GETSHIFTRATIO_OFFSET UNITYSDK_OFFSET(0xDA5AA60)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISINSHIFT_OFFSET UNITYSDK_OFFSET(0xDA5A9E0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_ISSHIFTENABLED_OFFSET UNITYSDK_OFFSET(0xDA5A890)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_REFRESHSHIFTTIMESCALE_OFFSET UNITYSDK_OFFSET(0xDA5AC60)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETFIRSTCLICKFLAG_OFFSET UNITYSDK_OFFSET(0xDA5AC00)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS_SETSHIFT_OFFSET UNITYSDK_OFFSET(0xDA5AAC0)
#define RPG_CLIENT_PERFORMANCESHIFTUTILS__GETSHIFTMANAGER_OFFSET UNITYSDK_OFFSET(0xDA5A7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceShiftUtils_TypeDefinitionIndex = 60838;

	class PerformanceShiftUtils : public ::System::Object
	{
	public:
		static ::System::Boolean CanShift()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_CANSHIFT_OFFSET))();
		}

		static ::System::Boolean IsShiftEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_ISSHIFTENABLED_OFFSET))();
		}

		static ::System::Boolean IsInShift()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_ISINSHIFT_OFFSET))();
		}

		static ::System::Single GetShiftRatio()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_GETSHIFTRATIO_OFFSET))();
		}

		static ::System::Void SetShift(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_SETSHIFT_OFFSET))(a1);
		}

		static ::System::Boolean GetFirstClickFlag()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_GETFIRSTCLICKFLAG_OFFSET))();
		}

		static ::System::Void SetFirstClickFlag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_SETFIRSTCLICKFLAG_OFFSET))(a1);
		}

		static ::System::Void RefreshShiftTimeScale()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS_REFRESHSHIFTTIMESCALE_OFFSET))();
		}

		static ::Class_1_9BCBBA60412FBB6A* _GetShiftManager()
		{
			return ((::Class_1_9BCBBA60412FBB6A*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESHIFTUTILS__GETSHIFTMANAGER_OFFSET))();
		}
	};
}
