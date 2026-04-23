#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWTARGETHPBAR_METHOD_3_01CD460A9DF9E9C3_OFFSET UNITYSDK_OFFSET(0x18E68CE0)
#define RPG_GAMECORE_SHOWTARGETHPBAR_METHOD_3_B384933BED98FE67_OFFSET UNITYSDK_OFFSET(0x18E68D60)
#define RPG_GAMECORE_SHOWTARGETHPBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18E68D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTargetHPBar_TypeDefinitionIndex = 21855;

	class ShowTargetHPBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsShow; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01CD460A9DF9E9C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTargetHPBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTargetHPBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR_METHOD_3_01CD460A9DF9E9C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B384933BED98FE67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTargetHPBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTargetHPBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTARGETHPBAR_METHOD_3_B384933BED98FE67_OFFSET))(a1, a2);
		}
	};
}
