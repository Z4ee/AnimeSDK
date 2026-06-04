#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_827373C1CEDFE355;
class Class_1_AC66714FF5876767;
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSequencedSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_239F7A3C0AF2BBDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144F24D0)
#define CLASS_2_239F7A3C0AF2BBDB_METHOD_2_060F3E3DC8E2A26A_OFFSET UNITYSDK_OFFSET(0x144F2910)
#define CLASS_2_239F7A3C0AF2BBDB_METHOD_2_63D396B662030C2A_OFFSET UNITYSDK_OFFSET(0x144F2DD0)
#define CLASS_2_239F7A3C0AF2BBDB_METHOD_2_CB63CE00D92A7A9B_OFFSET UNITYSDK_OFFSET(0x144F2B80)
#define CLASS_2_239F7A3C0AF2BBDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144F2510)
#define CLASS_2_239F7A3C0AF2BBDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144F2D20)
#define CLASS_2_239F7A3C0AF2BBDB_TICK_OFFSET UNITYSDK_OFFSET(0x144F2D70)
#define CLASS_2_239F7A3C0AF2BBDB__CTOR_OFFSET UNITYSDK_OFFSET(0x144F2490)

inline static constexpr unsigned int Class_2_239F7A3C0AF2BBDB_TypeDefinitionIndex = 50839;

class Class_2_239F7A3C0AF2BBDB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_AC66714FF5876767* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::UseSequencedSkill* Field_2_2; // 0x28
	::Class_1_827373C1CEDFE355* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSequencedSkill* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_63D396B662030C2A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::AISelector* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_METHOD_2_63D396B662030C2A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntityList* Method_2_060F3E3DC8E2A26A(::System::Int32 a1)
	{
		return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_METHOD_2_060F3E3DC8E2A26A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB63CE00D92A7A9B(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_239F7A3C0AF2BBDB_METHOD_2_CB63CE00D92A7A9B_OFFSET))(this, a1, a2);
	}
};
