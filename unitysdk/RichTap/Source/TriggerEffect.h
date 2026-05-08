#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Types/TriggerIndex.h"
#include "unitysdk/RichTap/Types/TriggerMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RICHTAP_SOURCE_TRIGGEREFFECT_BUILDFEEDBACKMODE_OFFSET UNITYSDK_OFFSET(0x1BAB7BD0)
#define RICHTAP_SOURCE_TRIGGEREFFECT_BUILDVIBRATIONMODE_OFFSET UNITYSDK_OFFSET(0x1BAB7B60)
#define RICHTAP_SOURCE_TRIGGEREFFECT_BUILDWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x1BAB7C20)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1BAB7B30)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1BAB7B20)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1BAB7B40)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1BAB7B00)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x1BAB7AF0)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1BAB7B10)
#define RICHTAP_SOURCE_TRIGGEREFFECT_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1BAB7B50)
#define RICHTAP_SOURCE_TRIGGEREFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1BAB7C80)
#define RICHTAP_SOURCE_TRIGGEREFFECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BAB7D40)
#define RICHTAP_SOURCE_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB7BC0)

namespace RichTap::Source
{
	inline static constexpr unsigned int TriggerEffect_TypeDefinitionIndex = 36483;

	class TriggerEffect : public ::System::Object
	{
	public:
		::RichTap::Types::TriggerMode mode; // 0x10
		::RichTap::Types::TriggerIndex index; // 0x14
		::System::Int32 startPosition; // 0x18
		::System::Int32 endPosition; // 0x1C
		::System::Int32 amplitude; // 0x20
		::System::Int32 frequency; // 0x24
		::System::Int32 strength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETMODE_OFFSET))(this);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETINDEX_OFFSET))(this);
		}

		::System::Int32 GetStartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETSTARTPOSITION_OFFSET))(this);
		}

		::System::Int32 GetEndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETENDPOSITION_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_GETSTRENGTH_OFFSET))(this);
		}

		static ::RichTap::Source::TriggerEffect* BuildVibrationMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 amplitdue, ::System::Int32 frequency)
		{
			return ((::RichTap::Source::TriggerEffect*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_BUILDVIBRATIONMODE_OFFSET))(index, startPosition, amplitdue, frequency);
		}

		static ::RichTap::Source::TriggerEffect* BuildFeedbackMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 strength)
		{
			return ((::RichTap::Source::TriggerEffect*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_BUILDFEEDBACKMODE_OFFSET))(index, startPosition, strength);
		}

		static ::RichTap::Source::TriggerEffect* BuildWeaponMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32 strength)
		{
			return ((::RichTap::Source::TriggerEffect*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_BUILDWEAPONMODE_OFFSET))(index, startPosition, endPosition, strength);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_PLAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECT_TOSTRING_OFFSET))(this);
		}
	};
}
