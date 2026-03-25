#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETAISTOP_METHOD_3_7A56A9F13D08FDF4_OFFSET UNITYSDK_OFFSET(0x16F3FDF0)
#define RPG_GAMECORE_ADVSETAISTOP_METHOD_3_BD2BB6D8721CBC17_OFFSET UNITYSDK_OFFSET(0x16F3FE70)
#define RPG_GAMECORE_ADVSETAISTOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3FE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetAIStop_TypeDefinitionIndex = 20392;

	class AdvSetAIStop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A56A9F13D08FDF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIStop*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIStop*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP_METHOD_3_7A56A9F13D08FDF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BD2BB6D8721CBC17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetAIStop* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetAIStop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETAISTOP_METHOD_3_BD2BB6D8721CBC17_OFFSET))(a1, a2);
		}
	};
}
