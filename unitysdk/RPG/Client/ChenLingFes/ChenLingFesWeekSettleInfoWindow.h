#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

class Class_1_43BD383C98B4C0C5_247;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameAwardInfoControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleInfoViewModel; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B75FAC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B75F3C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B75F680)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B75FE90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1B75FE50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B75F490)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPENDLESSMODE_OFFSET UNITYSDK_OFFSET(0x1B75FC30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPNORMALMODE_OFFSET UNITYSDK_OFFSET(0x1B75FD10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET UNITYSDK_OFFSET(0x1B75FB70)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleInfoWindow_TypeDefinitionIndex = 80020;

	class ChenLingFesWeekSettleInfoWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x48
		::RPG::Client::UIStateCtrl* _ModeStateCtrl; // 0x50
		::RPG::Client::AnimatorButton* _BtnClose; // 0x58
		::RPG::Client::ChenLingFes::ChenLingFesGameAwardInfoControl* _AwardInfoControl; // 0x60

		::System::Void _ctor(::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _SubscribeMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SUBSCRIBEMESSAGES_OFFSET))(this);
		}

		::System::Void _OnCloseMessage(::Class_1_43BD383C98B4C0C5_247* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_247*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__ONCLOSEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _SetupNormalMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPNORMALMODE_OFFSET))(this);
		}

		::System::Void _SetupEndlessMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW__SETUPENDLESSMODE_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEINFOWINDOW_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
