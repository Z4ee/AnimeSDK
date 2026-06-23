#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x187C4350)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebMessageRowWidgetController_RowData_TypeDefinitionIndex = 73877;

	class UIBangbooMicroWebMessageRowWidgetController_RowData : public ::System::Object
	{
	public:
		::System::String* AnswerKey; // 0x10
		::System::String* HeadIconPath; // 0x18
		::System::String* NameKey; // 0x20
		::System::Int32 FloorIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBMESSAGEROWWIDGETCONTROLLER_ROWDATA__CTOR_OFFSET))(this);
		}
	};
}
