#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_30409CAE069D6997.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGACHAPERFORMANCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCABB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformanceContext_TypeDefinitionIndex = 44445;

	class UIGachaPerformanceContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnPlayEnd; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* ItemResults; // 0x30
		::System::Action* OnUIClose; // 0x38
		::Enum_3_30409CAE069D6997 GachaType; // 0x40
		::System::Boolean SkipOpenning; // 0x44
		::System::Boolean AnimaCheckMode; // 0x45
		::System::Boolean ShowBackBtn; // 0x46
		::System::Boolean IsNonGacha; // 0x47

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
