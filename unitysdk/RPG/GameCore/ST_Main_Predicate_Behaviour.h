#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_0E3EAE14EF4D21AA_OFFSET UNITYSDK_OFFSET(0x17698320)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_1A5F8C744C6E05EE_OFFSET UNITYSDK_OFFSET(0x17688A40)
#define RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x176889F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Predicate_Behaviour_TypeDefinitionIndex = 18409;

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

		static ::System::Void Method_4_0E3EAE14EF4D21AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_0E3EAE14EF4D21AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1A5F8C744C6E05EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_PREDICATE_BEHAVIOUR_METHOD_4_1A5F8C744C6E05EE_OFFSET))(a1, a2);
		}
	};
}
