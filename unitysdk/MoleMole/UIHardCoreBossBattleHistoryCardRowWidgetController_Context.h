#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_0C451C94475DA3D1;
class Class_2_9E185D2699C28ECF;

#define MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1468A2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 48479;

	class UIHardCoreBossBattleHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_9E185D2699C28ECF* LevelData; // 0x28
		::Class_2_0C451C94475DA3D1* SeasonData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
