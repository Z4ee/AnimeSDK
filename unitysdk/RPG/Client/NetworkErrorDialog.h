#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_2957BF86A7FB499A;
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xAB78A70)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET UNITYSDK_OFFSET(0xAB796A0)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xAB79600)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0xAB795B0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0xAB784E0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0xAB78480)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET UNITYSDK_OFFSET(0xAB793C0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xAB781A0)
#define RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xAB78400)
#define RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAB78640)
#define RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xAB79520)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET UNITYSDK_OFFSET(0xAB79180)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xAB78B00)
#define RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAB79300)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAB796F0)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xAB79810)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xAB79750)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xAB797B0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog_TypeDefinitionIndex = 66993;

	class NetworkErrorDialog : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ExitAction; // 0x180
		::System::Action* ConformAction; // 0x188
		::System::Boolean isDetailMode; // 0x190
		::System::Int32 errorCode; // 0x194
		::System::Int32 stageCode; // 0x198

		::System::Void _ctor(::RPG::Client::UILayer layer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET))(this, layer);
		}

		static ::System::Void ShowNetworkError(::RPG::Client::TextID contentTexID, ::System::Int32 code, ::System::Int32 stageCode)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET))(contentTexID, code, stageCode);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void SetErrorCode(::System::Int32 ErrorCode, ::System::Int32 StageCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET))(this, ErrorCode, StageCode);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void SetContentID(::RPG::Client::TextID contentID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET))(this, contentID);
		}

		::System::Void SetOkID(::RPG::Client::TextID btnCancelID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET))(this, btnCancelID);
		}

		::System::Void _SetupDetailMode(::System::Boolean isDetail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET))(this, isDetail);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnBtnDetailClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnCancelClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET))(this, param);
		}

		::System::Void OnBtnBackClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET))(this, param);
		}

		::Class_2_2957BF86A7FB499A* get_View()
		{
			return ((::Class_2_2957BF86A7FB499A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
