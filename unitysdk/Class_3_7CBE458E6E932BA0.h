#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_CommitCD; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_7CBE458E6E932BA0_METHOD_3_131BDB0412632141_OFFSET UNITYSDK_OFFSET(0xB267EF0)
#define CLASS_3_7CBE458E6E932BA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB267E80)
#define CLASS_3_7CBE458E6E932BA0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB268110)
#define CLASS_3_7CBE458E6E932BA0__CTOR_OFFSET UNITYSDK_OFFSET(0xB267E50)

inline static constexpr unsigned int Class_3_7CBE458E6E932BA0_TypeDefinitionIndex = 42251;

class Class_3_7CBE458E6E932BA0 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_CommitCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + CLASS_3_7CBE458E6E932BA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7CBE458E6E932BA0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7CBE458E6E932BA0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_131BDB0412632141(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7CBE458E6E932BA0_METHOD_3_131BDB0412632141_OFFSET))(this, a1, a2);
	}
};
