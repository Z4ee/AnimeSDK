#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class PamSkinData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET UNITYSDK_OFFSET(0xC331720)
#define RPG_CLIENT_PAMSKINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC330B40)
#define RPG_CLIENT_PAMSKINMODULE_GETALLPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xC331780)
#define RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xC3315F0)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xC331950)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKIN_OFFSET UNITYSDK_OFFSET(0xC331960)
#define RPG_CLIENT_PAMSKINMODULE_HASNEWPAMSKIN_OFFSET UNITYSDK_OFFSET(0xC331860)
#define RPG_CLIENT_PAMSKINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC330570)
#define RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0xC330AC0)
#define RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xC331520)
#define RPG_CLIENT_PAMSKINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC330BE0)
#define RPG_CLIENT_PAMSKINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC3319D0)
#define RPG_CLIENT_PAMSKINMODULE__INITPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0xC330720)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET UNITYSDK_OFFSET(0xC330F00)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET UNITYSDK_OFFSET(0xC3311A0)
#define RPG_CLIENT_PAMSKINMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xC330E40)
#define RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC3312F0)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC331A70)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC3319F0)
#define RPG_CLIENT_PAMSKINMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC331A80)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinModule_TypeDefinitionIndex = 62111;

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

		::System::Void _OnCmdGetPamSkinDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSelectPamSkinScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnUnlockPamSkinScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PamSkinData* GetPamSkinData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PamSkinData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPamSkinData(::System::UInt32 a1, ::RPG::Client::PamSkinData*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::PamSkinData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsPamSkinID(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET))(this, a1);
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

		::System::Void set_CurrentPamSkinID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET))(this, a1);
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
