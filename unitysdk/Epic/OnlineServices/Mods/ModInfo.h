#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModEnumerationType.h"
#include "unitysdk/Epic/OnlineServices/Mods/ModInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Mods { class ModIdentifier; }

#define EPIC_ONLINESERVICES_MODS_MODINFO_GET_MODS_OFFSET UNITYSDK_OFFSET(0x1DF738A0)
#define EPIC_ONLINESERVICES_MODS_MODINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF738C0)
#define EPIC_ONLINESERVICES_MODS_MODINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF73A40)
#define EPIC_ONLINESERVICES_MODS_MODINFO_SET_MODS_OFFSET UNITYSDK_OFFSET(0x1DF738B0)
#define EPIC_ONLINESERVICES_MODS_MODINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF738E0)
#define EPIC_ONLINESERVICES_MODS_MODINFO_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF738D0)
#define EPIC_ONLINESERVICES_MODS_MODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF73C40)

namespace Epic::OnlineServices::Mods
{
	inline static constexpr unsigned int ModInfo_TypeDefinitionIndex = 36215;

	class ModInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* _Mods_k__BackingField; // 0x10
		::Epic::OnlineServices::Mods::ModEnumerationType _Type_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* get_Mods()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_GET_MODS_OFFSET))(this);
		}

		::System::Void set_Mods(::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Mods::ModIdentifier*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_SET_MODS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Mods::ModEnumerationType get_Type()
		{
			return ((::Epic::OnlineServices::Mods::ModEnumerationType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Epic::OnlineServices::Mods::ModEnumerationType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Mods::ModEnumerationType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_SET_TYPE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Mods::ModInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_MODS_MODINFO_SET_1_OFFSET))(this, other);
		}
	};
}
