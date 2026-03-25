#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_64D2AD02130A675E_OFFSET UNITYSDK_OFFSET(0x1703C4A0)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_7F73FCD9B91B0D1E_OFFSET UNITYSDK_OFFSET(0x1703C570)
#define RPG_GAMECORE_BYTARGETISSTANCEWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1703C520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsStanceWeak_TypeDefinitionIndex = 21744;

	class ByTargetIsStanceWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* AttackerType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_64D2AD02130A675E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_64D2AD02130A675E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7F73FCD9B91B0D1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsStanceWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsStanceWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISSTANCEWEAK_METHOD_4_7F73FCD9B91B0D1E_OFFSET))(a1, a2);
		}
	};
}
