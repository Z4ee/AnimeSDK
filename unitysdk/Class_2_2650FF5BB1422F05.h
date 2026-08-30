#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2650FF5BB1422F05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF05A80)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_20A698DC0CFFEC8A_OFFSET UNITYSDK_OFFSET(0xBF06270)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xBF05DB0)
#define CLASS_2_2650FF5BB1422F05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF05F00)
#define CLASS_2_2650FF5BB1422F05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF060F0)
#define CLASS_2_2650FF5BB1422F05_TICK_OFFSET UNITYSDK_OFFSET(0xBF05C40)
#define CLASS_2_2650FF5BB1422F05__CTOR_OFFSET UNITYSDK_OFFSET(0xBF059F0)

inline static constexpr unsigned int Class_2_2650FF5BB1422F05_TypeDefinitionIndex = 53631;

class Class_2_2650FF5BB1422F05 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x20
	::Class_3_07C3C4D2990C49EE* GELDCMCEBJF; // 0x28
	::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* OFKGLJOAMLD; // 0x30
	::System::Boolean MFGHMLJJNIG; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_20A698DC0CFFEC8A(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_20A698DC0CFFEC8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
