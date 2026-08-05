#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF7FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapErosionProgressWidgetController_Context_TypeDefinitionIndex = 87229;

	class UIUrbanMapErosionProgressWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_4B3401D95328DA92_Struct_2_19654198622DB64B>* ErosionBasicData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
