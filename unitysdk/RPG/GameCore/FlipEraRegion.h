#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FLIPERAREGION_METHOD_3_9243E2214165ED51_OFFSET UNITYSDK_OFFSET(0x1BEB9DB0)
#define RPG_GAMECORE_FLIPERAREGION_METHOD_3_ED59EEBA3639F714_OFFSET UNITYSDK_OFFSET(0x1BEB9E80)
#define RPG_GAMECORE_FLIPERAREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FlipEraRegion_TypeDefinitionIndex = 21518;

	class FlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9243E2214165ED51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlipEraRegion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlipEraRegion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_METHOD_3_9243E2214165ED51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED59EEBA3639F714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_METHOD_3_ED59EEBA3639F714_OFFSET))(a1, a2);
		}
	};
}
