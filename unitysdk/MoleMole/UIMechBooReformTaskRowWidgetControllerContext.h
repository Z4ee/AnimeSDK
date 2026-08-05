#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184E6860)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformTaskRowWidgetControllerContext_TypeDefinitionIndex = 55715;

	class UIMechBooReformTaskRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* IconPath; // 0x28
		::System::Int32 CurNum; // 0x30
		::Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB PropertyType; // 0x34
		::System::Int32 RequireNum; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
