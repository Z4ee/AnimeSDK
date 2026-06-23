#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMECHBOOPRACTICERESULTROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9D5E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooPracticeResultRowWidgetControllerContext_TypeDefinitionIndex = 70411;

	class UIMechBooPracticeResultRowWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 NewVal; // 0x28
		::Class_2_31D08DC027B35B8F_Enum_3_BCA662D3210575AB PropertyType; // 0x2C
		::System::Int32 OldVal; // 0x30
		::System::Int32 CriticalNum; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOPRACTICERESULTROWWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
