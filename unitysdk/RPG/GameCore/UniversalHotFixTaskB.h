#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_1D8198B00FEE39C8_OFFSET UNITYSDK_OFFSET(0x19E37790)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_DAE54065822F0511_OFFSET UNITYSDK_OFFSET(0x19E36A20)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB__CTOR_OFFSET UNITYSDK_OFFSET(0x19E369F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskB_TypeDefinitionIndex = 22086;

	class UniversalHotFixTaskB : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D8198B00FEE39C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskB*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_1D8198B00FEE39C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DAE54065822F0511(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_DAE54065822F0511_OFFSET))(a1, a2);
		}
	};
}
