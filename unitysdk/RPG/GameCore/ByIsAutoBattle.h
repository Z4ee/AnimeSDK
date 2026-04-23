#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OperationTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8E725B961A09D94E_OFFSET UNITYSDK_OFFSET(0x1874E220)
#define RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET UNITYSDK_OFFSET(0x1874E300)
#define RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874E2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAutoBattle_TypeDefinitionIndex = 21451;

	class ByIsAutoBattle : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::OperationTypeMask ApplyOpMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E725B961A09D94E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_8E725B961A09D94E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF98E74910E89850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsAutoBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsAutoBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISAUTOBATTLE_METHOD_4_EF98E74910E89850_OFFSET))(a1, a2);
		}
	};
}
