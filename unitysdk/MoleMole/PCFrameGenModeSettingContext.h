#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PCFrameGenType.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x19172FF0)
#define MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19173260)
#define MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x19173300)

namespace MoleMole
{
	inline static constexpr unsigned int PCFrameGenModeSettingContext_TypeDefinitionIndex = 43915;

	class PCFrameGenModeSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* ShowOnUIRegexList; // 0x28
		::MoleMole::PCFrameGenType FrameGenType; // 0x30
		::System::Boolean CustomDefaultShowOnUI; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCFRAMEGENMODESETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
