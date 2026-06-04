#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETLEVEL_METHOD_3_895507202C200CBE_OFFSET UNITYSDK_OFFSET(0x19C53240)
#define RPG_GAMECORE_SETLEVEL_METHOD_3_E777FEB59BD32382_OFFSET UNITYSDK_OFFSET(0x19C53310)
#define RPG_GAMECORE_SETLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C532C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLevel_TypeDefinitionIndex = 22373;

	class SetLevel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ByStageLevel; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_895507202C200CBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL_METHOD_3_895507202C200CBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E777FEB59BD32382(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLEVEL_METHOD_3_E777FEB59BD32382_OFFSET))(a1, a2);
		}
	};
}
