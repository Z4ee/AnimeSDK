#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYRANDOM_METHOD_4_77CFDBACF938C128_OFFSET UNITYSDK_OFFSET(0x1957B960)
#define RPG_GAMECORE_BYRANDOM_METHOD_4_C9B15B236C759968_OFFSET UNITYSDK_OFFSET(0x1957BA20)
#define RPG_GAMECORE_BYRANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1957B9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRandom_TypeDefinitionIndex = 19896;

	class ByRandom : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_77CFDBACF938C128(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM_METHOD_4_77CFDBACF938C128_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C9B15B236C759968(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRandom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYRANDOM_METHOD_4_C9B15B236C759968_OFFSET))(a1, a2);
		}
	};
}
