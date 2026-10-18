#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class Retarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E12F06CA34B14828_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBA6170)
#define CLASS_2_E12F06CA34B14828_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBA6270)
#define CLASS_2_E12F06CA34B14828_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBA6A20)
#define CLASS_2_E12F06CA34B14828_TICK_OFFSET UNITYSDK_OFFSET(0xBBA6A70)
#define CLASS_2_E12F06CA34B14828__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA6010)

inline static constexpr unsigned int Class_2_E12F06CA34B14828_TypeDefinitionIndex = 55323;

class Class_2_E12F06CA34B14828 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::Retarget* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* FBAGEMHGIIB; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x30
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x38
	::Class_3_07C3C4D2990C49EE* FNLJDEPHGFK; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Retarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Retarget*))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_TICK_OFFSET))(this, a1);
	}
};
