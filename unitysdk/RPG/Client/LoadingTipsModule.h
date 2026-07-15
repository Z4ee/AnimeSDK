#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/LoadingFuncType.h"

class Class_1_24E6EE6459AF704E;
namespace RPG::GameCore { class LoadingDescRow; }
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_LOADINGTIPSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AC9F30)
#define RPG_CLIENT_LOADINGTIPSMODULE_GETONETIP_OFFSET UNITYSDK_OFFSET(0x19ACA170)
#define RPG_CLIENT_LOADINGTIPSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x19AC9ED0)
#define RPG_CLIENT_LOADINGTIPSMODULE_REQUESTRELATIVEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x19ACA060)
#define RPG_CLIENT_LOADINGTIPSMODULE_SETUPSTORYLINETIPS_OFFSET UNITYSDK_OFFSET(0x19AC9DE0)
#define RPG_CLIENT_LOADINGTIPSMODULE_SETUPWORLDTELETIPS_OFFSET UNITYSDK_OFFSET(0x19AC9B50)
#define RPG_CLIENT_LOADINGTIPSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x19AC9F90)
#define RPG_CLIENT_LOADINGTIPSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC9E80)
#define RPG_CLIENT_LOADINGTIPSMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x19ACA1C0)
#define RPG_CLIENT_LOADINGTIPSMODULE__SETUPTIPS_OFFSET UNITYSDK_OFFSET(0x19AC9C10)

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingTipsModule_TypeDefinitionIndex = 62841;

	class LoadingTipsModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_24E6EE6459AF704E* _Data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void SetupWorldTeleTips(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_SETUPWORLDTELETIPS_OFFSET))(this, a1);
		}

		::System::Void SetupStoryLineTips(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE_SETUPSTORYLINETIPS_OFFSET))(this, a1);
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

		::System::Void _OnHideLoadingPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__ONHIDELOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Boolean _SetupTips(::RPG::GameCore::LoadingFuncType a1, ::System::Func_2<::RPG::GameCore::LoadingFuncConfigRow*, ::System::Boolean>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoadingFuncType, ::System::Func_2<::RPG::GameCore::LoadingFuncConfigRow*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOADINGTIPSMODULE__SETUPTIPS_OFFSET))(this, a1, a2);
		}
	};
}
