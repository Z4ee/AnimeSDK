#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_7E6E8DD3EAC12A67_13;

#define MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x129DAA90)

namespace MoleMole
{
	inline static constexpr unsigned int SuibianTempleEfficiencyDialogContext_TypeDefinitionIndex = 48767;

	class SuibianTempleEfficiencyDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_7E6E8DD3EAC12A67_13* ServerProgressData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUIBIANTEMPLEEFFICIENCYDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
