#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonEventParamType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class RegisterEventParamDef; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C3CD10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x3C3CAD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_GET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0x12370)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C3CD00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C3CC30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMNAME_OFFSET UNITYSDK_OFFSET(0x3C3CB80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_REGISTEREVENTPARAMDEFINTERNAL_SET_PARAMTYPE_OFFSET UNITYSDK_OFFSET(0x379F970)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int RegisterEventParamDefInternal_TypeDefinitionIndex = 46353;

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
