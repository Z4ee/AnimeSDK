#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROCESSSTOREDDAMAGE_METHOD_3_4315169E7166DB2B_OFFSET UNITYSDK_OFFSET(0x19A84D00)
#define RPG_GAMECORE_PROCESSSTOREDDAMAGE_METHOD_3_D4C34EF143C1D369_OFFSET UNITYSDK_OFFSET(0x19A84DF0)
#define RPG_GAMECORE_PROCESSSTOREDDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A84D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProcessStoredDamage_TypeDefinitionIndex = 21519;

	class ProcessStoredDamage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* DefaultAttacker; // 0x20
		::RPG::GameCore::DynamicFloat* DamageRatio; // 0x28
		::System::Boolean CanOverkill; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4315169E7166DB2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessStoredDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessStoredDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE_METHOD_3_4315169E7166DB2B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4C34EF143C1D369(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProcessStoredDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProcessStoredDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROCESSSTOREDDAMAGE_METHOD_3_D4C34EF143C1D369_OFFSET))(a1, a2);
		}
	};
}
