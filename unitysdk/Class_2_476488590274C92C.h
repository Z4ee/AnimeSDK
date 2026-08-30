#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_8AB7F1C824105869;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_476488590274C92C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB9BDD0)
#define CLASS_2_476488590274C92C_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x1AB9C100)
#define CLASS_2_476488590274C92C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB9BF20)
#define CLASS_2_476488590274C92C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AB9C010)
#define CLASS_2_476488590274C92C_TICK_OFFSET UNITYSDK_OFFSET(0x1AB9C0A0)
#define CLASS_2_476488590274C92C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9BD40)

inline static constexpr unsigned int Class_2_476488590274C92C_TypeDefinitionIndex = 53171;

class Class_2_476488590274C92C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_8AB7F1C824105869* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* MMEPKHGPPHJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::UInt32 GJFHPJDIECP; // 0x30
	::System::UInt32 PHENAPCKMIJ; // 0x34
	::System::UInt32 AJNLLPDCAII; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_8AB7F1C824105869* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_8AB7F1C824105869*))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_476488590274C92C_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}
};
