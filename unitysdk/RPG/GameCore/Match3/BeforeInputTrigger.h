#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_METHOD_4_10B32EF2C26D4180_OFFSET UNITYSDK_OFFSET(0x1BD24C60)
#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_METHOD_4_7F0B9261D0824945_OFFSET UNITYSDK_OFFSET(0x1BD24BC0)
#define RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD24C50)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BeforeInputTrigger_TypeDefinitionIndex = 24002;

	class BeforeInputTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7F0B9261D0824945(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BeforeInputTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BeforeInputTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_METHOD_4_7F0B9261D0824945_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10B32EF2C26D4180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BeforeInputTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BeforeInputTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BEFOREINPUTTRIGGER_METHOD_4_10B32EF2C26D4180_OFFSET))(a1, a2);
		}
	};
}
