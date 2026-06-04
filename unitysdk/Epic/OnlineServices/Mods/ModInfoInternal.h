#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Mods { class ModIdentifier; }
namespace Epic::OnlineServices::Mods { class ModInfo; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x59E50)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_MODS_OFFSET UNITYSDK_OFFSET(0x59CD0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x59E40)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_MODS_OFFSET UNITYSDK_OFFSET(0x59D40)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x59DB0)
#define EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x2A90)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModInfoInternal_TypeDefinitionIndex = 42578;

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

		::System::Void set_Mods(::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_MODS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Mods::ModInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
