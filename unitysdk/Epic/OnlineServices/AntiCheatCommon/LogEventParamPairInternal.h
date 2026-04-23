#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/LogEventParamPairParamValueInternal.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPair; }
namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPairParamValue; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_GET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0x9B30)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9D40)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9CC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0x9C50)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventParamPairInternal_TypeDefinitionIndex = 42473;

	struct alignas(8) LogEventParamPairInternal
	{
		::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValueInternal m_ParamValue; // 0x10

		::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* get_ParamValue()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_GET_PARAMVALUE_OFFSET))(this);
		}

		::System::Void set_ParamValue(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_PARAMVALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPair*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIRINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
