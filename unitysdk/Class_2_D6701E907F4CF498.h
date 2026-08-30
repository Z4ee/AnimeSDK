#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_43B0AF86156D9901;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSequencedSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D6701E907F4CF498_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17845850)
#define CLASS_2_D6701E907F4CF498_METHOD_2_060F3E3DC8E2A26A_OFFSET UNITYSDK_OFFSET(0x17845E60)
#define CLASS_2_D6701E907F4CF498_METHOD_2_3CA12DF32E88498C_OFFSET UNITYSDK_OFFSET(0x17846210)
#define CLASS_2_D6701E907F4CF498_METHOD_2_63D396B662030C2A_OFFSET UNITYSDK_OFFSET(0x17846540)
#define CLASS_2_D6701E907F4CF498_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17845890)
#define CLASS_2_D6701E907F4CF498_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17846490)
#define CLASS_2_D6701E907F4CF498_TICK_OFFSET UNITYSDK_OFFSET(0x178464E0)
#define CLASS_2_D6701E907F4CF498__CTOR_OFFSET UNITYSDK_OFFSET(0x17845810)

inline static constexpr unsigned int Class_2_D6701E907F4CF498_TypeDefinitionIndex = 54608;

class Class_2_D6701E907F4CF498 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::Class_1_AC66714FF5876767* LAPCOHEMCJN; // 0x20
	::RPG::GameCore::UseSequencedSkill* OFKGLJOAMLD; // 0x28
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSequencedSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_63D396B662030C2A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_METHOD_2_63D396B662030C2A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntityList* Method_2_060F3E3DC8E2A26A(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_METHOD_2_060F3E3DC8E2A26A_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CA12DF32E88498C(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D6701E907F4CF498_METHOD_2_3CA12DF32E88498C_OFFSET))(this, a1, a2);
	}
};
