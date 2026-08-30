#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class PamSkinData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PAMSKINMODULE_CONTAINSPAMSKINID_OFFSET UNITYSDK_OFFSET(0x1C4D8300)
#define RPG_CLIENT_PAMSKINMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C4D76D0)
#define RPG_CLIENT_PAMSKINMODULE_GETALLPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x1C4D8360)
#define RPG_CLIENT_PAMSKINMODULE_GETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x1C4D81D0)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0x1C4D7EB0)
#define RPG_CLIENT_PAMSKINMODULE_GET_CURRENTPAMSKIN_OFFSET UNITYSDK_OFFSET(0x1C4D8500)
#define RPG_CLIENT_PAMSKINMODULE_HASNEWPAMSKIN_OFFSET UNITYSDK_OFFSET(0x1C4D8440)
#define RPG_CLIENT_PAMSKINMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1C4D7150)
#define RPG_CLIENT_PAMSKINMODULE_SET_CURRENTPAMSKINID_OFFSET UNITYSDK_OFFSET(0x1C4D7650)
#define RPG_CLIENT_PAMSKINMODULE_TRYGETPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x1C4D8100)
#define RPG_CLIENT_PAMSKINMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1C4D7770)
#define RPG_CLIENT_PAMSKINMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D85A0)
#define RPG_CLIENT_PAMSKINMODULE__INITPAMSKINDATA_OFFSET UNITYSDK_OFFSET(0x1C4D72B0)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDGETPAMSKINDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1C4D7A90)
#define RPG_CLIENT_PAMSKINMODULE__ONCMDSELECTPAMSKINSCRSP_OFFSET UNITYSDK_OFFSET(0x1C4D7D30)
#define RPG_CLIENT_PAMSKINMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x1C4D79D0)
#define RPG_CLIENT_PAMSKINMODULE__ONUNLOCKPAMSKINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1C4D7EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamSkinModule_TypeDefinitionIndex = 66461;

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
	};
}
