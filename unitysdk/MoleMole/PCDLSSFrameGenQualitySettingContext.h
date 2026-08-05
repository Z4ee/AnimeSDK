#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13ACD020)
#define MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACD280)
#define MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x13ACD310)

namespace MoleMole
{
	inline static constexpr unsigned int PCDLSSFrameGenQualitySettingContext_TypeDefinitionIndex = 53225;

	class PCDLSSFrameGenQualitySettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* ShowOnUIRegexList; // 0x28
		::System::Int32 FrameGenNum; // 0x30
		::System::Boolean CustomDefaultShowOnUI; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PCDLSSFRAMEGENQUALITYSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
