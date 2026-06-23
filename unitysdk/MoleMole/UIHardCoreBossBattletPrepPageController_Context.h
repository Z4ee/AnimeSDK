#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1824ED40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattletPrepPageController_Context_TypeDefinitionIndex = 83614;

	class UIHardCoreBossBattletPrepPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 modeID; // 0x28
		::System::Int32 bossID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLETPREPPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
