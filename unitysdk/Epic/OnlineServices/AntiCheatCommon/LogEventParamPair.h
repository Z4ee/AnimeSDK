#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/LogEventParamPairInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPairParamValue; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_GET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0x8384190)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_1_OFFSET UNITYSDK_OFFSET(0x8384480)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_OFFSET UNITYSDK_OFFSET(0x83841B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0x83841A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x83846E0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventParamPair_TypeDefinitionIndex = 36646;

	class LogEventParamPair : public ::System::Object
	{
	public:
		::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* _ParamValue_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* get_ParamValue()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_GET_PARAMVALUE_OFFSET))(this);
		}

		::System::Void set_ParamValue(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_PARAMVALUE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_1_OFFSET))(this, other);
		}
	};
}
