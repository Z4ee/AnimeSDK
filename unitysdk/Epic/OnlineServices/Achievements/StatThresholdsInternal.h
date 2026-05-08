#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AECC0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8AEAE0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8AEC50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x8AEB90)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8AEC40)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x577FD0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int StatThresholdsInternal_TypeDefinitionIndex = 34861;

	struct alignas(8) StatThresholdsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::System::Int32 m_Threshold; // 0x20

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Threshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_THRESHOLD_OFFSET))(this);
		}

		::System::Void set_Threshold(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_THRESHOLD_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::StatThresholds* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::StatThresholds*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
