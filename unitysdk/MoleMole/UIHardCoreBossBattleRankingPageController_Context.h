#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_0C451C94475DA3D1;

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1824ECF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingPageController_Context_TypeDefinitionIndex = 57576;

	class UIHardCoreBossBattleRankingPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_0C451C94475DA3D1* SeasonData; // 0x28
		::System::UInt32 DefaultModeId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
