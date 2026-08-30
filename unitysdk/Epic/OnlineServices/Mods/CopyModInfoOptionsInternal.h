#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Mods { class CopyModInfoOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x5B180)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x5B170)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x5AFD0)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x5B090)
#define EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x2AA0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int CopyModInfoOptionsInternal_TypeDefinitionIndex = 45608;

	struct alignas(8) CopyModInfoOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::Mods::ModEnumerationType m_Type; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::CopyModInfoOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::CopyModInfoOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_COPYMODINFOOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
