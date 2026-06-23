#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_13E3F12704A36C19;

#define MOLEMOLE_UIACTIVITYCOMPTASKHIACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164560A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskHIAContext_TypeDefinitionIndex = 63968;

	class UIActivityCompTaskHIAContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_13E3F12704A36C19* hiaTaskhandler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKHIACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
