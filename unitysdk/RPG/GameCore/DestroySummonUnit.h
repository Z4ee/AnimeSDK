#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_222141FED5B7D360_OFFSET UNITYSDK_OFFSET(0x17154E30)
#define RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_B0092562FAECF859_OFFSET UNITYSDK_OFFSET(0x17154EB0)
#define RPG_GAMECORE_DESTROYSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17154E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroySummonUnit_TypeDefinitionIndex = 18651;

	class DestroySummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_222141FED5B7D360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroySummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroySummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_222141FED5B7D360_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0092562FAECF859(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroySummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_B0092562FAECF859_OFFSET))(a1, a2);
		}
	};
}
