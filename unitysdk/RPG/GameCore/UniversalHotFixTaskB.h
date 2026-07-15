#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UniversalHotFixBaseTask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_953972F5DC2CCA52_OFFSET UNITYSDK_OFFSET(0x1B884900)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_DAE54065822F0511_OFFSET UNITYSDK_OFFSET(0x1B8833C0)
#define RPG_GAMECORE_UNIVERSALHOTFIXTASKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8833B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UniversalHotFixTaskB_TypeDefinitionIndex = 22522;

	class UniversalHotFixTaskB : public ::RPG::GameCore::UniversalHotFixBaseTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_953972F5DC2CCA52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskB*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskB*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_953972F5DC2CCA52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DAE54065822F0511(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNIVERSALHOTFIXTASKB_METHOD_4_DAE54065822F0511_OFFSET))(a1, a2);
		}
	};
}
