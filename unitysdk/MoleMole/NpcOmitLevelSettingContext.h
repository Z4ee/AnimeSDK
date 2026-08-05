#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

#define MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13857110)
#define MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13857220)
#define MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13857240)

namespace MoleMole
{
	inline static constexpr unsigned int NpcOmitLevelSettingContext_TypeDefinitionIndex = 59203;

	class NpcOmitLevelSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCOMITLEVELSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
