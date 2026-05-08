#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2A0117F72708B5DF;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x148DFA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalSelectRowWidgetController_Context_TypeDefinitionIndex = 72814;

	class UIMedalSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onItemSelected; // 0x28
		::Class_1_2A0117F72708B5DF* medalData; // 0x30
		::System::Int32 selectIndex; // 0x38
		::System::Boolean isSetGray; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
