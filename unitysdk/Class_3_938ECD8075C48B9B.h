#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5112518BD1B5B872.h"

class Class_1_5F51D4049EA87B7B;
class Class_3_07C3C4D2990C49EE;
class Class_4_092EA836AE6F6838;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_938ECD8075C48B9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A14D10)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_1_OFFSET UNITYSDK_OFFSET(0x15A151C0)
#define CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x15A15740)
#define CLASS_3_938ECD8075C48B9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A14E80)
#define CLASS_3_938ECD8075C48B9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A156C0)
#define CLASS_3_938ECD8075C48B9B__CTOR_OFFSET UNITYSDK_OFFSET(0x15A14BC0)

inline static constexpr unsigned int Class_3_938ECD8075C48B9B_TypeDefinitionIndex = 55525;

class Class_3_938ECD8075C48B9B : public ::Class_2_5112518BD1B5B872
{
public:
	::Class_4_092EA836AE6F6838* OFKGLJOAMLD; // 0x30
	::Class_1_5F51D4049EA87B7B* LLHKOFLJFCH; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x40
	::Class_3_07C3C4D2990C49EE* FNLJDEPHGFK; // 0x48
	::System::Int32 BNLFPGEBGFK; // 0x50
	::System::Boolean MDPNKLKHFDA; // 0x54
	::System::Single AHJEHPDBMCA; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_092EA836AE6F6838* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_092EA836AE6F6838*))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_3_1E1FFD875CA8014A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_938ECD8075C48B9B_METHOD_3_1E1FFD875CA8014A_1_OFFSET))(this);
	}
};
