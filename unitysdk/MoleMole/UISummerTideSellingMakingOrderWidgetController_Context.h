#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }

#define MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16779B40)
#define MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x16779A50)
#define MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16779CE0)
#define MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x16779D30)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideSellingMakingOrderWidgetController_Context_TypeDefinitionIndex = 75291;

	class UISummerTideSellingMakingOrderWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::ViewObject::ViewObjectHandle TargetOrder; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UISummerTideSellingMakingOrderWidgetController_Context* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISummerTideSellingMakingOrderWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDESELLINGMAKINGORDERWIDGETCONTROLLER_CONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
