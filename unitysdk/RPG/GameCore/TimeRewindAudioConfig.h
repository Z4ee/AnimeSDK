#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_METHOD_2_9F3FED514437D63F_OFFSET UNITYSDK_OFFSET(0x1C151D70)
#define RPG_GAMECORE_TIMEREWINDAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C151F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindAudioConfig_TypeDefinitionIndex = 15953;

	class TimeRewindAudioConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EventName; // 0x10
		::System::String* InverseEventName; // 0x18
		::System::Single Duration; // 0x20
		::System::Single AudioDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDAUDIOCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9F3FED514437D63F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindAudioConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindAudioConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDAUDIOCONFIG_METHOD_2_9F3FED514437D63F_OFFSET))(a1, a2);
		}
	};
}
