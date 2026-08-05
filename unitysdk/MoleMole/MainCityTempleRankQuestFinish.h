#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_44CAFB3A09178D38_6;
namespace MoleMole { class UISuibianRankQuestsFinishPopWindowController; }

#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13A95270)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A95250)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x13A954F0)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityTempleRankQuestFinish_TypeDefinitionIndex = 87912;

	class MainCityTempleRankQuestFinish : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::Class_2_44CAFB3A09178D38_6* _context; // 0x30
		::MoleMole::UISuibianRankQuestsFinishPopWindowController* _controller; // 0x38

		::System::Void _ctor(::Class_2_44CAFB3A09178D38_6* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_44CAFB3A09178D38_6*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
