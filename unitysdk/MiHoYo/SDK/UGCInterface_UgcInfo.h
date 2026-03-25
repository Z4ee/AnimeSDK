#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_UGCINTERFACE_UGCINFO_TOQUERY_OFFSET UNITYSDK_OFFSET(0x85A2020)
#define MIHOYO_SDK_UGCINTERFACE_UGCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x859DEF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UGCInterface_UgcInfo_TypeDefinitionIndex = 37197;

	class UGCInterface_UgcInfo : public ::System::Object
	{
	public:
		::System::String* token_url; // 0x10
		::System::String* game; // 0x18
		::System::String* lang; // 0x20
		::System::String* auth_appid; // 0x28
		::System::String* authkey_ver; // 0x30
		::System::Int64 sign_type; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UGCINFO__CTOR_OFFSET))(this);
		}

		::System::String* ToQuery(::System::String* strAuthKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UGCINTERFACE_UGCINFO_TOQUERY_OFFSET))(this, strAuthKey);
		}
	};
}
