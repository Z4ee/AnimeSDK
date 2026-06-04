#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_3F284C2C2133A36A_OFFSET UNITYSDK_OFFSET(0x1969B3A0)
#define RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_DDE39ACCC4274351_OFFSET UNITYSDK_OFFSET(0x1969B420)
#define RPG_GAMECORE_DESTROYSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1969B3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DestroySummonUnit_TypeDefinitionIndex = 19221;

	class DestroySummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18
		::System::Boolean Immediately; // 0x20
		::System::String* FadeoutAnim; // 0x28
		::System::Boolean SyncToServer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F284C2C2133A36A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroySummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroySummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_3F284C2C2133A36A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DDE39ACCC4274351(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DestroySummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DestroySummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYSUMMONUNIT_METHOD_3_DDE39ACCC4274351_OFFSET))(a1, a2);
		}
	};
}
