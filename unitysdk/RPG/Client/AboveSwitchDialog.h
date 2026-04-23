#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"

class Class_2_225BAA39D0FA4CD6;
namespace RPG::Client { class MonoAboveSwitch; }

#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x9A973A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x9A973C0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x9A972E0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x9A97320)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x9A97300)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x9A96DC0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET UNITYSDK_OFFSET(0x9A96C90)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x9A973B0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x9A973D0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x9A972F0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x9A97330)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x9A97310)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x9A96B30)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9A96B90)
#define RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET UNITYSDK_OFFSET(0x9A97220)
#define RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET UNITYSDK_OFFSET(0x9A96E10)
#define RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9A96C30)
#define RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0x9A970F0)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9A973E0)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9A974A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9A97440)

namespace RPG::Client
{
	inline static constexpr unsigned int AboveSwitchDialog_TypeDefinitionIndex = 67308;

	class AboveSwitchDialog : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::MonoAboveSwitch* _AboveSwitch; // 0x180
		::System::Single _TransferTime; // 0x188
		::System::Single _TransferTimer; // 0x18C
		::RPG::Client::TextID _TextID; // 0x190
		::RPG::GameCore::ScreenTransferType _TransferType; // 0x1A0
		::RPG::GameCore::ScreenTransferMode _TransferMode; // 0x1A4
		::System::Boolean _EnableText; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Single _EvaluateAlpha(::System::Boolean fadeIn, ::System::Single normalizedTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET))(this, fadeIn, normalizedTime);
		}

		::System::Void _TransferFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET))(this);
		}

		::RPG::GameCore::ScreenTransferMode get_TransferMode()
		{
			return ((::RPG::GameCore::ScreenTransferMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET))(this);
		}

		::System::Void set_TransferMode(::RPG::GameCore::ScreenTransferMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET))(this, value);
		}

		::RPG::GameCore::ScreenTransferType get_TransferType()
		{
			return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET))(this);
		}

		::System::Void set_TransferType(::RPG::GameCore::ScreenTransferType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET))(this, value);
		}

		::System::Single get_TransferTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET))(this);
		}

		::System::Void set_TransferTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET))(this, value);
		}

		::System::Boolean get_EnableText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET))(this);
		}

		::System::Void set_EnableText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET))(this, value);
		}

		::Class_2_225BAA39D0FA4CD6* get__View()
		{
			return ((::Class_2_225BAA39D0FA4CD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}
	};
}
