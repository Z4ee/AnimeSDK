#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Mods { class CopyModInfoOptions; }
namespace Epic::OnlineServices::Mods { class EnumerateModsOptions; }
namespace Epic::OnlineServices::Mods { class InstallModOptions; }
namespace Epic::OnlineServices::Mods { class ModInfo; }
namespace Epic::OnlineServices::Mods { class OnEnumerateModsCallback; }
namespace Epic::OnlineServices::Mods { class OnInstallModCallback; }
namespace Epic::OnlineServices::Mods { class OnUninstallModCallback; }
namespace Epic::OnlineServices::Mods { class OnUpdateModCallback; }
namespace Epic::OnlineServices::Mods { class UninstallModOptions; }
namespace Epic::OnlineServices::Mods { class UpdateModOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_COPYMODINFO_OFFSET UNITYSDK_OFFSET(0x1A86A170)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ENUMERATEMODS_OFFSET UNITYSDK_OFFSET(0x1A86A420)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_INSTALLMOD_OFFSET UNITYSDK_OFFSET(0x1A86A6A0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONENUMERATEMODSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A869F10)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A869FA0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUNINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86A030)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUPDATEMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A86A0C0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UNINSTALLMOD_OFFSET UNITYSDK_OFFSET(0x1A86A870)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UPDATEMOD_OFFSET UNITYSDK_OFFSET(0x1A86AA30)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A86A160)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86A150)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModsInterface_TypeDefinitionIndex = 33995;

	class ModsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopymodinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EnumeratemodsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 InstallmodApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ModIdentifierApiLatest = 0x1; // 0x0
		// static const ::System::Int32 ModinfoApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UninstallmodApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatemodApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyModInfo(::Epic::OnlineServices::Mods::CopyModInfoOptions* options, ::Epic::OnlineServices::Mods::ModInfo*& outEnumeratedMods)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Mods::CopyModInfoOptions*, ::Epic::OnlineServices::Mods::ModInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_COPYMODINFO_OFFSET))(this, options, outEnumeratedMods);
		}

		::System::Void EnumerateMods(::Epic::OnlineServices::Mods::EnumerateModsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::EnumerateModsOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ENUMERATEMODS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void InstallMod(::Epic::OnlineServices::Mods::InstallModOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Mods::OnInstallModCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnInstallModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_INSTALLMOD_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UninstallMod(::Epic::OnlineServices::Mods::UninstallModOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Mods::OnUninstallModCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnUninstallModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UNINSTALLMOD_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UpdateMod(::Epic::OnlineServices::Mods::UpdateModOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Mods::OnUpdateModCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnUpdateModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UPDATEMOD_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnEnumerateModsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONENUMERATEMODSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnInstallModCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUninstallModCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUNINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateModCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUPDATEMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
