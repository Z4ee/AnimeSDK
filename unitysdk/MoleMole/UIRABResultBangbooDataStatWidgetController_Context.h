#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_742C838C9195275D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F66030)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABResultBangbooDataStatWidgetController_Context_TypeDefinitionIndex = 47663;

	class UIRABResultBangbooDataStatWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_742C838C9195275D* SlotData; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MaxStats; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABRESULTBANGBOODATASTATWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
