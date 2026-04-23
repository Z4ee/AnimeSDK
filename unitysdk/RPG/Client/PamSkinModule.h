#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class PamSkinData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET UNITYSDK_OFFSET(0xAC21950)
#define RPG_CLIENT_PAMSKINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC20F00)
#define RPG_CLIENT_PAMSKINMODULE_GETALLPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xAC21A00)
#define RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xAC21810)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xAC21B20)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKIN_OFFSET UNITYSDK_OFFSET(0xAC21B30)
#define RPG_CLIENT_PAMSKINMODULE_HASNEWPAMSKIN_OFFSET UNITYSDK_OFFSET(0xAC21A60)
#define RPG_CLIENT_PAMSKINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAC209B0)
#define RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xAC20E80)
#define RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xAC21700)
#define RPG_CLIENT_PAMSKINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC20FB0)
#define RPG_CLIENT_PAMSKINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC21BA0)
#define RPG_CLIENT_PAMSKINMODULE__INITPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xAC20B30)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET UNITYSDK_OFFSET(0xAC21180)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET UNITYSDK_OFFSET(0xAC213B0)
#define RPG_CLIENT_PAMSKINMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xAC210C0)
#define RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC214F0)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC21C50)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAC21BC0)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC21C60)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinModule_TypeDefinitionIndex = 61187;

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

		::RPG::Client::PamSkinData* get_CurrentPamSkin()
		{
			return ((::RPG::Client::PamSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKIN_OFFSET))(this);
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
