#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueResidentActivityPanelData.h"

class Class_1_355D5C2B1D92981B;
class Class_1_D4B4346A5EB96462;
namespace RPG::Client { class ChessRogueRedDotFilter; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET UNITYSDK_OFFSET(0x9FF01B0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FF0320)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0x9FF0540)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x9FF0500)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x9FF04C0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9FF0480)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x9FF0380)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF01A0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__SHOULDSHOWREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x9FF03E0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA___IFIXBASEPROXY_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0x9FF0610)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueResidentActivityPanelData_TypeDefinitionIndex = 56969;

	class ChessRogueResidentActivityPanelData : public ::RPG::Client::RogueResidentActivityPanelData
	{
	public:
		::RPG::Client::ChessRogueRedDotFilter* _RedDotFilter; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueResidentActivityPanelData* CreateByRow(::RPG::GameCore::RogueActivityResidentConfigRow* row, ::RPG::GameCore::IntroDataRow* introRow, ::Class_1_D4B4346A5EB96462* scheduleProxyFactory, ::Class_1_355D5C2B1D92981B* rewardCountProxyFactory)
		{
			return ((::RPG::Client::ChessRogueResidentActivityPanelData*(*)(::RPG::GameCore::RogueActivityResidentConfigRow*, ::RPG::GameCore::IntroDataRow*, ::Class_1_D4B4346A5EB96462*, ::Class_1_355D5C2B1D92981B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET))(row, introRow, scheduleProxyFactory, rewardCountProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}

		::System::Boolean _ShouldShowRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__SHOULDSHOWREWARDREDDOT_OFFSET))(this);
		}

		::System::String* get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA___IFIXBASEPROXY_GET_LOCKEDREASON_OFFSET))(this);
		}
	};
}
