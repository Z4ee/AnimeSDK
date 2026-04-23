#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class FateSupportCollectionPart; }
namespace RPG::Client { class FateSupportNoVoicePart; }
namespace RPG::Client { class FateSupportToastPart; }
namespace System { class Object; }

#define RPG_CLIENT_FATESUPPORTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA360F40)
#define RPG_CLIENT_FATESUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA360780)
#define RPG_CLIENT_FATESUPPORTMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA360D50)
#define RPG_CLIENT_FATESUPPORTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA360E70)
#define RPG_CLIENT_FATESUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA360CE0)
#define RPG_CLIENT_FATESUPPORTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA361420)
#define RPG_CLIENT_FATESUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA361340)
#define RPG_CLIENT_FATESUPPORTMODULE__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA361040)
#define RPG_CLIENT_FATESUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0xA3611B0)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3615E0)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA361430)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA361520)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA361580)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA3614C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportModule_TypeDefinitionIndex = 59026;

	class FateSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_FateSupportPreviewHudID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateSupportModule_TypeDefinitionIndex)->GetStaticField(0x4920);
		}
		::RPG::Client::FateSupportCollectionPart* CollectionPart; // 0x10
		::RPG::Client::FateSupportToastPart* ToastPart; // 0x18
		::RPG::Client::FateSupportNoVoicePart* NoVoicePart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnFinishMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__ONFINISHMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _TryTriggerTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
