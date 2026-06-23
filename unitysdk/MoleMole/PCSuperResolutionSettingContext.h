#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PCSuperResolutionType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x141A05D0)
#define MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x141A0840)
#define MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x141A08E0)

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionSettingContext_TypeDefinitionIndex = 71626;

	class PCSuperResolutionSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* ShowOnUIRegexList; // 0x28
		::MoleMole::PCSuperResolutionType SuperResolutionType; // 0x30
		::System::Boolean CustomDefaultShowOnUI; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCSUPERRESOLUTIONSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
