#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueResidentActivityPanelData.h"

class Class_1_355D5C2B1D92981B;
class Class_1_D4B4346A5EB96462;
namespace RPG::Client { class RogueHandbookEventRedDotFilter; }
namespace RPG::Client { class RogueHandbookRedDotFilter; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }

#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET UNITYSDK_OFFSET(0xA4995F0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA499750)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0xA499910)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0xA4998D0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA499890)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xA4997D0)
#define RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA4995E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimulatedRogueResidentActivityPanelData_TypeDefinitionIndex = 50140;

	class SimulatedRogueResidentActivityPanelData : public ::RPG::Client::RogueResidentActivityPanelData
	{
	public:
		::RPG::Client::RogueHandbookRedDotFilter* _RedDotFilter; // 0xB0
		::RPG::Client::RogueHandbookEventRedDotFilter* _EventRedDotFilter; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SimulatedRogueResidentActivityPanelData* CreateByRow(::RPG::GameCore::RogueActivityResidentConfigRow* row, ::RPG::GameCore::IntroDataRow* introRow, ::Class_1_D4B4346A5EB96462* scheduleProxyFactory, ::Class_1_355D5C2B1D92981B* rewardCountProxyFactory)
		{
			return ((::RPG::Client::SimulatedRogueResidentActivityPanelData*(*)(::RPG::GameCore::RogueActivityResidentConfigRow*, ::RPG::GameCore::IntroDataRow*, ::Class_1_D4B4346A5EB96462*, ::Class_1_355D5C2B1D92981B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET))(row, introRow, scheduleProxyFactory, rewardCountProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMULATEDROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}
	};
}
