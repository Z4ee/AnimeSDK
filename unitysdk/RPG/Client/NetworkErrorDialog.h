#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"

class Class_2_2957BF86A7FB499A;
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_NETWORKERRORDIALOG_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xC288EC0)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET UNITYSDK_OFFSET(0xC289B10)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xC289A60)
#define RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET UNITYSDK_OFFSET(0xC289A10)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET UNITYSDK_OFFSET(0xC2885F0)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET UNITYSDK_OFFSET(0xC288590)
#define RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET UNITYSDK_OFFSET(0xC289820)
#define RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET UNITYSDK_OFFSET(0xC288280)
#define RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xC288500)
#define RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC288750)
#define RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xC289980)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET UNITYSDK_OFFSET(0xC2895E0)
#define RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC288F50)
#define RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC289760)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC289B60)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xC289C80)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC289BC0)
#define RPG_CLIENT_NETWORKERRORDIALOG___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC289C20)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkErrorDialog_TypeDefinitionIndex = 67935;

	class NetworkErrorDialog : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ExitAction; // 0x180
		::System::Action* ConformAction; // 0x188
		::System::Boolean isDetailMode; // 0x190
		::System::Int32 stageCode; // 0x194
		::System::Int32 errorCode; // 0x198

		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void ShowNetworkError(::RPG::Client::TextID a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SHOWNETWORKERROR_OFFSET))(a1, a2, a3);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void SetErrorCode(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETERRORCODE_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void SetContentID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETCONTENTID_OFFSET))(this, a1);
		}

		::System::Void SetOkID(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_SETOKID_OFFSET))(this, a1);
		}

		::System::Void _SetupDetailMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__SETUPDETAILMODE_OFFSET))(this, a1);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void OnBtnDetailClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNDETAILCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnBackClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKERRORDIALOG_ONBTNBACKCLICK_OFFSET))(this, a1);
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
