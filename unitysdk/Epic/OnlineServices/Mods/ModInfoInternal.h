#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace Epic::OnlineServices::Mods { class ModInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x898EE0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_MODS_OFFSET UNITYSDK_OFFSET(0x898D60)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x898ED0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_MODS_OFFSET UNITYSDK_OFFSET(0x898DD0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x898E40)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x577FD0)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModInfoInternal_TypeDefinitionIndex = 33994;

	struct alignas(8) ModInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_ModsCount; // 0x14
		::System::IntPtr m_Mods; // 0x18
		::Epic::OnlineServices::Mods::ModEnumerationType m_Type; // 0x20

		::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* get_Mods()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_MODS_OFFSET))(this);
		}

		::System::Void set_Mods(::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_MODS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_TYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::ModInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
