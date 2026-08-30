#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Achievements { class PlayerStatInfo; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3BEDB60)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x3BED910)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_THRESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0xF080)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BEDB50)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x3A2C790)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x3BED9C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BEDA70)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_THRESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0xF090)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerStatInfoInternal_TypeDefinitionIndex = 46482;

	struct alignas(8) PlayerStatInfoInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Name; // 0x18
		::System::Int32 m_CurrentValue; // 0x20
		::System::Int32 m_ThresholdValue; // 0x24

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_ThresholdValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_GET_THRESHOLDVALUE_OFFSET))(this);
		}

		::System::Void set_ThresholdValue(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_THRESHOLDVALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Achievements::PlayerStatInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Achievements::PlayerStatInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFOINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
