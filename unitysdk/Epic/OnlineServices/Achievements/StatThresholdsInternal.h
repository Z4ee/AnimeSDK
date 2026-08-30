#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x7820)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x6E30)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x7A50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x78D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x7980)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_THRESHOLD_OFFSET UNITYSDK_OFFSET(0x2AA0)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int StatThresholdsInternal_TypeDefinitionIndex = 46488;

	struct alignas(8) StatThresholdsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::System::Int32 m_Threshold; // 0x20

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Threshold()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_GET_THRESHOLD_OFFSET))(this);
		}

		::System::Void set_Threshold(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_THRESHOLD_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::StatThresholds* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::StatThresholds*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_STATTHRESHOLDSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
