#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/LoadingFuncType.h"

class Class_1_BC582430ED7928FC;
namespace RPG::GameCore { class LoadingDescRow; }
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LOADINGTIPSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6ED310)
#define RPG_CLIENT_LOADINGTIPSMODULE_GETONETIP_OFFSET UNITYSDK_OFFSET(0xA6ED530)
#define RPG_CLIENT_LOADINGTIPSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA6ED270)
#define RPG_CLIENT_LOADINGTIPSMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA6ED420)
#define RPG_CLIENT_LOADINGTIPSMODULE_SETUPSTORYLINETIPS_OFFSET UNITYSDK_OFFSET(0xA6ED180)
#define RPG_CLIENT_LOADINGTIPSMODULE_SETUPWORLDTELETIPS_OFFSET UNITYSDK_OFFSET(0xA6ECF40)
#define RPG_CLIENT_LOADINGTIPSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6ED370)
#define RPG_CLIENT_LOADINGTIPSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ED220)
#define RPG_CLIENT_LOADINGTIPSMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0xA6ED5E0)
#define RPG_CLIENT_LOADINGTIPSMODULE__SETUPTIPS_OFFSET UNITYSDK_OFFSET(0xA6ECFF0)
#define RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6ED700)
#define RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA6ED670)
#define RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6ED710)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingTipsModule_TypeDefinitionIndex = 60545;

	class LoadingTipsModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_BC582430ED7928FC* _Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SetupWorldTeleTips(::System::UInt32 worldID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_SETUPWORLDTELETIPS_OFFSET))(this, worldID);
		}

		::System::Void SetupStoryLineTips(::System::UInt32 storyLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_SETUPSTORYLINETIPS_OFFSET))(this, storyLineID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void RequestRelativeMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET))(this);
		}

		::RPG::GameCore::LoadingDescRow* GetOneTip()
		{
			return ((::RPG::GameCore::LoadingDescRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_GETONETIP_OFFSET))(this);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Boolean _SetupTips(::RPG::GameCore::LoadingFuncType funcType, ::System::Func_2<::RPG::GameCore::LoadingFuncConfigRow*, ::System::Boolean>* funcConfigFilterFunc)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingFuncType, ::System::Func_2<::RPG::GameCore::LoadingFuncConfigRow*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__SETUPTIPS_OFFSET))(this, funcType, funcConfigFilterFunc);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
