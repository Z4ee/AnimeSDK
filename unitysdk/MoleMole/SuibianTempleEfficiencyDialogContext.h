#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_472679C84451629A_4;

#define MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173FDCF0)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleEfficiencyDialogContext_TypeDefinitionIndex = 40850;

	class SuibianTempleEfficiencyDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_472679C84451629A_4* ServerProgressData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
