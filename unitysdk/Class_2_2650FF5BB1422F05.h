#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2650FF5BB1422F05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x889E500)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x889E7B0)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x889EBD0)
#define CLASS_2_2650FF5BB1422F05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x889E8F0)
#define CLASS_2_2650FF5BB1422F05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x889EA60)
#define CLASS_2_2650FF5BB1422F05_TICK_OFFSET UNITYSDK_OFFSET(0x889E640)
#define CLASS_2_2650FF5BB1422F05__CTOR_OFFSET UNITYSDK_OFFSET(0x889E470)

inline static constexpr unsigned int Class_2_2650FF5BB1422F05_TypeDefinitionIndex = 43208;

class Class_2_2650FF5BB1422F05 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x38

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

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
