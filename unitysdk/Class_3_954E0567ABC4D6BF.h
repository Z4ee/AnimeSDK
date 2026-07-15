#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ST_Main_Predicate_Behaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_954E0567ABC4D6BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146A1870)
#define CLASS_3_954E0567ABC4D6BF_METHOD_3_66D9ED33FE5878A6_1_OFFSET UNITYSDK_OFFSET(0x146A1090)
#define CLASS_3_954E0567ABC4D6BF_METHOD_3_66D9ED33FE5878A6_OFFSET UNITYSDK_OFFSET(0x146A12B0)
#define CLASS_3_954E0567ABC4D6BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x146A0DD0)
#define CLASS_3_954E0567ABC4D6BF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x146A1740)
#define CLASS_3_954E0567ABC4D6BF_TICK_OFFSET UNITYSDK_OFFSET(0x146A14D0)
#define CLASS_3_954E0567ABC4D6BF__CTOR_OFFSET UNITYSDK_OFFSET(0x146A0D00)

inline static constexpr unsigned int Class_3_954E0567ABC4D6BF_TypeDefinitionIndex = 49842;

class Class_3_954E0567ABC4D6BF : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Predicate_Behaviour*>
{
public:
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_0; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_3_1; // 0x30
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_2; // 0x38
	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Predicate_Behaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Predicate_Behaviour*))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_DISPOSE_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_66D9ED33FE5878A6()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_METHOD_3_66D9ED33FE5878A6_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_5F51D4049EA87B7B*>* Method_3_66D9ED33FE5878A6_1()
	{
		return ((::Il2CppArray<::Class_1_5F51D4049EA87B7B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_954E0567ABC4D6BF_METHOD_3_66D9ED33FE5878A6_1_OFFSET))(this);
	}
};
