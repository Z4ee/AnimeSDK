#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET UNITYSDK_OFFSET(0x1875AAA0)
#define RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_D3997D30D1882F69_OFFSET UNITYSDK_OFFSET(0x1875A9D0)
#define RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1875AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByLevelLoseCheck_TypeDefinitionIndex = 22402;

	class ByLevelLoseCheck : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D3997D30D1882F69(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_D3997D30D1882F69_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A8202CAC86D4EF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByLevelLoseCheck* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByLevelLoseCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYLEVELLOSECHECK_METHOD_4_A8202CAC86D4EF53_OFFSET))(a1, a2);
		}
	};
}
