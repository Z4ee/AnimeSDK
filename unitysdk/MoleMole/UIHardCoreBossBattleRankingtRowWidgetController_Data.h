#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_398B7A90ED0C0464_1;

#define MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17312C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleRankingtRowWidgetController_Data_TypeDefinitionIndex = 80300;

	class UIHardCoreBossBattleRankingtRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_3_398B7A90ED0C0464_1* RankInfo; // 0x10
		::System::Int32 FriendRankIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLERANKINGTROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
