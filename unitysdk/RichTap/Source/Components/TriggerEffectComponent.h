#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Types/TriggerIndex.h"
#include "unitysdk/RichTap/Types/TriggerMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1DE196E0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE196D0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1DE196F0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1DE196B0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETMODE_OFFSET UNITYSDK_OFFSET(0x1DE196A0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1DE196C0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1DE19700)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_PLAY_OFFSET UNITYSDK_OFFSET(0x1DE19710)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE197D0)
#define RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1A000)

namespace RichTap::Source::Components
{
	inline static constexpr unsigned int TriggerEffectComponent_TypeDefinitionIndex = 38093;

	class TriggerEffectComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RichTap::Types::TriggerMode mode; // 0x18
		::RichTap::Types::TriggerIndex index; // 0x1C
		::System::Int32 startPosition; // 0x20
		::System::Int32 endPosition; // 0x24
		::System::Int32 amplitude; // 0x28
		::System::Int32 frequency; // 0x2C
		::System::Int32 strength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETMODE_OFFSET))(this);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETINDEX_OFFSET))(this);
		}

		::System::Int32 GetStartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETSTARTPOSITION_OFFSET))(this);
		}

		::System::Int32 GetEndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETENDPOSITION_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_GETSTRENGTH_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_PLAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_COMPONENTS_TRIGGEREFFECTCOMPONENT_TOSTRING_OFFSET))(this);
		}
	};
}
