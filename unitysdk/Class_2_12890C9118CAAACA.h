#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12890C9118CAAACA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB82ED10)
#define CLASS_2_12890C9118CAAACA_METHOD_2_4D72DCC0B92993D6_OFFSET UNITYSDK_OFFSET(0xB830010)
#define CLASS_2_12890C9118CAAACA_METHOD_2_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0xB830020)
#define CLASS_2_12890C9118CAAACA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB82EEF0)
#define CLASS_2_12890C9118CAAACA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB82FAB0)
#define CLASS_2_12890C9118CAAACA_TICK_OFFSET UNITYSDK_OFFSET(0xB82FB00)
#define CLASS_2_12890C9118CAAACA__CTOR_OFFSET UNITYSDK_OFFSET(0xB82EBB0)

inline static constexpr unsigned int Class_2_12890C9118CAAACA_TypeDefinitionIndex = 55826;

class Class_2_12890C9118CAAACA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x18
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* FBAGEMHGIIB; // 0x30
	::RPG::GameCore::SortTargets* OFKGLJOAMLD; // 0x38
	::Class_3_07C3C4D2990C49EE* FNLJDEPHGFK; // 0x40
	::System::Boolean BGALIKOEDMJ; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SortTargets* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SortTargets*))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::SortTargets* Method_2_4D72DCC0B92993D6()
	{
		return ((::RPG::GameCore::SortTargets*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_METHOD_2_4D72DCC0B92993D6_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_2_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12890C9118CAAACA_METHOD_2_8377BC0DCBA8CDB6_OFFSET))(this);
	}
};
