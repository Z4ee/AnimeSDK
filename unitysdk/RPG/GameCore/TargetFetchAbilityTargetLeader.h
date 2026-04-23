#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_77161C5D1728BF11_OFFSET UNITYSDK_OFFSET(0x18ED7F70)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_D54AC7238F1AEB6E_OFFSET UNITYSDK_OFFSET(0x18EE17A0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED7F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTargetLeader_TypeDefinitionIndex = 22903;

	class TargetFetchAbilityTargetLeader : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean ReadFromCache; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D54AC7238F1AEB6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_D54AC7238F1AEB6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_77161C5D1728BF11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAbilityTargetLeader* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAbilityTargetLeader*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGETLEADER_METHOD_4_77161C5D1728BF11_OFFSET))(a1, a2);
		}
	};
}
