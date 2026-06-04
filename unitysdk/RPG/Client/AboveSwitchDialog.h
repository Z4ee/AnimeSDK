#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"

class Class_2_225BAA39D0FA4CD6;
namespace RPG::Client { class MonoAboveSwitch; }

#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0xB076AC0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0xB076AE0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0xB076A00)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0xB076A40)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0xB076A20)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xB0764A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET UNITYSDK_OFFSET(0xB076360)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0xB076AD0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0xB076AF0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0xB076A10)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0xB076A50)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0xB076A30)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xB0761A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB076200)
#define RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET UNITYSDK_OFFSET(0xB076940)
#define RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET UNITYSDK_OFFSET(0xB0764F0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB0762A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0xB0767E0)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB076B00)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xB076BC0)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB076B60)

namespace RPG::Client
{
	inline static constexpr unsigned int AboveSwitchDialog_TypeDefinitionIndex = 68260;

	class AboveSwitchDialog : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::MonoAboveSwitch* _AboveSwitch; // 0x180
		::System::Boolean _EnableText; // 0x188
		::System::Single _TransferTimer; // 0x18C
		::System::Single _TransferTime; // 0x190
		::RPG::Client::TextID _TextID; // 0x198
		::RPG::GameCore::ScreenTransferMode _TransferMode; // 0x1A8
		::RPG::GameCore::ScreenTransferType _TransferType; // 0x1AC

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

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET))(this, a1);
		}

		::System::Single _EvaluateAlpha(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET))(this, a1, a2);
		}

		::System::Void _TransferFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET))(this);
		}

		::RPG::GameCore::ScreenTransferMode get_TransferMode()
		{
			return ((::RPG::GameCore::ScreenTransferMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET))(this);
		}

		::System::Void set_TransferMode(::RPG::GameCore::ScreenTransferMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferType get_TransferType()
		{
			return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET))(this);
		}

		::System::Void set_TransferType(::RPG::GameCore::ScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET))(this, a1);
		}

		::System::Single get_TransferTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET))(this);
		}

		::System::Void set_TransferTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET))(this);
		}

		::System::Void set_EnableText(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
		}
	};
}
