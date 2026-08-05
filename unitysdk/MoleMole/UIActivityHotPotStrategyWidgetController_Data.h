#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192DC600)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotStrategyWidgetController_Data_TypeDefinitionIndex = 45115;

	class UIActivityHotPotStrategyWidgetController_Data : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Title; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* FoodIDs; // 0x30
		::System::Int32 BuildIndex; // 0x38
		::System::Boolean IsAutoSelect; // 0x3C
		::System::Boolean ShowGet; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
