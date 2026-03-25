#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_029B191E460DDF1B_OFFSET UNITYSDK_OFFSET(0x16FFDFD0)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_A2456C257C18B771_OFFSET UNITYSDK_OFFSET(0x16FFE0A0)
#define RPG_GAMECORE_BYCHECKELFTODAYMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFE050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckElfTodayManaged_TypeDefinitionIndex = 19902;

	class ByCheckElfTodayManaged : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_029B191E460DDF1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckElfTodayManaged*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckElfTodayManaged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_029B191E460DDF1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A2456C257C18B771(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckElfTodayManaged* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckElfTodayManaged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKELFTODAYMANAGED_METHOD_4_A2456C257C18B771_OFFSET))(a1, a2);
		}
	};
}
