#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class FateSupportCollectionPart; }
namespace RPG::Client { class FateSupportNoVoicePart; }
namespace RPG::Client { class FateSupportToastPart; }
namespace System { class Object; }

#define RPG_CLIENT_FATESUPPORTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96A18D0)
#define RPG_CLIENT_FATESUPPORTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x96A1110)
#define RPG_CLIENT_FATESUPPORTMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x96A16E0)
#define RPG_CLIENT_FATESUPPORTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x96A1800)
#define RPG_CLIENT_FATESUPPORTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x96A1670)
#define RPG_CLIENT_FATESUPPORTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x96A1E30)
#define RPG_CLIENT_FATESUPPORTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x96A1CD0)
#define RPG_CLIENT_FATESUPPORTMODULE__ONFINISHMAINMISSION_OFFSET UNITYSDK_OFFSET(0x96A19D0)
#define RPG_CLIENT_FATESUPPORTMODULE__TRYTRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x96A1B40)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96A1FF0)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x96A1E40)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x96A1F30)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x96A1F90)
#define RPG_CLIENT_FATESUPPORTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x96A1ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportModule_TypeDefinitionIndex = 52077;

	class FateSupportModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_FateSupportPreviewHudID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(FateSupportModule_TypeDefinitionIndex)->GetStaticField(0xE10);
		}
		::RPG::Client::FateSupportToastPart* ToastPart; // 0x10
		::RPG::Client::FateSupportNoVoicePart* NoVoicePart; // 0x18
		::RPG::Client::FateSupportCollectionPart* CollectionPart; // 0x20

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
