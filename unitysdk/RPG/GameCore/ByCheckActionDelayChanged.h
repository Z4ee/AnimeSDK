#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_4E5FF9291EBC422A_OFFSET UNITYSDK_OFFSET(0x16FFC5A0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_8086A183F161BF34_OFFSET UNITYSDK_OFFSET(0x16FFC670)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFC620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayChanged_TypeDefinitionIndex = 21247;

	class ByCheckActionDelayChanged : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_4E5FF9291EBC422A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayChanged*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayChanged*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_4E5FF9291EBC422A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8086A183F161BF34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_METHOD_4_8086A183F161BF34_OFFSET))(a1, a2);
		}
	};
}
