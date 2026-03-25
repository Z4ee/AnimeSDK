#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_76D9186D63DAC3CA_OFFSET UNITYSDK_OFFSET(0x1703D5B0)
#define RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_B39726CB584BD856_OFFSET UNITYSDK_OFFSET(0x1703D4D0)
#define RPG_GAMECORE_BYTARGETLOCKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1703D550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetLockHP_TypeDefinitionIndex = 21860;

	class ByTargetLockHP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* LockKey; // 0x28
		::RPG::GameCore::LockHPStrength Strength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B39726CB584BD856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockHP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockHP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_B39726CB584BD856_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76D9186D63DAC3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetLockHP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetLockHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLOCKHP_METHOD_4_76D9186D63DAC3CA_OFFSET))(a1, a2);
		}
	};
}
