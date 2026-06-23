#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class Class_2_44CAFB3A09178D38_2;
namespace MoleMole { class UISuibianRankQuestsFinishPopWindowController; }

#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16CB1290)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x16CB1270)
#define MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x16CB1510)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityTempleRankQuestFinish_TypeDefinitionIndex = 59466;

	class MainCityTempleRankQuestFinish : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::MoleMole::UISuibianRankQuestsFinishPopWindowController* _controller; // 0x30
		::Class_2_44CAFB3A09178D38_2* _context; // 0x38

		::System::Void _ctor(::Class_2_44CAFB3A09178D38_2* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_44CAFB3A09178D38_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYTEMPLERANKQUESTFINISH__CTOR_OFFSET))(this, context);
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
