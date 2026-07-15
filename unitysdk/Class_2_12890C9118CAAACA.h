#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SortTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_12890C9118CAAACA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17ADDB10)
#define CLASS_2_12890C9118CAAACA_METHOD_2_4D72DCC0B92993D6_OFFSET UNITYSDK_OFFSET(0x17ADEE10)
#define CLASS_2_12890C9118CAAACA_METHOD_2_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x17ADEE20)
#define CLASS_2_12890C9118CAAACA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17ADDCF0)
#define CLASS_2_12890C9118CAAACA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17ADE8B0)
#define CLASS_2_12890C9118CAAACA_TICK_OFFSET UNITYSDK_OFFSET(0x17ADE900)
#define CLASS_2_12890C9118CAAACA__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD9B0)

inline static constexpr unsigned int Class_2_12890C9118CAAACA_TypeDefinitionIndex = 53114;

class Class_2_12890C9118CAAACA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_3_07C3C4D2990C49EE*>* Field_2_3; // 0x30
	::RPG::GameCore::SortTargets* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::System::Boolean Field_2_6; // 0x48

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
