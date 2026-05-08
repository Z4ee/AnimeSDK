#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/PlayerStatInfoInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1989D5E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1989D5C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_THRESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0x1989D600)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1989D810)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1989D5F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1989D5D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_OFFSET UNITYSDK_OFFSET(0x1989D620)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_THRESHOLDVALUE_OFFSET UNITYSDK_OFFSET(0x1989D610)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1989DA70)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int PlayerStatInfo_TypeDefinitionIndex = 34854;

	class PlayerStatInfo : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _ThresholdValue_k__BackingField; // 0x18
		::System::Int32 _CurrentValue_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_CURRENTVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_ThresholdValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_GET_THRESHOLDVALUE_OFFSET))(this);
		}

		::System::Void set_ThresholdValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_THRESHOLDVALUE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerStatInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::PlayerStatInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_PLAYERSTATINFO_SET_1_OFFSET))(this, other);
		}
	};
}
