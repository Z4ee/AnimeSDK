#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/StatThresholdsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BEE9080)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_GET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1BEE90A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_1_OFFSET UNITYSDK_OFFSET(0x1BEE9270)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BEE9090)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_OFFSET UNITYSDK_OFFSET(0x1BEE90C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x1BEE90B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE94C0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int StatThresholds_TypeDefinitionIndex = 36423;

	class StatThresholds : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _Threshold_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Threshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_GET_THRESHOLD_OFFSET))(this);
		}

		::System::Void set_Threshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_THRESHOLD_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::StatThresholdsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::StatThresholdsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDS_SET_1_OFFSET))(this, other);
		}
	};
}
