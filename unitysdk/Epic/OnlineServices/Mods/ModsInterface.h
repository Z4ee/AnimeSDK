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

#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_COPYMODINFO_OFFSET UNITYSDK_OFFSET(0x1BF9EFE0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ENUMERATEMODS_OFFSET UNITYSDK_OFFSET(0x1BF9F270)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_INSTALLMOD_OFFSET UNITYSDK_OFFSET(0x1BF9F4F0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONENUMERATEMODSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF9ED40)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF9EDE0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUNINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF9EE80)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUPDATEMODCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1BF9EF20)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UNINSTALLMOD_OFFSET UNITYSDK_OFFSET(0x1BF9F6D0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UPDATEMOD_OFFSET UNITYSDK_OFFSET(0x1BF9F8B0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF9EFD0)
#define EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9EFC0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModsInterface_TypeDefinitionIndex = 43440;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyModInfo(::Epic::OnlineServices::Mods::CopyModInfoOptions* a1, ::Epic::OnlineServices::Mods::ModInfo*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Mods::CopyModInfoOptions*, ::Epic::OnlineServices::Mods::ModInfo*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_COPYMODINFO_OFFSET))(this, a1, a2);
		}

		::System::Void EnumerateMods(::Epic::OnlineServices::Mods::EnumerateModsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::EnumerateModsOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnEnumerateModsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ENUMERATEMODS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InstallMod(::Epic::OnlineServices::Mods::InstallModOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Mods::OnInstallModCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::InstallModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnInstallModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_INSTALLMOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UninstallMod(::Epic::OnlineServices::Mods::UninstallModOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Mods::OnUninstallModCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UninstallModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnUninstallModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UNINSTALLMOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateMod(::Epic::OnlineServices::Mods::UpdateModOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Mods::OnUpdateModCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::UpdateModOptions*, ::System::Object*, ::Epic::OnlineServices::Mods::OnUpdateModCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_UPDATEMOD_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnEnumerateModsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONENUMERATEMODSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnInstallModCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUninstallModCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUNINSTALLMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateModCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODSINTERFACE_ONUPDATEMODCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
