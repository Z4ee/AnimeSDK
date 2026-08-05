#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_6B9BA8441E94A95A;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF3090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalSelectRowWidgetController_Context_TypeDefinitionIndex = 89376;

	class UIMedalSelectRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_6B9BA8441E94A95A* medalData; // 0x28
		::System::Action_1<::System::Int32>* onItemSelected; // 0x30
		::System::Boolean isSetGray; // 0x38
		::System::Int32 selectIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALSELECTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
