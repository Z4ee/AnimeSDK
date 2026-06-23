#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9D3F10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x9D3BC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9D3DF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9D3D20)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x9D3C70)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0x52CCD0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventParamDefInternal_TypeDefinitionIndex = 36289;

	struct alignas(8) RegisterEventParamDefInternal
	{
		::System::IntPtr m_ParamName; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType m_ParamType; // 0x18

		::System::String* get_ParamName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMNAME_OFFSET))(this);
		}

		::System::Void set_ParamName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMNAME_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType get_ParamType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMTYPE_OFFSET))(this);
		}

		::System::Void set_ParamType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonEventParamType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMTYPE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::RegisterEventParamDef*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
