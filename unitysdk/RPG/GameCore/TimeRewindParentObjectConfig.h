#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_METHOD_2_6012DEFB6C926F7A_OFFSET UNITYSDK_OFFSET(0x1DB5B410)
#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5B650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindParentObjectConfig_TypeDefinitionIndex = 16613;

	class TimeRewindParentObjectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PropID; // 0x10
		::System::String* TriggerStableStateName; // 0x18
		::System::Single TriggerStableStateNormalizeTime; // 0x20
		::RPG::MVector3 ChildOffsetPos; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6012DEFB6C926F7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindParentObjectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindParentObjectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_METHOD_2_6012DEFB6C926F7A_OFFSET))(a1, a2);
		}
	};
}
