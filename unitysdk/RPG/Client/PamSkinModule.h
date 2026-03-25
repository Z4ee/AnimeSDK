#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class PamSkinData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET UNITYSDK_OFFSET(0x9EC83C0)
#define RPG_CLIENT_PAMSKINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EC7970)
#define RPG_CLIENT_PAMSKINMODULE_GETALLPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x9EC8470)
#define RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x9EC8280)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0x9EC8590)
#define RPG_CLIENT_PAMSKINMODULE_HASNEWPAMSKIN_OFFSET UNITYSDK_OFFSET(0x9EC84D0)
#define RPG_CLIENT_PAMSKINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9EC7420)
#define RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0x9EC78F0)
#define RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x9EC8170)
#define RPG_CLIENT_PAMSKINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9EC7A20)
#define RPG_CLIENT_PAMSKINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9EC85A0)
#define RPG_CLIENT_PAMSKINMODULE__INITPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x9EC75A0)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9EC7BF0)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET UNITYSDK_OFFSET(0x9EC7E20)
#define RPG_CLIENT_PAMSKINMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x9EC7B30)
#define RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9EC7F60)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EC8650)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9EC85C0)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9EC8660)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinModule_TypeDefinitionIndex = 54024;

	class PamSkinModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PamSkinData*>* _AllPamSkinDataDict; // 0x10
		::System::UInt32 _CurrentPamSkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _OnCmdGetPamSkinDataScRsp(::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET))(this, cmdID, rsp);
		}

		::System::Void _OnCmdSelectPamSkinScRsp(::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET))(this, cmdID, rsp);
		}

		::System::Void _OnUnlockPamSkinScNotify(::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET))(this, cmdID, rsp);
		}

		::RPG::Client::PamSkinData* GetPamSkinData(::System::UInt32 pamSkinID)
		{
			return ((::RPG::Client::PamSkinData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET))(this, pamSkinID);
		}

		::System::Boolean TryGetPamSkinData(::System::UInt32 pamSkinID, ::RPG::Client::PamSkinData*& pamSkinData)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PamSkinData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET))(this, pamSkinID, pamSkinData);
		}

		::System::Boolean ContainsPamSkinID(::System::UInt32 pamSkinID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET))(this, pamSkinID);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::PamSkinData*>* GetAllPamSkinData()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::PamSkinData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_GETALLPAMSKINDATA_OFFSET))(this);
		}

		::System::Boolean HasNewPamSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_HASNEWPAMSKIN_OFFSET))(this);
		}

		::System::Void _InitPamSkinData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__INITPAMSKINDATA_OFFSET))(this);
		}

		::System::UInt32 get_CurrentPamSkinID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKINID_OFFSET))(this);
		}

		::System::Void set_CurrentPamSkinID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
