#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_483BBD0B0A74028D_OFFSET UNITYSDK_OFFSET(0x19C05C10)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_B62AD5DD97A7C627_OFFSET UNITYSDK_OFFSET(0x19C194E0)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19C05BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Predicate_Behaviour_TypeDefinitionIndex = 18994;

	class ST_Main_Predicate_Behaviour : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* SuccessTaskList; // 0x20
		::Il2CppArray<::RPG::GameCore::STTaskConfig*>* FailedTaskList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B62AD5DD97A7C627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_B62AD5DD97A7C627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_483BBD0B0A74028D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_483BBD0B0A74028D_OFFSET))(a1, a2);
		}
	};
}
