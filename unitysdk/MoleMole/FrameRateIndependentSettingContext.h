#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SystemSettingContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x16B8A770)
#define MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16B8AAE0)
#define MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET UNITYSDK_OFFSET(0x16B8AB00)

namespace MoleMole
{
	inline static constexpr unsigned int FrameRateIndependentSettingContext_TypeDefinitionIndex = 74558;

	class FrameRateIndependentSettingContext : public ::MoleMole::SystemSettingContextBase
	{
	public:
		::System::String* QualityKey; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* ShowOnUIQualityKeyList; // 0x30
		::System::Int32 FrameRate; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT_ISSHOWONUIINNER_OFFSET))(this);
		}

		::System::Boolean __base_IsShowOnUIInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRAMERATEINDEPENDENTSETTINGCONTEXT___BASE_ISSHOWONUIINNER_OFFSET))(this);
		}
	};
}
