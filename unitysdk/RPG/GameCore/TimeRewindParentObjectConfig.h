#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_METHOD_2_2D290160F57673E8_OFFSET UNITYSDK_OFFSET(0x1D529080)
#define RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D529240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindParentObjectConfig_TypeDefinitionIndex = 16437;

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

		static ::System::Void Method_2_2D290160F57673E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindParentObjectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindParentObjectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTOBJECTCONFIG_METHOD_2_2D290160F57673E8_OFFSET))(a1, a2);
		}
	};
}
