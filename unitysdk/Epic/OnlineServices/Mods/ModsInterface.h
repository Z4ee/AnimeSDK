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

#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_COPYMODINFO_OFFSET UNITYSDK_OFFSET(0x869FE80)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ENUMERATEMODS_OFFSET UNITYSDK_OFFSET(0x86A0110)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_INSTALLMOD_OFFSET UNITYSDK_OFFSET(0x86A0390)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONENUMERATEMODSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x869FC20)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x869FCB0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUNINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x869FD40)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUPDATEMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x869FDD0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UNINSTALLMOD_OFFSET UNITYSDK_OFFSET(0x86A0570)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UPDATEMOD_OFFSET UNITYSDK_OFFSET(0x86A0750)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x869FE70)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x869FE60)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModsInterface_TypeDefinitionIndex = 35950;

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
