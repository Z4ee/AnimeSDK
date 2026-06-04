#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xD970)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xDBC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xDAF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0xDA20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0xDAE0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventParamDefInternal_TypeDefinitionIndex = 43310;

	struct alignas(8) RegisterEventParamDefInternal
	{
		::System::IntPtr m_ParamName; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType m_ParamType; // 0x18

		::System::String* get_ParamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMNAME_OFFSET))(this);
		}

		::System::Void set_ParamName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMNAME_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMTYPE_OFFSET))(this);
		}

		::System::Void set_ParamType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMTYPE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
