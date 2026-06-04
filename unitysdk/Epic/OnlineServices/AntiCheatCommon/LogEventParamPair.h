#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/LogEventParamPairInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::AntiCheatCommon { class LogEventParamPairParamValue; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_GET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0xA0C4E80)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_1_OFFSET UNITYSDK_OFFSET(0xA0C5170)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_OFFSET UNITYSDK_OFFSET(0xA0C4EA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_PARAMVALUE_OFFSET UNITYSDK_OFFSET(0xA0C4E90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C53E0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int LogEventParamPair_TypeDefinitionIndex = 43275;

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

		::System::Void set_ParamValue(::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairParamValue*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_PARAMVALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogEventParamPairInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_LOGEVENTPARAMPAIR_SET_1_OFFSET))(this, a1);
		}
	};
}
