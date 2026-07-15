#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_METHOD_2_1D6C3813E775F569_OFFSET UNITYSDK_OFFSET(0x1C152DC0)
#define RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C152F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityAnimOverride_TypeDefinitionIndex = 16869;

	class TimeRewindEntityAnimOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* OverrideState; // 0x10
		::System::String* OverrideClipPath; // 0x18
		::System::Boolean OnlyOverrideController; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D6C3813E775F569(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindEntityAnimOverride*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindEntityAnimOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMOVERRIDE_METHOD_2_1D6C3813E775F569_OFFSET))(a1, a2);
		}
	};
}
