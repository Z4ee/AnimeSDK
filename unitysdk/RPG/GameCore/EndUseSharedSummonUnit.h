#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37B5434BA997B5E3_OFFSET UNITYSDK_OFFSET(0x188A8A00)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37DF8488625024DA_OFFSET UNITYSDK_OFFSET(0x188A8A80)
#define RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x188A8A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndUseSharedSummonUnit_TypeDefinitionIndex = 20139;

	class EndUseSharedSummonUnit : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SummonUnit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37B5434BA997B5E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndUseSharedSummonUnit*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndUseSharedSummonUnit*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37B5434BA997B5E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37DF8488625024DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EndUseSharedSummonUnit* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EndUseSharedSummonUnit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDUSESHAREDSUMMONUNIT_METHOD_3_37DF8488625024DA_OFFSET))(a1, a2);
		}
	};
}
